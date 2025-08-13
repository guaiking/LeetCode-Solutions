class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        auto it=max_element(candies.begin(),candies.end());
        int max=*it;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies<max){
                result[i]=false;
            }
            else{
                result[i]=true;
            }
        }
        return result;
    }
};