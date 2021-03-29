#include<iostream>
using namespace std;

template<class T>
void swap(T* array, int i, int j)
{
    T temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

template<class T>
void coctailShakerSort(T* array, int length)
{
    bool swapped;
    int iterCount = 0;
    do
    {
        swapped = false;
        for(int i = iterCount; i < length-1-iterCount; i++)
        {
            if(array[i] > array[i+1])
            {
                swap(array,i,i+1);
                swapped = true;
            }
        }
        if(!swapped)
        {
            return;
        }
        for(int i = length-2-iterCount; i >= iterCount; i--)
        {
            if(array[i] < array[i-1])
            {
                swap(array,i,i-1);
                swapped = true;
            }
        }
        iterCount++;

    } while (swapped);
    
}
int main()
{
    int arr[] = {6,5,4,3,2,1};
    coctailShakerSort<int>(arr,6);
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}