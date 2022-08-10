class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num>0){
            
            if(num%2==0){
                num=num/2;
                ans++;
                cout<<"2";
            }
            else{
                num=num-1;
                ans++;
                cout<<"3";
            }
        }
        return ans;
    }
};