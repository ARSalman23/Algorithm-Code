#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const int N = 2e5 + 100;
int a[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, target;
    cin >> n >> target;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int l = 0, r = n - 1;
    int ans = INT_MAX;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == target)
        {
            ans = mid;
            break;
        }
        if(a[mid] >= target) r = mid - 1;
        else l = mid + 1;
    }
    if(ans == INT_MAX) cout << "Not Found" << endl;
    else cout << "Found" << endl;
    return 0;
}


