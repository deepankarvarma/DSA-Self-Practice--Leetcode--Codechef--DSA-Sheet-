class Solution {
public:
   static bool sortcol( vector<int>& v1,  vector<int>& v2)
{
    return v1[1] < v2[1];
}
    int maximumUnits(vector<vector<int>>& boxTypes, int trucksize) {
        sort(boxTypes.begin(), boxTypes.end(),sortcol);
        int cursize=0;
        int size=0;
        for(int i=boxTypes.size()-1;i>=0;i--){
            cursize=boxTypes[i][0];
            cout<<cursize<<" ";
            if(cursize<trucksize){
                size=size+boxTypes[i][0]*boxTypes[i][1];
                trucksize=trucksize-cursize;
            }
            else if(trucksize>=0){
                size=size+trucksize*boxTypes[i][1];
                trucksize=trucksize-boxTypes[i][0];
            }
             cout<<size<<" ";
             cout<<trucksize<<" ";
        }
        return size;
    }
};