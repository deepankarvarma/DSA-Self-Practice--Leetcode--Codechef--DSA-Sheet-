class Solution {
public:
    long int mySqrt(int x) {
    long int ans=0;
    long int i=0;
     while(ans*ans<=x){
         if(i*i==x){
           ans=i;  
             return ans;
         }
         else{
         
         i++;
              ans=i;   
         }
     }
        return ans-1;
    }
};