class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int sum=0;
            int a=i;
            while(a>0){
               int b=a%10;
                sum+=b;
                a=a/10;
            }
           
            if(sum%2==0)
                count++;
             cout<<i<<" "<<sum<<" "<<count<<" ";
        }
        return count;
    }
};