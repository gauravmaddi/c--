#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";

    cin>>n;

    int arr[n];
    memset(arr,10,sizeof(arr));
    cout<<arr[2]<<" ";

}
