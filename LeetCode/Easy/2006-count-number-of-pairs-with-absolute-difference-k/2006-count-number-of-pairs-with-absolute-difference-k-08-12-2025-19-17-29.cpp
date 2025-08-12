class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        //暴力枚举
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(abs(nums[j]-nums[i])==k){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        //哈希表
        int arr[101]={0};
        int count=0;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<=100-k;i++){
            count+=arr[i]*arr[i+k];
        }
        return count;
    }
};