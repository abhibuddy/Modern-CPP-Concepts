#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string,int> hash;
    hash["a"]=20;
    hash["b"]=25;
    hash["c"]=63;
    hash["d"]=11;

    //access element
    std::cout<<"the value in b :"<<hash["b"]<<std::endl;
    //check if the given key exists or not
    if(hash.find("c")!=hash.end())
    {
        std::cout<<"the value in c : "<<hash["c"]<<std::endl;
    }
    //printing all elements in hash
    std::cout<<"\nall the values are: "<<std::endl;
    for(auto val:hash)
    {
        std::cout<<val.first<<" => "<<val.second<<std::endl;
    }
    return 0;
}