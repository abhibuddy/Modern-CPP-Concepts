#include <iostream>
#include <algorithm>
#include <vector>

struct Item
{
    int value,weight;
    Item(int v,int w) : value(v),weight(w){};
};
bool comp(struct Item a,struct Item b)
{
    double r1  = (double) a.value/a.weight;
    double r2  = (double) b.value/b.weight;

    return r1 > r2; 
}

double fractionalKnapsack(int W, std::vector<Item> arr)
{
    sort(arr.begin(),arr.end(),comp);
    int currentweight = 0;
    int finalvalue = 0;
    
    for(size_t i = 0; i < arr.size();i++ )
    {
        if(currentweight + arr[i].weight <= W)
        {
            currentweight += arr[i].weight;
            finalvalue += arr[i].value;
        }
        else
        {
            int remain = W-currentweight;
            
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }
    return finalvalue;
}
int main()
{
    int W = 50; // Weight of knapsack
    std::vector<Item> arr = { {60, 10}, {100, 20}, {120, 30} };

    std::cout << "Maximum value in Knapsack = " << fractionalKnapsack(W, arr) << std::endl;
    return 0;
}