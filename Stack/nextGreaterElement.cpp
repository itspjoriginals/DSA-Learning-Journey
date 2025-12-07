#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    vector<int> arr ={6,8,0,1,3};
    int n = arr.size();
    stack<int> s;
    vector<int> NG(n,0);
    

    for(int i=n-1; i>=0; i--){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            NG[i] = -1;
        }
        else{
         NG[i] = s.top();
        }
        s.push(arr[i]);
    }
    
    for(int val: NG){
        cout<<val<<" ";
    }cout<<endl;

    return 0;
}