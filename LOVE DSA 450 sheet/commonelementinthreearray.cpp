#include <iostream>
#include <vector>

std::vector<int> findCommonElements(std::vector<int> arr1, std::vector<int> arr2,std::vector<int> arr3)
{
    std::vector<int> result;
    int i=0;int j=0;int k = 0;
    while(i<arr1.size(),j<arr2.size(),k<arr3.size())
    {
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr3[k])
        {
            j++;
        }   
        else
        k++;
    }
    return result;
}
int main()
{
    std::vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    std::vector<int> arr2 = {6, 7, 20, 80, 100};
    std::vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    std::vector<int> result = findCommonElements(arr1, arr2, arr3);

    std::cout << "Common elements are: ";
    for (int elem : result) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}