class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int> hash((*max_element(nums.begin(),nums.end()))+1,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int an=0;
        for(int i=0;i<hash.size();i++){
            if(hash[i]>1){
                an=an^i;
            }
        }
        return an;
    }
};