// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[7] = {2,6,4,3,8,5,1};
//     int first_max; 
//     int second_max;

//     sort(arr, arr+7);  
//     first_max = arr[6]; 

//     for(int i=5; i>=0; i--){
//         if(arr[i]!=first_max){
//             second_max = arr[i];
//             break;
//         }
//     }

//     cout<<"The 2nd max element is : "<<second_max<<" "<<endl;

//     return 0;

// }


// 2nd approach without sorting
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[7] = {2,6,4,3,8,5,1};
//     int first_max = INT_MIN; 
//     int second_max =first_max; 

//     for(int i=0; i<7; i++){
//         if(arr[i]>first_max){
//             first_max=arr[i];
//         }
//     }
//     for(int i=0; i<7; i++){
//         if(arr[i]!=first_max && arr[i]>second_max){
//             second_max=arr[i];
//         }
//     }

//     cout<<"The 2nd max element is : "<<second_max<<" "<<endl;

//     return 0;

// }
