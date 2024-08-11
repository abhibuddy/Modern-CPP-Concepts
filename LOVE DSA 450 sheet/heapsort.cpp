#include <iostream>
#include <queue>
void heapSort(std::vector<int>& vec)
{
    std::priority_queue<int> q;
    for(const auto& ele:vec )
    {
        q.push(ele);
    }
    for(int i=vec.size()-1;i>=0;i--)
    {
        vec[i] = q.top();
        q.pop();
    }
}
// Function to print an array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Original array: ";
    printArray(arr);

    heapSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}