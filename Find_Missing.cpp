#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Value of n : ";
    cin>>n;

    int arr[n-1];
    cout << "Enter " << n-1 << " elements: ";

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    // calculating total sum : 

    int totalSum=n*(n+1)/2;

    // calculating arraysum : 
    int arrSum=0;
    for(int i=0; i<n-1;i++){
        arrSum=arrSum+arr[i];
    }

    // Missing Value 

    int Missing=totalSum-arrSum;

    cout<<"Missing value is : "<<Missing;


   return 0;
}