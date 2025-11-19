#include<bits/stdc++.h>
using namespace std;

//using for loop
// int main(){
//     int arr[6] = {6,11,7,4,8,9};
//     int temp_arr[6];

//     for(int i=5; i>=0; i--){
//         temp_arr[6-i-1] = arr[i];
//     }

//     for(int i=0; i<6; i++){
//         cout<<temp_arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// using while loop

// int main(){
//     int arr[6] = {6,11,7,4,8,9};
//     int temp_arr[6];
//     int i=5, j=0;

//     while(i>=0){
//         temp_arr[j] = arr[i];
//         i--;
//         j++;
//     }
//         for(int i=5; i>=0; i--){
//         temp_arr[6-i-1] = arr[i];
//     }

//     for(int i=0; i<6; i++){
//         cout<<temp_arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// In-place reverse without using any extra array

int main(){
    int arr[6] = {6,11,7,4,8,9};

    int i=0, j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

        for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;


}