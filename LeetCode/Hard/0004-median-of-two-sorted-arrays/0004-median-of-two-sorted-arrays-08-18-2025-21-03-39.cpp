class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        vector<int>a;
        int i=0,j=0;
        while(i<nums1.size()||j<nums2.size()){
            if(i>=nums1.size()){
                a.push_back(nums2[j++]);
            }
            else if(j>=nums2.size()){
                a.push_back(nums1[i++]);
            }
            else{
                a.push_back(nums1[i]>=nums2[j]?nums2[j++]:nums1[i++]);
            }
            if(i+j==n/2+1){
                break;
            }
        }
        double an;
        if(n&1){
            an=a[n/2];
        }
        else{
            an=(double)(a[n/2-1]+a[n/2])/2;
        }
        return an;
    }
};