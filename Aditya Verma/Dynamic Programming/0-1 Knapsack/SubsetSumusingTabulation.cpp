//There are six variations of problems of knapsack
// 1.Subset Sum
// 2.Equal sum partition
// 3.Count of subset sum
// 4.Minimum subset sum difference
// 5.Target sum
// 6.Number of subsets with given difference
//To identify whether a problem is a variation of knapsack,
// an array of different items is given in input , and a bag of particular capacity is given

// SUBSET SUM PROBLEM
// 1. Problem statement says that we are given an array , we have to check if the sum of
// any subset is equal to a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    bool subset[n + 1][sum + 1];//matrix is made of variables which are changed
    //n is stored in vertical direction and sum is in horizontal direction
    //base condition is that we can obtain sum=0 for any value of n(empty set),
    //means that value of 0th column is true for all n. And it is impossible for 
    //n=0 to obtain a sum value >0. Hence for n=0 and sum>0 value if false;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
            subset[i][j]=false;
            if(j==0)
            subset[i][j]=true;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(set[i-1]<=j){
                subset[i][j]=subset[i-1][j-set[i-1]]||subset[i-1][j];
                //As this is a case of true false and we cant find maximum so we use logical or

            }
            else if (set[i-1]>j){
                subset[i][j]=subset[i-1][j];
            }
        }
    }
    cout<<subset[n][sum];
    return 0;
}