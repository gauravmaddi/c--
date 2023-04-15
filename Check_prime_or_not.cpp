#include<iostream>
using namespace std;
bool check_prime(int num)
{
    for (int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
        return true;

}
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    bool isPrime=check_prime(num);
    if (isPrime)
    {
        cout<<"Number is prime";

    }
    else{
        cout<<"Number is not prime";

    }
   return 0;

}
