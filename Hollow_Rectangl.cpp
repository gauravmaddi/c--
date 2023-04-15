#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:";
    int n;
    cin>>n;
    for(int row =0;row<n;row+=1)
    {
        for(int col=0;col<n;col+=1)
        {
            cout<<"* ";
            if (row==0||row==n-1)
            {
                cout<<"* ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}

