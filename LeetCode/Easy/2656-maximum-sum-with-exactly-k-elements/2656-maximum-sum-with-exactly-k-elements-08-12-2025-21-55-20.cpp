class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int s=0;
        for(int i=0;i<k;i++){
            s=s+max+i;
        }
        return s;
    }
};