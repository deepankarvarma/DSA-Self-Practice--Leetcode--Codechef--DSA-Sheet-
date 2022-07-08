class Solution {
public:
    int minPartitions(string n) {
        int max1=0;
        for(int i=0;i<n.size();i++){
            int temp =(int)(n[i]-'0');
            max1=max(max1,temp);
        }
        return max1;
    }
};