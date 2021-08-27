#include <iostream>
using namespace std;

int main(){

int arr[6], i, element;
cout<<"Enter the 5 element of the array:"<<endl;
for(int i = 0;i<5;i++){
    cin>>arr[i];
    // cout<<arr[i];

}
cout<<"Enter the number to insert in the array :"<<endl;

cin>>element;
arr[i]=element;


cout<<"The new array is after inserting the new element is :"<<endl;
for(i =0;i<6;i++)
cout<<arr[i]<<" ";
cout<<endl;



return 0;
}