#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of element :  ";
    cin>>n;


    int arr[n];
    cout<<"Enter Elements in array :  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array elements before shifting : ";
    for(int i=0; i<n;i++){
        cout<<arr[i] <<" ";
    }

// starts left shifting the element 

//step1
// store first element of array in temporary variable : 

int temp=arr[0];

// step 2
// Left shift array element : 

for(int i=1; i<n; i++){
    arr[i-1]=arr[i];
}
cout<<endl;

// step 3
// placed first element at last index : 

arr[n-1]=temp;


// printing the array : 

cout<<"After shifting array is : ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}


   return 0;
}