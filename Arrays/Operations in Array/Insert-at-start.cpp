// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5] = {1,2,4,5,6};
//     int el = 3;
//     int pos = 2;
//     int temp[100];

//     for(int i=0; i<pos; i++){
//         temp[i]=arr[i];
//     }

//     temp[pos] = el;

//     for(int i=3; i<6; i++){
//         temp[i] = arr[i-1];
//     }

//     for(int i=0; i<6; i++){
//         cout<<temp[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//2nd Method - In place shifting
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10] = {1, 2, 4, 5, 6};  
    int n = 5;     // current valid size
    int val = 3;   // value to insert
    int pos = 2;   // index where we want to insert

    // shift elements to the right
    for(int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // insert value
    arr[pos] = val;
    n++; // size increases

    // print updated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
