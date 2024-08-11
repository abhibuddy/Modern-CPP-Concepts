#include <iostream>
#include <vector>

std::vector<int> unionarr(const std::vector<int>& arr1,const std::vector<int>& arr2)
{
    int i=0;int j=0;
    std::vector<int> uniarr;
    int m = arr1.size();
    int n = arr2.size();
    while(i<m && j<n)
    {
        if(arr1[i]>arr2[j])
        {
            uniarr.push_back(arr2[j++]);

        }
        else if(arr1[i]<arr2[j])
        {
            uniarr.push_back(arr1[i++]);
        }
        else{
            uniarr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<m)
    {
            uniarr.push_back(arr1[i++]);
    }
    while(j<n)
    {
            uniarr.push_back(arr2[j++]);
    }
    return uniarr;
}
std::vector<int> intrarr(const std::vector<int>& arr1,const std::vector<int>& arr2)
{
    int i=0;int j=0;
    std::vector<int> intarr;
    int m = arr1.size();
    int n = arr2.size();
    while(i<m && j<n)
    {
        if(arr1[i]>arr2[j])
        {
            j++;

        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            intarr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return intarr;
}
int main() {
    std::vector<int> arr1 = {1, 2, 4, 5, 6};
    std::vector<int> arr2 = {2, 3, 5, 7};

    std::vector<int> unionResult = unionarr(arr1, arr2);
    std::vector<int> intersectionResult = intrarr(arr1, arr2);

    std::cout << "Union of the two arrays is: ";
    for (int num : unionResult) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Intersection of the two arrays is: ";
    for (int num : intersectionResult) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
