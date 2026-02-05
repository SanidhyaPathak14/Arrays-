#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements in Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Reverse array :

    for(int i = 0; i < n/2; i++) {
    int temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = temp;
}


    // printing array : 
cout<<"Reversed Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
   return 0;
}