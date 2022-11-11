/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> sum;
        while(head!=NULL){
            sum.push_back(head->val);
            head=head->next;
        }
        int ans=INT_MIN;
        for(int i=0;i<sum.size()/2;i++){
            int temp=sum[i]+sum[sum.size()-i-1];
            ans=max(ans,temp);
        }
        return ans;
    }
};