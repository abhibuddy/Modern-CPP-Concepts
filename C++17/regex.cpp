/**
 * c++17 concept
 * <regex> liberary
*/
#include <iostream>
#include <regex> 
//regex_search(text,std::smatch varibale,regex) ->smach variable.str() to fetch the string 
//regex_match(text,regex) -> Just for comparison i.e. boolean
using namespace std;

int main()
{
    // 1. text from which we have to search something
    std::string text = "Hello, my email address is example@example.com and my phone number is 123-456-7890.";
    // 2. regular expression    
    std::regex emailRegex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    std::regex phoneRegex(R"(\d{3}-\d{3}-\d{4})");


    std::smatch emailmatch; //3. smatch = string matched
    if (std::regex_search(text,emailmatch,emailRegex))
    {
        std::cout<<emailmatch.str()<<std::endl;
    }

    std::string email = "example@emaple.com";
    if (std::regex_match(email, emailRegex)) {
        std::cout << "Valid email address." << std::endl;
    }

    return 0;
}