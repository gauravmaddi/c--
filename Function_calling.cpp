#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
    cout<<"Enter a number:"<<endl;
    int a,b;
    cin>>a;
    cout<<"Enter a number"<<endl;
    cin>>b;
    cout<<add(a,b);
    return 0;

}
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
