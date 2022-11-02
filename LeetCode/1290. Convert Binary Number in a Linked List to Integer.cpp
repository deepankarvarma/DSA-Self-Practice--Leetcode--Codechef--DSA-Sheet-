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
    int getDecimalValue(ListNode* head) {
        vector<int> bn;
        int res=0;
        int p=1;
        while(head!=NULL)
        {
            bn.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<bn.size();i++){
            cout<<bn[i];
        }
        for(int i=bn.size()-1;i>=0;i--){
            int temp=p*bn[i];
            res+=(2,temp);
            p*=2;
        }
        return res;
    }
};