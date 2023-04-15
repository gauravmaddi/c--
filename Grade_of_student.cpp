#include<iostream>
using namespace std;
char get_grade(int num)
{
    if(num>=90)
    {
        return 'A';
    }
    else if (num>=80)
    {
        return 'B';
    }
    else if (num>=70)
    {
        return 'C';
    }
    else if (num>=60)
    {
        return 'D';
    }
    else{
        return 'E';

    }
}
int main()
{
    int num;
   cout<<"Enter your marks:"<<endl;
    cin>>num;





    char final_grade=get_grade(num);
    cout<<final_grade<<endl;


}
