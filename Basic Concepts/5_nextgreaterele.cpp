#include <iostream>
#include <vector>
#include <stack>
std::vector<int> nextgreaterele(std::vector<int> nums)
{
    int n = nums.size();
    std::stack<int> s;
    std::vector<int> result(nums.size(),-1);
    // traverse from the last element to first element 
    for(int i = n-1;i>=0;--i)
    {
        // till the time stack top element is less then number
        while(!s.empty() && s.top()<=nums[i]){
            s.pop();
        }
        // insert the top element in result
        if(!s.empty())
        {
            result[i]=s.top();
        }
        s.push(nums[i]);

    }
    return result;
}
int main()
{
    std::vector<int> arr =  {2, 1, 2, 4, 3};
    std::vector<int> result = nextgreaterele(arr);
    
    // Print the result
    for (int i : result) {
        std::cout << i << " ";
    }

    return 0;
}