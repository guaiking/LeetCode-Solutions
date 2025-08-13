class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int an=0;
        for(int i=0;i<batteryPercentages.size();i++){
            if(batteryPercentages[i]>an){
                an++;
            }
            else{
                batteryPercentages[i]=0;
            }
        }
        return an;
    }
};