#include<iostream>
using namespace std;
void count_num(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter a value"<<endl;
    cin>>n;
    count_num(n);

}
