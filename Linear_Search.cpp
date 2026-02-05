#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;

    int arr[n];
    

    // input array element : 
    cout<<"Enter elements in array : ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int target;  // targeted element 
    cout<<"Enter Your Targeted Element : ";
    cin>>target;

    bool found=true;


    // linear search : 
    for(int i=0; i<n;i++){
        if(arr[i]==target){
            cout<<"Your Targeted Element"<<" " <<target<<" "<<"is at index"<<" "<<i<<endl;
            cout<<"Liner Search Execute Successfully";
            found=true;
            break;
        }
    }

    if(!found){
        cout<<"Invalid Choice : Element not found ";

    }
    


   return 0;
}