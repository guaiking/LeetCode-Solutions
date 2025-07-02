class Solution {
public:
    int maxArea(vector<int>& height) {
        int p,q;
        p=0;q=height.size()-1;
        int max=0,v;
        while(p!=q){
            v=min(height[p],height[q])*(q-p);
            if(max<v)
                max=v;
            if(height[p]<=height[q]){
                p++;
            }
            else if(height[p]>height[q]){
                q--;
            }
        }
        return max;
        
    }
};