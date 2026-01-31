#include<iostream>
using namespace std;
int main(){

    int arr[5];
    cout<<"enter elements to find minimum : ";

// input the elements : 
    for(int i=0 ; i<=4; i++){
        cin>>arr[i];
    }

cout<<"Array elements are : ";

// output the elements :

    for(int i=0; i<=4; i++){
        cout<<arr[i] << " ";
    }
cout<<endl;
// Find Minimum : 
int smallest = arr[0];
for(int i=0; i<=4; i++){
    if(arr[i] < smallest ){
        smallest=arr[i];
    }
}    
    cout<<"the Smallest Value from given array is : "<<smallest ; 
}