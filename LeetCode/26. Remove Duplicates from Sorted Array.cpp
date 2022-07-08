class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
        int count=0;
        int *c=new int[n];
        
        for(int i=0;i<nums.size()-1;i++){
           
            if(nums[i]==nums[i+1]){
                c[nums[i]]=1;
            }
        }
        for(int i=0;i<n;i++){
            
            if(c[i]==1){
                count++;
            }
        }
        return count;
    }
 
};