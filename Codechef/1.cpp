#include <bits/stdc++.h>
using namespace std;
int ans = 100000000;
void solve(int a[], int n, int k, int index, int sum,
		int maxsum)
{
	if (k == 1) {
		maxsum = max(maxsum, sum);
		sum = 0;
		for (int i = index; i < n; i++) {
			sum += a[i];
		}
		maxsum = max(maxsum, sum);
		ans = min(ans, maxsum);
		return;
	}
	sum = 0;
	for (int i = index; i < n; i++) {
		sum += a[i];
		maxsum = max(maxsum, sum);
		solve(a, n, k - 1, i + 1, sum, maxsum);
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
	int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
	solve(arr, n, k, 0, 0, 0);
	cout << ans << "\n";
    }
    return 0;
}
