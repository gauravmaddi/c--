#include<iostream>
using namespace std;
void get_digit(int n)
{

    while(n!=0)
    {
     int rem=n%10;
     cout<<rem<<',';
     n=n/10;
    }
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    get_digit(n);
    return 0;


}
