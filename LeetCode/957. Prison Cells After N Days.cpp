class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int> ans(8,0); 
        
        while((n-1)%14 >=0){
            for(int i=1;i<cells.size()-1;i++){
                if((cells[i-1]==1 && cells[i+1]==1)|| (cells[i-1]==0 && cells[i+1]==0)){
                    cout<<i;
                    ans[i]=1;
                }
                else{
                    ans[i]=0;
                }
            
        }
            cells=ans;
            n=(n-1)%14;
        }
    return cells;
    }
};