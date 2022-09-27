//Moores ALgorithm
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
    int majorityElement(vector<int>&v) {
        ll cnt=0;
        ll n=v.size();
        ll k=v[0];
        rep(i,0,n){
            if(!cnt)k=v[i];
            if(v[i]==k)cnt++;
            else cnt--;
        }
        
            
        
        return k;
        
    }
};