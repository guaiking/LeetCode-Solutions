class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        vector<int> hash(nums[nums.size()-1]+1);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=1;
        }
        int count=0;
        for(int i=diff;i<=hash.size()-1-diff;i++){
            if(2*hash.size()<diff){
                break;
            }
            if(hash[i]&&hash[i-diff]&&hash[i+diff]){
                count++;
            }
        }
        return count;
    }
};