class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int count=0;
        int j=nums.size()-1;
        for(int i=0;i<j;i++){
            while(i<j){
                if(nums[i]+nums[j]>=target){
                    j--;
                }
                else{
                    count+=(j-i);
                    break;
                }
            }
        }
        return count;
    }
};