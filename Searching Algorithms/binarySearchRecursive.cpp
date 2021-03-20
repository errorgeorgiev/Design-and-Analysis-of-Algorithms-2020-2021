#include <iostream>
using namespace std;

template<class T>
bool binarySearchRecursive(const T* array, int length, T searched)
{
    if(length == 0)
    {
        return false;
    }
    int midIndex = length / 2;
    if(array[midIndex] == searched)
    {
        return true;
    }
    if(array[midIndex] < searched)
    {
        return binarySearchRecursive(array + midIndex + 1, length - midIndex - 1, searched);
    }
    else
    {
        return binarySearchRecursive(array, midIndex, searched);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    cout << binarySearchRecursive(arr,7,3) << endl;
    return 0;
}