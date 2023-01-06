class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int c=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i]<=coins){
                coins-=costs[i];
                c++;
            }
            else
                return i;
        }
        return c;
    }
};