#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        for(int row=0;row<n;row=row+1)
        {
            for(int col=0;col<n-row-1;col++)
            {
                cout<<" ";
            }
            for(int col=0;col<2*row+1;col++)
            {
                if(col==0)
                {
                    cout<<"*";
                }
                else if(col==2*row)
                {
                    cout<<"* ";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }

}
