#include<iostream>
using namespace std;
int get_area(int r)
{
    int area;
    area=3.14*r*r;
    return area;

}
int main()
{
    cout<<"Enter radius: "<<endl;
    int r ;
    cin>>r;
    int result=get_area(r);
    cout<<result;
    return 0;

}
