/**
n = 13
Votes[] = {john, johnny, Jackie, Johnny, John, Jackie, Jamie, Jamie, john, johnny, Jamie, johnny, john}

Output: john 4
**/
#include <iostream>
#include <algorithm>
#include<vector>
#include<cctype>
#include <unordered_map>
void winner(std::vector<std::string> votes)
{
    std::unordered_map<std::string,int> count;
    for(std::string vote : votes)
    {
        transform(vote.begin(), vote.end(), vote.begin(), ::toupper);
        count[vote]++;
    }
    std::string winner = "";
    int max_vote=0;
    for(auto c:count)
    {
        if(max_vote<c.second)
        {
            max_vote=c.second;
            winner=c.first;
        }
        else if (max_vote == c.second)
        {
            winner = (winner>c.first) ? c.first:winner; 
        }
    }
    
    std::cout<<"winner is : "<<winner<<" with votes "<<max_vote<<std::endl;
}
int main()
{
    std::vector<std::string> votes = {"john", "johnny", "Jackie", "Johnny", "John", "Jackie", "Jamie", "Jamie", "john", "johnny", "Jamie", "johnny", "john"};
    winner(votes);
    return 0;
}