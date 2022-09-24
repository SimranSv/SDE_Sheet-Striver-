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
    ll n;
    cin >> n;
    vll v;
    read(n, v);
    vll maxi(n);
    maxi[0]=v[0];
    maxi[n-1]=v[n-1];
    ll ans=LONG_LONG_MIN;
    for(int i=n-1;i>0;i--){
        maxi[i-1]=max(maxi[i],v[i-1]);
    }
     for(int i=0;i<n;i++){
        ans=max(ans,maxi[i]-v[i]);
        // maxi[i-1]=max(maxi[i],v[i-1]);
    }
    cout<<ans<<'\n';
    // rep(i,0,n)cout<<maxi[i]<<" ";

   

    

}
int main()
{
    FAST;

    ll n, i = 0;
   
    n = 1;
    while (n--)
    {
        
        Letsgo();
    }
}