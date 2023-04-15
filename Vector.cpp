#include<iostream>
#include<vector>
using namespace std;
int main()
{
//    vector<int> arr;
//    int ans=(arr.size()/sizeof(int));
//    cout<<ans<<endl;
//    cout<<arr.size()<<endl;
//    cout<<arr.capacity()<<endl;
int n;
cout<<"enter";
cin>>n;


//vector<int> arr(n,101);
//arr.push_back(5);
//arr.push_back(7);
//
//for (int i=0;i<arr.size();i++)
//{
//    cout<<arr[i]<<" ";
//}
//cout<<endl;
//    arr.pop_back();
//for (int i=0;i<arr.size();i++)
//{
//    cout<<arr[i]<<" ";
//}
//for(int i=0;i<arr.size();i++)
//{
//    cout<<arr[i]<<" ";
//}
vector<int> bss{10,20,30,40,50};

for(int i=0;i<bss.capacity();i++)
{
    cout<<bss[i]<<" ";

}
cout<<endl;
cout<<"arry is"<<bss.empty()<<endl;
vector<int>ass;
cout<<"Empty or not:"<<ass.empty()<<endl;


    return 0;
}
