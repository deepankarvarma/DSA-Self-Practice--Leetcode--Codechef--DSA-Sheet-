class Solution {
public:
    bool isHappy(int n) {
int temp = n;
        while(true){
            if(temp==89){
                return false;
            }else if(temp == 1){
                return true;
            }else{
                int sum = 0;
                while(temp>0){
            int digi = temp%10;
            sum += digi*digi;
            temp /= 10;
                }
                temp=sum;
            
            }
        }
    }
    
};