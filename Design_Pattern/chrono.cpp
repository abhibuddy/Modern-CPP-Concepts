#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;

// Function to convert the current system time to local time and return it as a std::chrono::system_clock::time_point
std::chrono::system_clock::time_point getLocalTime(const std::chrono::system_clock::time_point& now) {
    // Convert the system time to std::time_t
    std::time_t nowTimeT = std::chrono::system_clock::to_time_t(now);

    // Convert std::time_t to std::tm structure for local time
    std::tm localTimeInfo = *std::localtime(&nowTimeT);

    // Convert std::tm structure back to std::chrono::system_clock::time_point
    return std::chrono::system_clock::from_time_t(std::mktime(&localTimeInfo));
}

std::chrono::system_clock::time_point fromStringtoISO(const std::string& isoString) {
    std::tm timeInfo = {0};

    // Use std::get_time with a const char* as the input string
    std::istringstream iss(isoString);
    iss >> std::get_time(&timeInfo, "%Y-%m-%dT%H:%M:%S");

    if (iss.fail()) {
        throw std::runtime_error("Error parsing the ISO 8601 formatted string.");
    }

    return std::chrono::system_clock::from_time_t(std::mktime(&timeInfo));
}

std::string fromISOtoString(const std::chrono::system_clock::time_point& timePoint) {
    std::time_t timeTValue = std::chrono::system_clock::to_time_t(timePoint);

    // Extract the components of the time_point
    std::tm timeInfo = *std::localtime(&timeTValue);

    // Create the ISO 8601 formatted string
    std::ostringstream oss;
    oss << std::put_time(&timeInfo, "%Y-%m-%dT%H:%M:%S") << ".000Z";
    return oss.str();
}

// Custom function to calculate the time difference in minutes between the given time string and the current time
double timeDifferenceInMinutes(const std::string& isoString) {
    // Convert the ISO 8601 formatted string to a time_point
    std::chrono::system_clock::time_point timePoint = fromStringtoISO(isoString);
    std::cout<<"val 1"<< fromISOtoString(timePoint)<<std::endl;
    // Get the current time
    std::chrono::system_clock::time_point now = getLocalTime(std::chrono::system_clock::now());
    // convert it to local time
    now = getLocalTime(now);
    std::cout<<"val 1"<< fromISOtoString(now)<<std::endl;
    // Calculate the time difference in minutes
    std::chrono::duration<double> diff = now - timePoint;
    return std::chrono::duration_cast<std::chrono::minutes>(diff).count();
}

int main()
{
    std::string isoTimeString = "2023-07-20T06:00:00.000Z";
    try{
        std::chrono::system_clock::time_point isoTime = fromStringtoISO(isoTimeString);
        std::string convertedtimestring = fromISOtoString(isoTime);
        
        std::cout<<isoTimeString<<std::endl;
        std::cout<<convertedtimestring<<std::endl;
        double minutesOld = timeDifferenceInMinutes(isoTimeString);

        std::cout << "Time difference: " << minutesOld << " minutes" << std::endl;
        
    }catch(const std::exception& e)
    {
        std::cerr<<e.what()<<std::endl;
    }

    return 0;
}