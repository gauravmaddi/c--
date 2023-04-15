#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={-5,-2,-3,-11,};
    int size=4;
    int maxi=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<maxi)
        {
            maxi=arr[i];
        }
    }
cout<<maxi;
return 0;
}
