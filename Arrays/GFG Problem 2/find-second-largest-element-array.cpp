class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first_max = INT_MIN;
        int second_max = INT_MIN;
        for(int i=0; i<arr.size(); i++){
        if(arr[i]>first_max){
            first_max=arr[i];
        }
    }
    for(int i=0; i<arr.size(); i++){
        // if(arr[i]!=first_max && arr[i]>second_max){
        //     second_max=arr[i];
        // }
        if(first_max!= arr[i]){
            second_max = max(second_max, arr[i]);
        }
    }
    return second_max;
    }
};