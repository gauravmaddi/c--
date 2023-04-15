#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value";
    cin>>n;
    for(int i=1;i<=10;i++){
        int tab;

        tab=n*i;
        cout<<n <<"x" <<i <<" ="<<tab<<endl;
    }
}
