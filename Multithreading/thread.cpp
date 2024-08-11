#include <iostream>
#include <thread>

void foo() {}
void bar(int x){}
int main()
{
    std::thread first (foo);
    std::thread second(bar,0);
    std::cout<<"Main thread Foo and Bar are now executing concurrently"<<std::endl;
    first.join();
    second.join();
    std::cout<<"foo and bar completed"<<std::endl;
    return 0;
}