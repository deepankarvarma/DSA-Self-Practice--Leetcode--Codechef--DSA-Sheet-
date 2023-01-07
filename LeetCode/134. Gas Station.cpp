class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total=0,start=0,surplus=INT_MAX;
        for(int i=0;i<n;i++){
            total+=gas[i]-cost[i];
            if(total<surplus){
                surplus=total;
                start=i+1;
            }
        }
        return (total < 0) ?  -1 : (start%n);
    }
};