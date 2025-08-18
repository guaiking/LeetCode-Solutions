class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int max=0,count=0;
        vector<vector<int>> hash(150,vector<int>(2,0));
        while(i<s.size()){
            if(!hash[(int)s[i]][0]){
                hash[(int)s[i]][0]=1;
                hash[(int)s[i]][1]=i;
                count++;
                i++;
            }
            else{
                hash[(int)s[i]][0]=0;
                i=hash[(int)s[i]][1]+1;
                if(count>max){
                    max=count;
                }
                count=0;
                for(auto &row:hash){
                    fill(row.begin(),row.end(),0);
                }
            }
        }
        if(count>max){
            max=count;
        }
        return max;
    }
};