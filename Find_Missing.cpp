// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Value of n : ";
//     cin>>n;

//     int arr[n-1];
//     cout << "Enter " << n-1 << " elements: ";

//     for(int i = 0; i < n-1; i++) {
//         cin >> arr[i];
//     }

//     // calculating total sum : 

//     int totalSum=n*(n+1)/2;

//     // calculating arraysum : 
//     int arrSum=0;
//     for(int i=0; i<n-1;i++){
//         arrSum=arrSum+arr[i];
//     }

//     // Missing Value 

//     int Missing=totalSum-arrSum;

//     cout<<"Missing value is : "<<Missing;


//    return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total count including missing: ";
    cin >> n;

    int arr[n-1];
    cout << "Enter " << n-1 << " elements: ";

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    // Find smallest and largest element
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n-1; i++) {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    // Expected sum using arithmetic progression formula
    int expectedSum = (min + max) * n / 2;

    // Actual array sum
    int arrSum = 0;
    for(int i = 0; i < n-1; i++) {
        arrSum += arr[i];
    }

    int missing = expectedSum - arrSum;

    cout << "Missing number is: " << missing;

    return 0;
}
