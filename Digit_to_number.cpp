#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int digit[n];
    for(int i=0;i<n;i++)
    {
        cin>>digit[i];
    }
    int ans=0;
    for (int i=0;i<=n-1;i++)
    {
        ans=ans*10+digit[i];
    }
    cout<<ans;
}
