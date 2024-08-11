#include <iostream>

bool palindrome(std::string str)
{
    int start =0;
    int end = str.length()-1;
    std::cout<<"checking palindrome :"<<std::endl;
    while(start <= end)
    {
        if(str[start] != str[end])
        return false;
        start++;
        end--;
    }
    return true;
}
int main()
{
    std::string str = "madam";
    bool isPalindrome = palindrome(str);
    if(isPalindrome) std::cout<<"string is palindrome";else std::cout<<"not a palindrome";
    return 0;
}