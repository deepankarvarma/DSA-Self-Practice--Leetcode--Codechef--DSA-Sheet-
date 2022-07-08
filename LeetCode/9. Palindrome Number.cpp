// class Solution {
// public:
//     bool isPalindrome(int x) {
//      string rev = to_string(x);
//         reverse(rev.begin(), rev.end());
//         return to_string(x) == rev;
//     }
// };
//Better Approach
class Solution {
public:
    bool isPalindrome(int x) {
    int num=x;
    long ans=0;
        while(x>0){
            ans=x%10+ans*10;
            x=x/10;
        }
        if(ans==num)
            return true;
        else 
            return false;
    }
};
