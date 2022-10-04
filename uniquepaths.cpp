class Solution {
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
public:
    int uniquePaths(int m, int n) {
        vll dp(n,0);
        vll prev(n,1);
        rep(i,1,m){
            dp[0]=1;
            rep(j,1,n){
                  
              dp[j]=prev[j]+dp[j-1];
            }
            prev=dp;
            
        }
     //   cout<<dp[n-1];
        return prev[n-1];
        
        
    }
};