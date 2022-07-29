class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0;
        int temp=0;
        for(int i=0;i<gain.size();i++){
            temp+=gain[i];
            res=max(res,temp);
        }
        return res;
    }
};