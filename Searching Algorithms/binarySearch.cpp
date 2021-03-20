#include <iostream>
using namespace std;

template<class T>
int binarySearch(const T* array, int length, T searched)
{
    int leftIndex = 0;
    int rightIndex = length - 1;
    while(leftIndex <= rightIndex)
    {
        int midIndex = (leftIndex + rightIndex) / 2;
        if(array[midIndex] == searched)
        {
            return midIndex;
        }
        if(array[midIndex] > searched)
        {
            rightIndex = midIndex -1;
        }
        else
        {
            leftIndex = midIndex + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    cout << binarySearch<int>(arr,7,10) << endl;
    return 0;
}
