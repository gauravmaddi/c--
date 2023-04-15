#include<iostream>
using namespace std;
long long int get_reverse(int n)
{
    long long int ans=0;

    while (n>0)
    {
        long long int  digit= n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    return ans;
}
int main ()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    long long int    result=get_reverse(n);
    cout<<result;
    return 0;
}
