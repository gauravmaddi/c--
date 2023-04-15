#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n;
        cout<<"Enter th size of array:: ";
        cin>>n;
        int ans =0;
        vector<int> arr(n);
        for (int i=0;i<arr.size();i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<arr.size();i++)
        {
           ans=ans^arr[i];

        }
        cout<<ans;

        }
//
//***** *****
//****   ****
//***     ***
//**       **
//*         *
//*         *
//**       **
//***     ***
//****   ****
//***** *****
