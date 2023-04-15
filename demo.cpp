
#include<iostream>

using namespace std;
int main()
{int n;
cin>>n;
    int temp=n-1;
for(int row=0;row<=n;row+=1)
{

    for(int col=temp;col>0;col--)
    {

        cout<<" ";
    }

    for(int j=1;j<=row;j++)

    {
        cout<<"* ";
    }
    cout<<endl;
    temp--;
}

}


