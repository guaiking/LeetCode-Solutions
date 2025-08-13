class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n;
        if(nums.size()==1){
            n=0;
        }
        else{
            for(int i=0;i<nums.size();i+=2){
                if(i==nums.size()-2){
                    n=nums.size()-1;
                }
                else if(nums[i]!=nums[i+1]){
                    n=i;
                    break;
                }   
            }
        }
        return nums[n];
    }
};