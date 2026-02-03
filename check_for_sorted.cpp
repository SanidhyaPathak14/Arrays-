#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    cout << "enter the elements in array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // check for sorted :

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cout << "array is not sorted : ";
            return 0;
        }
    }

    cout << "array is sorted : ";

    return 0;
}


// second approach

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int value = 1;

//     for (int i = 1; i < n; i++) {
//         if (arr[i] < arr[i - 1]) {
//             value = 0;
//             break;
//         }
//     }

//     if (value == 1)
//         cout<<"Result : " << "Array is sorted";
//     else
//         cout << " Result : Array is not sorted";

//     return 0;
// }
