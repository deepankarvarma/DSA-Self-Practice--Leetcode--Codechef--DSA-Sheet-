class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="--X" || operations[i]=="X--")
                res--;
            else if(operations[i]=="X++" || operations[i]=="++X")
                res++;
        }
        return res;
    }
};