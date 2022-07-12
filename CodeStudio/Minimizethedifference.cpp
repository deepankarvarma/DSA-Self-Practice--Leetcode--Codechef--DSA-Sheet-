int minimizeIt(vector<int> A, int K)
{
    int n=A.size();
    sort(A.begin(),A.end());
    int ans=A[n-1]-A[0];
    int minimum=A[0]+K;
    int maximum=A[n-1]-K;
    int current_min,current_max;
    for(int i=0;i<n-1;i++){
        current_min=min(minimum,A[i+1]-K);
        current_max=max(maximum,A[i]+K);
        if(current_min>=0){
          ans=  min(ans, current_max - current_min);
        }
    }
    return ans;
}