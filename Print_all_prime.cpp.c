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

}
