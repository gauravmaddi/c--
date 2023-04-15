#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,3,4,5,7,7,8,9};
    int size1=8;
    int brr[]={2,5,9,7,7,6};
    int sizea=6;
    vector<int> crr;

    for (int i=0;i<sizea;i++)
    {
        for(int j=0;j<size1;j++)
        {
            if (arr[j]==brr[i])
            {

                crr.push_back(brr[i]);
                brr[i]=-1;
            }
        }
    }
//    for(int i=0;i<crr.size();i++)
//    {
//        crr[i]=arr[i];
//    }
//     for(int i=0;i<crr.size();i++)
//    {
//        crr[i]=brr[i];
//    }

    for(int i=0;i<crr.size();i++)
    {
        if (brr[i]!=-1)
        {
            cout<<crr[i]<<' ';
        }
    }
}
