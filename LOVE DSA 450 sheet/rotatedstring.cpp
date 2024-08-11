//Write a Code to check whether one string is a rotation of another
#include <iostream>

bool Isrotated(std::string s1,std::string s2)
{
    if(s1.length()!=s2.length())
    return false;
    if((s1+s1).find(s2) ==std::string::npos)
    return false;
    return true;
}
int main()
{
    std::string s1 = "ABCD";
    std::string s2 = "BCDA";
    std::cout<<"one string is the rotated form of other ? "<<std::boolalpha<<Isrotated(s1,s2)<<std::endl;
}