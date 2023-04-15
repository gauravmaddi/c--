#include<iostream>
using namespace std;
int print_name(){
int count=0;
cout<<"Enter your value"<<endl;
int a;
cin>>a;

 for(int i=0;i<a;i++)
{
    cout<<"Gaurav"<<endl;
    count++;

}


return count;
}
int main ()
{

    cout<<print_name();


return 0 ;
}

