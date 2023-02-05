class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--){
            int idx=distance(gifts.begin(),max_element(gifts.begin(),gifts.end()));
            gifts[idx]=floor(sqrt(gifts[idx]));
        }
        long long int sum=0;
        for(auto i:gifts){
            sum+=i;
        }
        return sum;
    }
};