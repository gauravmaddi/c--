#include<iostream>
using namespace std;
bool search_element(int arr[],int size ,int ele)

{
    for(int i=0;i<size;i++)
    {
        if (ele==arr[i])
        {
            return true;

        }



    }
    return false;
}
int main(){

    int arr[]={1,2,3,4,5};
    int size =5;
    cout<<"Enter the element for searching:";
    int ele;
    cin >>ele;

    //calling searching function
   if( search_element(arr,size,ele))
   {
       cout<<"Element found";
   }
   else{cout << "Not found";}


}
