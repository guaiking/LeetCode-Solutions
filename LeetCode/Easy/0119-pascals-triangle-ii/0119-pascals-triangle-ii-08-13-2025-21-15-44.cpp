class Solution {
public:
    vector<int> getRow(int rowIndex) {
        //在第n行时，改行元素总和为n+1；n从0开始
        //an[0]=1,an[i]=an[i-1]*(n+1-i)/i;
        vector<int> an(rowIndex+1);
        an[0]=1;
        for(int i=1;i<=rowIndex;i++){
            an[i]=1LL*an[i-1]*(rowIndex+1-i)/i;
        }
        return an;
    }
};