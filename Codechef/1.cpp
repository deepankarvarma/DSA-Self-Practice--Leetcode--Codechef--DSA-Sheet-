#include<bits/stdc++.h>
using namespace std;
#define int long long int

main(){

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> p;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int d;
            for (int i = 0; i <= 31; i++)
            {
                int c = (1 << i);
                if (c & a)
                {
                    d = i;
                }
            }
            p[d]++;
        }
        int ans = 0;
        for (auto x : p)
        {
            int d = x.second;
            ans += ((d - 1) * d) / 2;
        }
        cout << ans << endl;
    }
    return 0;

}