class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int x=i;
            int count=0;
            while(x){
                count+=x&1;
                x>>=1;
            }
            if(count==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};