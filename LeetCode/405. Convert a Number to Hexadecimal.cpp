class Solution {
public:
    string toHex(int num) {
        unsigned int ourNum = num;
        string str=""; 
        if(ourNum==0)
            return "0";
        char ourArray[17] = "0123456789abcdef"; 
        while (ourNum>0) {
            str += ourArray[ourNum % 16];
            ourNum /= 16;
        }  

        return {str.rbegin(), str.rend()};
    }
};