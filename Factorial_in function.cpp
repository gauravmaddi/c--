#include<iostream>
using namespace std;
long long int get_facto(long long int num)
{
   long long int   facto=1;
    for(int i=num;i>=1;i--)
    {
         facto=facto*i;

    }
    return facto;
}
int main ()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    long long int  finall=get_facto(n);
    cout<<"Factorial is "<<finall;
    return 0;
}
