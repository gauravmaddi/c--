
#include<iostream>
using namespace std;
int biggest_num(int a, int b,int c)
{
    if (a>b && a>c)

    {
        cout<<"First value is big"<<a<<endl;


    }
    else if(b>a &&b>c)
    {
        cout<<"Second value is big"<<b<<endl;

    }
    else
    {
        cout<<"Third value is big"<<c<<endl;
    }
}
int main()
{
    cout<<"Enter first value:"<<endl;
    int a,b,c;
    cin>>a;
    cout<<"Enter second value:"<<endl;
    cin>>b;
    cout<<"Enter third value:"<<endl;
    cin>>c;
    biggest_num(a,b,c);
}



