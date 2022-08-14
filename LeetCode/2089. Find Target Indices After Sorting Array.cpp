class Solution {
public:
int fristOcc(vector<int>& nums,int n, int target)
{
    int start, end, mid, ans = -1;
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start+(end-start)/2;
        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& nums,int n, int target)
{
    int start, end, mid, ans = -1;
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start+(end-start)/2;
        if (nums[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int fristOccerance, lastOccerance;
    fristOccerance = fristOcc(nums,nums.size(), target);
    lastOccerance = lastOcc(nums,nums.size() ,target);
    if(fristOccerance==-1 || lastOccerance== -1){
        return ans;
    }
    for (int i = fristOccerance; i <= lastOccerance; i++)
    {
        ans.push_back(i);
    }
    return ans;
}
};