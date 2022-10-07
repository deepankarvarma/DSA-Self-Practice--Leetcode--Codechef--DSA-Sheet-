class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> v;
        map<int ,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
            
        }
        for(auto i:m){
            if(i.first==i.second)
                v.push_back(i.first);
        }
        if(v.size()==0)
        return -1;
        else
            return *max_element(v.begin(),v.end());
    }
};