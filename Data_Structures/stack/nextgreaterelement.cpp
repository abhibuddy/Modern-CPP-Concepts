#include <iostream>
#include <stack>
#include <vector>

void nextgreaterelement(std::vector<int> nums,std::vector<int>& ans)
{
    std::stack<int> st;
    for(int i = (nums.size()-1);i>=0;i--)
    {
        while(!st.empty() && st.top() < nums[i])
        {
            st.pop();
        }
        int next = st.empty() ? -1:st.top();
        ans.push_back(next);
        st.push(nums[i]);
    }
}
int main()
{
    std::vector<int> v={10,2,54,7,1,16};
    std::vector<int> ans;
    nextgreaterelement(v,ans);

    for(auto v : ans)
    {
        std::cout<<v<<" ";
    } 

    return 0;
}