#include<iostream>
using namespace std;

int main()
{
        int n;
        cout<<"Enter a number"<<endl;
        cin>>n;
        int col;
            //outer row loop

                for(int row=0;row<n;row=row +1)
                {
                    //Loop for space
                    for( col=0;col<n-row-1;col=col+1)
                    {
                        cout<<" ";

                    }
                    //Loop for stars

                    for( col=0;col<row+1;col=col+1)
                    {
                        cout<<"* ";
                    }
                    cout<<endl;
                }




}
