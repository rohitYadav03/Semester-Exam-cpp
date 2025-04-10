#include<iostream>
#include<string>
#include <climits>

using namespace std;
int main () {

    string name;
   getline(cin ,name);
    cout<<name<<endl;
    cout<<"Length : "<<name.length()<<endl;
    // cout<<"Unit 2 start here -> Array";

    // Array => 
    // int num[3] = {10,20,30};
    // for (int i =0 ; i<=2; i++)
    // {
    //   cout<<num[i]<<" ";
    // }
    
    // smallest and largest value in the array 

    // int arr[] = {5,15,22,1,-15,24};
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
   
//     for(int i =0; i<sizeof(arr)/sizeof(int); i++){
//       if (arr[i] < smallest){
//     smallest = arr[i];  
//     } 


//     if (arr[i] > smallest){
//         largest = arr[i];  
//         }    

//     }
// cout<<"Smallest number is : "<<smallest<<endl;
// cout<<"largest number is : "<<largest<<endl;

// for(int i =0; i<6 ; i++){
//     if (arr[i] == smallest) {
//         cout<<"Smallest is at index "<<i<<endl;
//     }

//     if (arr[i] == largest){
//         cout<<"largest is at index "<<i<<endl;
//     }
    
// } 

//reverse an array 

// int arr[] = {1,2,3,4,5,6};
// int size = 6;
// int start = 0;
// int end = size -1;

// while (start < end)
// {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
// }

// for (int i = 0; i < size; i++)
// {
//    cout<<arr[i]<<" ";
// }

// int matrix[2][3];

// // Input
// for(int i = 0; i < 2; i++) {
//     for(int j = 0; j < 3; j++) {
//         cin >> matrix[i][j];
//     }
// }

// // Output
// for(int i = 0; i < 2; i++) {
//     for(int j = 0; j < 3; j++) {
//         cout << matrix[i][j] << " ";
//     }
//     cout << endl;
// }
}