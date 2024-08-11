#include <iostream>

void substring(std::string input,std::string output)
{
    if(input == "")
    {
        std::cout<<output<<" ";
        return;
    }
    substring(input.substr(1),output);
    substring(input.substr(1),output+input[0]);
    
}
int main()
{
    std::string s = "AAA";
    substring(s,"");
    return 0;
}