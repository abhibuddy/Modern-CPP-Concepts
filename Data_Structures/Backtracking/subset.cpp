// find the subsets of given string
#include <iostream>

void printSubset(std::string str, std::string subset)
{
    if(str.size()==0)
    {
        std::cout<<subset<<std::endl;
        return;
    }
    char ch = str[0];
    // yes case :: include the value in subset
    printSubset(str.substr(1,str.size()-1),subset+ch);
    // No case :: don't include the value in subset
    printSubset(str.substr(1,str.size()-1),subset);
}
int main()
{
    std::string str = "abc";
    std::string subset = "";
    printSubset(str,subset); 
    return 0;
}