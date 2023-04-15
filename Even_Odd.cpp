#include<iostream>
using namespace std;
void even_odd(int num)
{
    if (num%2==0)
    {
        cout<<"Number is even ";

    }

    else
    {
        cout<<"Number is odd ";

    }
}
int main ()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    even_odd(n);
    return 0;

}
