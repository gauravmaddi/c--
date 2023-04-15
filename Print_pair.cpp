#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int> arr{10,20,30,40};
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];

        for (int j=i+1;j<arr.size();j++)

        {
            int elements=arr[j];
            for(int k=j+1;k<arr.size();k++)
            {


            int sum=0;
            sum=elements+element+arr[k];
            if (sum==80)
            {


            cout<<"["<<element<<","<<elements<<','<<arr[k]<<"]"<<endl;
        }


        }
        }
    }
}
