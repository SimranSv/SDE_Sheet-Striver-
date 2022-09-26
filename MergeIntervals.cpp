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
    vector<vector<int>> merge(vector<vector<int>>& v) {
         st(v);
        vector<vector<int>> merge1;
        ll n=v.size();
    
        if(n==0)return merge1;
        else {
            // v.back().pb
            for(int i=0;i<n;i++){
                if(merge1.empty()||merge1.back()[1]<v[i][0]){
                    merge1.pb({v[i][0],v[i][1]});
                }else {
                    merge1.back()[1]=max(merge1.back()[1],v[i][1]);
                }
            }
        }
       return merge1;
    }
};
