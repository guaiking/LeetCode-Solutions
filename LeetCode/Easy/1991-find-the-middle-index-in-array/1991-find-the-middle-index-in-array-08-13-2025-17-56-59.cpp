class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>padd(nums.size()+1);
        vector<int>nadd(nums.size()+1);
        padd[1]=nums[0];
        padd[0]=0;
        nadd[nums.size()-1]=nums[nums.size()-1];
        nadd[nums.size()]=0;
        for(int i=2,j=nums.size()-2;i<nums.size()+1,j>=0;i++,j--){
            padd[i]=padd[i-1]+nums[i-1];
            nadd[j]=nadd[j+1]+nums[j];
        }
        for(int i=0;i<padd.size();i++){
            cout<<nadd[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<padd.size();i++){
            cout<<padd[i]<<" ";
        }
        cout<<endl;
        int index=-1;
        for(int i=1;i<padd.size();i++){
            if(padd[i-1]==nadd[i]){
                index=i-1;
                break;
            }
        }
        return index;
    }
};