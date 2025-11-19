#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {10,20,7,11,8,4};
    int target =1;
    bool found = false;

    for(int i=0; i<6; i++){
        if(arr[i]==target){
            cout<<"Element found at index : "<<i<<endl;
            found= true;
            break;
        }
    }
    if(found!=true){
        cout<<"Sorry! Element not found."<<endl;
    }
    return 0;
}