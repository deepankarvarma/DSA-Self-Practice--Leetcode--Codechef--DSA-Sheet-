// int val[] = { 60, 100, 120 };
// int wt[] = { 10, 20, 30 };
// int W = 50;
// Answer : 220
#include <bits/stdc++.h>
using namespace std;
int recurknapsack(int val[], int wt[], int W, int n)
{
    if (W == 0 || n == 0)
    { // it basically checks for the base case i.e.
        // if either the weight of the bag in null or the items we have is null
        //  the profit will also be null.
        return 0;
    }
    // this case works if the weight of the last element of the weight array is considerable
    //i.e. less than or equal to total weight of bag. In this case 2 choices can be there
    //1. To accept the item-> add the val of the element to the profit and make a recursive call
    //with reduced weight and updated number of items
    //2.To reject the item-> just update the number of items 
    //We need the maximum of these 
    if (wt[n - 1] <= W)
    {
        return max(val[n - 1] + recurknapsack(val, wt, W - wt[n - 1], n - 1), recurknapsack(val, wt, W, n - 1));
    }
    // As in this case the weight of the last element is greater than the allowable weight
    // only choice is to reject the item and just update the number of items 
    else if (wt[n - 1] > W)
    {
        return recurknapsack(val, wt, W, n - 1);
    }
}
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << recurknapsack(val, wt, W, n);
    return 0;
}