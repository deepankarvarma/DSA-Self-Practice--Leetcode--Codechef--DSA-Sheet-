// Input :- X =a,b,c,d,g,h ; Y= a,b,e,d,f,h,g
// Output :- Length os LCS (4 in our case - a,b,d,g)
// Subsequence means that both string contain same character in same order , not mandatorily they are adjacent to each other
// Substring means a string that is common to both the string . ab in this case 
// 1) For recursion we must know :-
// Base condition, choice diagram, minimize the i/p means for each recursive call the value of arguments must decrease
// For base condition we have to think of the smallest valid input
// In our case the smallest input is when the size of both string is 0
// The o/p for base case is 0
// Now choice daiagram, if s1[n]==s2[m] means the character at end of both string is same then 
// n-1 and m-1
// else we have two choices take 1st string full and 2nd string -1 and vice versa 
#include<bits/stdc++.h>
using namespace std;
int LCS(string x,string y, int n,int m){
    // Base condition check
    if(n==0 || m==0)
    return 0;
    if(x[n-1]==y[m-1]){
        return 1+LCS(x,y,n-1,m-1);
        // is the string is chosen then return with size reduced
    }
    else{
        return max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
    }
}
int main(){
    string x="ylqpejqbalahwr";
    string y="yrkzavgdmdgtqpg";
    int n=x.length();
    int m=y.length();
    cout<<LCS(x,y,n,m);
}
