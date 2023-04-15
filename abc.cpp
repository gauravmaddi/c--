#include<iostream>
using namespace std;

    void countOddEven(int arr[], int sizeof_array)
    {

        // your code here
        int even=0;
        int odd=0;

        for (int i=0;i<sizeof_array;i++)

        {

            if (arr[i]%2==0)

            {
                even++;
            }
            else
            {
                odd++;
            }
        }
       cout<<odd<<" "<<even;

    }

int main()
{
    int arr[]={1,2,3,4,5,6,9,8,7,5,66,1,22,3,5,5,};
    int size=16;
    countOddEven(arr,size);
}
