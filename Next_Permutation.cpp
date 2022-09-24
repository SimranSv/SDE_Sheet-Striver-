// Simran Vedpathak
// Lets go to the next level
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define vll vector<ll>
#define stll set<ll>
#define msgll multiset<ll, greater<>>
#define msll multiset<ll>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define vpll vector<pair<ll, ll>>
#define ss second
#define ff first
#define read(n, x)             \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll k;                  \
        cin >> k;              \
        x.pb(k);               \
    }
#define rep(i, j, k) for (ll i = j; i < k; i++)
#define st(v) sort(v.begin(), v.end())
#define sz(x) (ll) x.size()
#define no cout << "No\n";
#define yes cout << "Yes\n";
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
ll expo(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

void Letsgo()
{
    ll max_far = LONG_LONG_MIN, max_end = 0;
    ll n;
    cin >> n;
    vll v;
    read(n, v);
    ll ind1 = 0, ind = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        if (v[i - 1] < v[i])
        {
            ind1 = i;
            break;
        }
    }
    ind1-=1;
    if(ind<0){
        reverse(v.begin(),v.end());
        return ;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (v[i] > v[ind1])
        {
            ind = i;
            break;
        }
    }
    swap(v[ind1], v[ind]);
    reverse(v.begin() + ind1+1, v.end());
    // return v;

    rep(i, 0, n) cout << v[i] << " ";
    cout << '\n';
    // }
}
int main()
{
    FAST;

    ll n, i = 0;
    // cin >> n;
    n = 1;
    while (n--)
    {
        // i++;
        // cout << "Case #" << i << ": ";
        Letsgo();
    }
}