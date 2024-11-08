#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const int N = 1e5 + 10, MOD = 1e9 + 7;
long long dp[N];
long long fibo(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2);
    //dp[n] = (fibo(n - 1) % MOD + fibo(n - 2) % MOD) % MOD;
    return dp[n];
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    memset(dp, -1, sizeof dp);
    for(int i = 0; i < n; i++)
    {
        cout << fibo(i) << ' ';
    }
    return 0;
}

