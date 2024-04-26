solution to question : https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       std::unordered_map<char,int> umap;
       for(const char& c : S)
       {
           umap[c]++;
       }
       for(const char& c : S)
       {
           if(umap[c] == 1)
           //std::cout<<c<<std::endl;
           return c;
       }
       return '$';
    }

};