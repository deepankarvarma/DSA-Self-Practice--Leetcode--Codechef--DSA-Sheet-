class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i=0;
        int j=0;
        vector<int> ans;
        int sum=0;
        cout<<boxes.length()-1;
        while(i<boxes.length() && j<boxes.length()){
            if(j==boxes.length()-1){
                if(boxes[j]=='1')
                    sum+=abs(i-j);
                
                ans.push_back(sum);
                i++;
                j=0;
                sum=0;
            }
            else if(boxes[j]=='1'){
                sum+=abs(i-j);
                cout<<sum<<j;
                j++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};