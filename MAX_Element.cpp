#include<iostream>
using namespace std;
int main(){

    int arr[5];
    cout<<"enter elements to find maximum : ";

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
// Find maximum : 
int largest = arr[0];
for(int i=0; i<=4; i++){
    if(arr[i]> largest){
        largest=arr[i];
    }
}    
    cout<<"the largest from given array is : "<<largest ; 
}