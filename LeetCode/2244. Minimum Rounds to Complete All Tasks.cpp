class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int res=0;
        unordered_map<int,int> m;
        for(int i=0;i<tasks.size();i++){
            m[tasks[i]]++;
        }
        for(auto i:m){
            if(i.second<2)
                return -1;
            else if(i.second<3){
                cout<<i.first;
                res+=1;
            }
            else{
                
                res+=ceil(i.second/3.00);
            }
        }
        return res;
    }
};