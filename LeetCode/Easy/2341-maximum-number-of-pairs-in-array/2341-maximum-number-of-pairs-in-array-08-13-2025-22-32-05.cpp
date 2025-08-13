class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> an(2,0);
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                an[0]+=count/2;
                an[1]+=count%2;
                count=1;
            }
        }
        an[0]+=count/2;
        an[1]+=count%2;
        return an;
    }
};