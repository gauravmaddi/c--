#include<iostream>
using namespace std;
int sum_of_even(int n)
{
    int sum=0;
    for(int i =2;i<=n;i+=2)
    {
        //modulus is havey so  avoid to use it
//        if(i%2==0)
       {            sum=sum+i;        }

    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter a value:";
    cin>>n;
    int final_sum=sum_of_even(n);
    cout<<final_sum;
    return 0;
}
