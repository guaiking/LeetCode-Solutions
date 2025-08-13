class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int n=nums.size();
        while(find(nums.begin(),nums.end(),val)!=nums.end()){
            auto it=find(nums.begin(),nums.end(),val);
            nums.erase(nums.begin()+distance(nums.begin(),it));
            count++;
        }
        return n-count;
    }
};