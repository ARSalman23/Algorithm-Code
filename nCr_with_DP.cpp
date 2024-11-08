#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
const int N = 1000;
int dp[N][N];
int nCr(int n, int r)
{
    if(n == 1) return n;
    if(r == 0 || n == r) return 1;
    if(dp[n][r] != -1) return dp[n][r];
    dp[n][r] = (nCr(n - 1, r - 1) % MOD + nCr(n - 1, r) % MOD) % MOD;
    return dp[n][r];
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    memset(dp, -1, sizeof(dp));
    int n, r; cin >> n >> r;
    cout << nCr(n, r) <<  endl; // n > r
    return 0;
}
