#include <iostream>
#include <queue>
#include <unordered_map>
void firstNonRepeatingChar(std::string str)
{
 std::unordered_map<char,int> fremap;
 std::queue<char> q;
 for(char ch:str)
 {
    fremap[ch]++;
    q.push(ch);
 }
 while(!q.empty() && fremap[q.front()]>1)
 {
    q.pop();
 }
    // If the queue is not empty, the front is the first non-repeating character
        if (!q.empty()) {
            std::cout << "First non-repeating character: " << q.front() << std::endl;
        } else {
            std::cout << "No non-repeating character found." << std::endl;
        }

}
int main()
{
    std::string val = "aabcdebbc";
    firstNonRepeatingChar(val);
    return 0;
}