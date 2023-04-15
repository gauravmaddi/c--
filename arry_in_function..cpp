#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }

    cout<<++sizeS<<endl;
}
void inc(int abc[],int size)
{
    abc[0]=abc[0]+10;


        printArray(abc,size);
//cout<<++size;

//cout<<size;
}
int main()
{

    int arr[]={5,6};
    int size=2;

    inc(arr,size);
    printArray(arr,size);
   // cout<<sizeof arr<<endl;
   // cout<<size;
}
