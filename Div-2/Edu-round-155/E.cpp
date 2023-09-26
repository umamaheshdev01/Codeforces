#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353

typedef long long ll;
typedef vector<ll> vl;

void solve()
{
    ll n;
    cin >> n;

    vl v(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vl cum(n + 1, 0);

    cum[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        cum[i] = v[i] ^ cum[i - 1];
    }

    ll total = 0;

    for (int i = 1; i <= n; i++)
    {
        ll current = 0;
        for (int j = i; j <= n; j++)
        {
            current ^= v[j];
            total = (total + (j - i + 1) * current) % MOD;
        }
    }

    cout << total << endl;
}

int main()
{
    solve();
}
