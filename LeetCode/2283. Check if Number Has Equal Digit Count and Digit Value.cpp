class Solution {
public:
   
     bool digitCount(string num) {
        int cnts[10] = {0}; 
        for (int i = 0; i < num.size(); i++) 
            cnts[num[i] - '0']++;
        for (int i = 0; i < num.size(); i++) 
            if (num[i] - '0' != cnts[i])
                return false;
        return true;
      
    }
};