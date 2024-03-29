class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size()) 
            return false;
        int diff1 = -1, diff2 = -1;
         unordered_set<char> A1;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] != B[i]) {
                if (diff1 == -1)
                    diff1 = i;
                else if (diff2 == -1)
                    diff2 = i;
                else
                    return false; 
            }
            A1.insert(A[i]);
        }
        
        if (diff1 != -1 && diff2 != -1)
            return A[diff1] == B[diff2] && A[diff2] == B[diff1]; 
        if(diff1 != -1 && diff2 == -1)
            return false;
        return A1.size()<A.size();
      
    
    }
};