#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1,2,3,5};
    int n=4;
        int totalSum=0, arrSum=0;
        for(int i=1; i<=n+1; i++){
            totalSum +=i;
            
        }
        for(int i=0; i<n; i++){
            arrSum += arr[i];
        }
        
        int missing_num = totalSum - arrSum;
        cout<<"Missing Number is: "<<missing_num<<endl;
        return 0;
}     