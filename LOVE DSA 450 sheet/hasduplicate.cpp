#include<iostream>
#include<unordered_map>

void findDuplicates(std::string str)
{
    std::unordered_map<char,int> countchar;
    for(auto s : str)
    {
        countchar[s]++;
    }
    for(auto p:countchar)
    {
        if(p.second > 1)
        {
            std::cout<<p.first<<" "<<std::endl;
        }
    }
}
int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    findDuplicates(str);

    return 0;
}
