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
void heapSortHelper(T* array, int element, int count)
{
    int elIndex = 1;
    while(true)
    {
        int leftChIndex = elIndex*2 + 1;
        int rightChIndex = elIndex*2 + 2;

        bool isSmallerThanLeft = leftChIndex<count && array[elIndex] < array[leftChIndex];
		bool isSmallerThanRight = rightChIndex<count && array[elIndex] < array[rightChIndex];

		if (isSmallerThanLeft && !isSmallerThanRight)
		{
			swap(array,elIndex, leftChIndex);
			elIndex = leftChIndex;
		}
		else if (!isSmallerThanLeft && isSmallerThanRight)
		{
			swap(array,elIndex, rightChIndex);
			elIndex = rightChIndex;
		}
		else if (isSmallerThanLeft && isSmallerThanRight)
		{
			if (array[leftChIndex] > array[rightChIndex])
			{
				swap(array,elIndex, leftChIndex);
				elIndex = leftChIndex;
			}
			else
			{
				swap(array,elIndex,rightChIndex);
				elIndex = rightChIndex;
			}
		}
		else
        {
            break;
        }

	}
}

template<class T>
void heapSort(T* array, int length)
{
    for(int i = length/2; i >= 0; i--)
    {
        heapSortHelper<T>(array,i,length);
    }
    for(int i = 0; i < length-1; i++)
    {
        swap<T>(array,0,length-1-i);
        heapSortHelper<T>(array,0,length-1-i);
    }
}

int main()
{
    int arr[] = {9,8,7,6,1,2,3,4,5};
    heapSort<int>(arr,9);
    for(int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}