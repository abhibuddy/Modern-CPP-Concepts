#include <iostream>
#include <thread>

class SomeFunctor
{
public:
void operator()()
{
    for(int i=0;i<5;i++)
    {
        std::cout<<"display from functor"<<std::endl;
    }

}
};
void thread_function()
{
    for(int i=0;i<5;i++)
    {
        std::cout<<"thread funciton execution"<<std::endl;
    }
}
int main()
{
    //std::thread threadobj(thread_function);
    //std::thread threadobj((SomeFunctor()));
    std::thread threadobj([](){
        for(int i=0;i<5;i++)
        {
            std::cout<<"display thread lambda"<<std::endl;
        }
    });
    for(int i=0;i<5;i++)
    {
        std::cout<<"Display main thread"<<std::endl;
    }
    threadobj.join();
    std::cout<<"exiting main thread"<<std::endl;
    return 0;
}