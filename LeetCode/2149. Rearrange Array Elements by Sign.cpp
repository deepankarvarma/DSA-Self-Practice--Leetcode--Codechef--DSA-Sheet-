class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> answer(nums.size(),0);
    int posIndex=0,negIndex=1;
    for(int element:nums)
    {
        if(element>0)
        {
            answer[posIndex]=element;
            posIndex+=2;
        }
        else
        {
            answer[negIndex]=element;
            negIndex+=2;
        }
    }
    return answer;
    }
};