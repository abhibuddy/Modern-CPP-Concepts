// permutation of string

#include <iostream>

void permutation(std::string str,std::string ans)
{
    //base case 
    if(str.size()==0)
    {
        std::cout<<ans<<std::endl;
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        // for each of the characters add that character in ans and find permuation for other letters
         std::string nextstr = str.substr(0,i)+str.substr(i+1,str.size()-i-1);
         permutation(nextstr,ans+str[i]);
    }
}

int main()
{
    std::string str = "abc";
    std::string ans ="";
    permutation(str,ans);
    return 0;
}