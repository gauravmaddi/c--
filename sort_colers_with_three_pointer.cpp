#include<iostream>
#include<vector>
using namespace std;
void moveALLnegtoleft(int *a,int n)
{
    int l=0,h=n-1;

    while(l<h)
    {
        if(a[l]<0)
        {
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[h],a[l]);
            h--;
            l++;
        }
    }
}
int main ()
{
    int arr[]={1,2,-5,-7,-2,6,-1};
    int n=sizeof(arr)/sizeof(int);
    moveALLnegtoleft(arr,n);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
