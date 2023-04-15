#include<iostream>
using namespace std;
bool check_all_prime(int n)
{
    for (int i=2 ;i<n;i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for (int i=2;i<=n;i++)
    {


    bool isiprime=check_all_prime(i);
    if (isiprime)
    {
        cout<<i<<" ";
    }
    }
    return 0;

}
