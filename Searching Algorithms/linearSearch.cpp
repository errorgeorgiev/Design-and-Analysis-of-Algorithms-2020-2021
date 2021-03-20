#include <iostream>
using namespace std;

template<class T>
bool linearSearch(const T* array, int length, T searched)
{
    for(int i = 0; i < length; i++)
    {
        if(array[i] == searched)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    cout << linearSearch(arr,7,10) << endl;
    return 0;
}