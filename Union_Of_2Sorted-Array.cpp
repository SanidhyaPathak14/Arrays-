#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,m;
    cout<<"enter size of first array : ";
    cin>>n;


int arr1[n];
cout<<"Enter Elements of First Array : ";
for(int i=0;i<n;i++){
    cin>>arr1[i];
}

cout << "Enter size of second array: ";
cin >> m;


int arr2[m];
cout<<"Enter Elements of Second  Array : ";
for(int i=0;i<m;i++){
    cin>>arr2[i];
}

// initialize/Create an empty set 

set<int>s;

// insert element of first array in set 

for(int i=0;i<n;i++){
    s.insert(arr1[i]);
}

// insert second array element in set 

for(int i=0;i<m;i++){
    s.insert(arr2[i]);
}

// printing the set 

cout<<"Union Of Two Array : ";
for(int value:s){
    cout<<value<<" ";
}





   return 0;
}