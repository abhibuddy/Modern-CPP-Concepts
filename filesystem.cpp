#include <iostream>
#include <filesystem>
namespace fs = std::filesystem; 
int main()
{
    fs::path dirpath = fs::current_path(); //for fetching current path
    std::cout<<"current dir path is : "<<dirpath<<std::endl;
    fs::path filePath = "code/output";
    if(fs::exists(filePath)) //to check it exits or not
    {
        std::cout<<"filepath already exists"<<std::endl;
    }
    else
    {
        fs::create_directory(filePath); // creating directory 
    }

    for(const auto& entry : fs::directory_iterator(dirpath)) // iterating over the directory
    {
        if(entry.is_regular_file()) // for normal files 
        {
            std::cout<<"File : "<<entry.path()<<std::endl;
        }
        else if(entry.is_directory()) // for directory 
        {
            std::cout<<"directory : "<<entry.path()<<std::endl;
        }

    } 

    return 0;
}