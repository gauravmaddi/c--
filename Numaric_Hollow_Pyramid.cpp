#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:";
    int n;
    cin>>n;
     for(int row=0; row<n; row = row + 1) {

	 	for(int col=0; col < n-row-1; col = col +1) {
	 		cout << " ";
	 	}



	 	int start = 1;
	 	for(int col =0; col < 2*row+1; col = col + 1) {

	 		if(row == 0 || row == n-1) {
	 			if(col %2 == 0) {

	 				cout << start;
	 				start = start + 1;
	 			}
	 			else {

	 				cout << " ";
	 			}
	 		}
	 		else {

	 			if(col == 0) {
	 				cout << 1;
	 			}
	 			else if(col == 2*row+1-1){
	 				cout << row+1;
	 			}
	 			else {
	 				cout <<" ";
	 			}
	 		}

	 	cout<<endl;

}
     }}



