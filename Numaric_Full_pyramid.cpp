#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:";
    int n;
    cin>>n;

    for(int row=0;row<n;row+=1)
    {
        for(int col=0;col<n-row-1;col+=1)
        {
            cout<<" ";
        }


        for( int col=0;col<row+1;col+=1)
        {

            cout<<row+col+1;
        }
            int start=2*row;
        for(int col=0;col<row;col++)

        {
            cout<<start;
        start --;

        }
        cout<<endl;



    }

}
