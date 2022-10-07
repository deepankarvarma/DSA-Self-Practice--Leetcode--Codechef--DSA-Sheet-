class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> m;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                m[nums[i+1]]++;
            }
        }
        int maxValue = INT_MIN;
    pair<int, int> maxValuePair;
    for (auto i: m)
    {
        if (maxValue < i.second)
        {
            maxValue = i.second;
            maxValuePair = i;
        }
    }
        return maxValuePair.first;
    }
};