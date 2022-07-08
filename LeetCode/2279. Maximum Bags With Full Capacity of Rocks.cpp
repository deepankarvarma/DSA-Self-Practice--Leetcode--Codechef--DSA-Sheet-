class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[i]=capacity[i]-rocks[i];
        }
        sort(temp.begin(),temp.end());
        int full=0;
        for(int i=0;i<n and additionalRocks>0;i++){
            if(temp[i]!=0){
                if(additionalRocks>=temp[i])
                    full++;
                additionalRocks = additionalRocks-temp[i];
            }else{
                full++;
            }
        }
        return full;
    }
};