
// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to check if mid can
// be maximum sub - arrays sum
bool check(int mid, int array[], int n, int K)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
 
        // If individual element is greater
        // maximum possible sum
        if (array[i] > mid)
            return false;
 
        // Increase sum of current sub - array
        sum += array[i];
 
        // If the sum is greater than
        // mid increase count
        if (sum > mid) {
            count++;
            sum = array[i];
        }
    }
    count++;
 
    // Check condition
    if (count <= K)
        return true;
    return false;
}
 
// Function to find maximum subarray sum
// which is minimum
int solve(int array[], int n, int K)
{
    int* max = max_element(array, array + n);
    int start = *max; //Max subarray sum, considering subarray of length 1
    int end = 0;
 
    for (int i = 0; i < n; i++) {
        end += array[i]; //Max subarray sum, considering subarray of length n
    }
 
    // Answer stores possible
    // maximum sub array sum
    int answer = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
 
        // If mid is possible solution
        // Put answer = mid;
        if (check(mid, array, n, K)) {
            answer = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
 
    return answer;
}
 
// Driver Code
int main()
{
    int array[] = { 1, 2, 3, 4 };
    int n = sizeof(array) / sizeof(array[0]);
    int K = 3;
    cout << solve(array, n, K);
}