#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,11,15,4,9};
    int maxi = INT_MIN;
    int max_idx=-1;

    for(int i=0; i<5; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            max_idx=i;
        }    }

        cout<<"The maximum element is : "<<maxi<<" present at index : "<<max_idx<<endl;

        return 0;
}
