class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0,ds=0;
        for(int i=0;i<nums.size();i++){
            es+=nums[i];
            int element=nums[i];
            while(element>0){
                ds+=element%10;
                element/=10;
            }
        }
        return abs(es-ds);
    }
};