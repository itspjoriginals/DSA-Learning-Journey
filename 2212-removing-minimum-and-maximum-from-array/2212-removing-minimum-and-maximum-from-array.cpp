#include <algorithm> 
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int min_idx = -1;
        int max_idx = -1;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]>maxi){
            maxi=nums[i];
            max_idx = i;
            }
            if(nums[i]<mini){
            mini=nums[i];
            min_idx = i;
            }
        }

        int i = min_idx;
        int j = max_idx;
        if (i > j) swap(i, j);

        int front = j + 1;
        int back = n - i;
        int front_back = (i + 1) + (n - j);
        int back_front = (j + 1) + (n - i);


       int answer = min({ front, back, front_back, back_front });

        return answer;
    }
};