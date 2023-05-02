#include<bits/stdc++.h>
using namespace std;
 int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxsum = INT_MIN;
 int current_sum = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            current_sum=0;
        }
        current_sum= max(current_sum + nums[i],nums[i]);
        maxsum=max(maxsum,current_sum);
    }
    return maxsum;

    }
int main(){

 vector<int>arr = {1,1,0,0,1,1,1};
 cout<<findMaxConsecutiveOnes(arr);
return 0;
}