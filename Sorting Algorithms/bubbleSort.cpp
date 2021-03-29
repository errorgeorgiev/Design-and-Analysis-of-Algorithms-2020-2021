#include <iostream>
using namespace std;

template<class T>
void swap(T* array, int i, int j)
{
    T temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

template<class T>
void bubbleSort(T* array, int length)
{
    int end = length - 1;
    for(int i = 0; i < length; i++)
    {
        int lastSwappedIndex = 0;
        for(int j = 0; j < end; j++)
        {
            if(array[j] > array[j+1])
            {
                swap(array,j,j+1);
                lastSwappedIndex = j;
            }
        }
        end = lastSwappedIndex;
        if(lastSwappedIndex == 0)
        {
            return;
        }
    }

}

int main()
{
    int arr[] = {7,6,5,4,3,2,1};
    bubbleSort<int>(arr,7);
    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
