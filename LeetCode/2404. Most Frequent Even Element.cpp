class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        
        for(auto i:nums){
            if(i%2==0)
            m[i]++;
            
        }
        int m1=INT_MIN;
        for(auto i:m){
            
            m1=max(m1,i.second);
            
        }
        cout<<m1;
        for(auto i:m){
            
            if(i.first%2==0){
                if(i.second==m1)
                    return i.first;
            }
                
        }
        return -1;
    }
};