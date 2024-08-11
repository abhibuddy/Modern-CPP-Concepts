// topdown approach to solve 
// info : we can take 1 or 2 steps at one time to climb the stairs
#include <iostream>
#include <unordered_map>

std::unordered_map<int,long long> memo;
/*int climbstairs(int totalstairs,int stepsat)
{
    
    if(stepsat == totalstairs) return 1;
    if(stepsat > totalstairs) return 0;
    return climbstairs(totalstairs,stepsat+1)+climbstairs(totalstairs,stepsat+2);
}*/
long long climbstairs(int totalstairs,int stepsat)
{
    
    if(stepsat == totalstairs) return 1;
    if(stepsat > totalstairs) return 0;
    if(memo.find(stepsat)!=memo.end()) return memo[stepsat];
    memo[stepsat]=climbstairs(totalstairs,stepsat+1)+climbstairs(totalstairs,stepsat+2);
    return memo[stepsat];
}

int main()
{
    int n = 5;
    std::cout<<"the number of ways "<<climbstairs(n,0)<<std::endl;
    return 0;
}