#include <iostream>
#include <future>
#include <exception>

int faultyfunction()
{
    throw std::runtime_error("an error occured");
}

int main()
{ std::future<int> result = std::async(std::launch::async,faultyfunction);
    try{
        int value = result.get();
    }
    catch(const std::exception& e )
    {
        std::cerr<<"cautch exception : "<<e.what()<<std::endl;
    }
    return 0;
}