class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        vector<int> result(a.size(),0);
        stack<int> s;
        s.push(0);
        for(int i=1;i<a.size();i++){
            while(!s.empty() && a[s.top()]<a[i]){
                result[s.top()]=i-s.top();
                s.pop();
            }
           s.push(i);
        }
        return result;
    }
};