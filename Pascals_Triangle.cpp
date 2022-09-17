
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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        vector<int>prev(numRows);
        prev[0]=1;
       // v.pb({1});
        rep(i,0,numRows){
            vector<int>curr;
            curr.pb(1);
            
            rep(j,1,i+1){
                curr.pb(prev[j-1]+prev[j]);
                
            }
            rep(k,0,curr.size())
            prev[k]=curr[k];
            v.pb(curr);
           
        }
        return v;
        
        
    }

};
