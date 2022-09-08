class Solution {
public:
    int countBalls(int l, int h) {
        map<int,int>m;
    int mx=0;
    for(int i=l;i<=h;++i)
    {
        int k=i;
        int sum=0;
         while(k>0)
         {
           sum+=k%10;
           
             k=k/10;
         }
        m[sum]++;
        mx=max(mx,m[sum]);
       
    }
    
    return mx;
    }
};