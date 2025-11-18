#include <bits/stdc++.h>
using namespace std;

// int removeMin()

int main(){
    int arr[] = {4,6,11,2,8};
    int mini = INT_MAX;
    int min_idx=-1;

    for(int i=0; i<5; i++){
        if(arr[i]<mini){
            mini = arr[i];
            min_idx=i;
        }
    }
    cout<<"Minimum element is : " <<mini<< " at index : "<<min_idx<<endl;
    return 0;
}