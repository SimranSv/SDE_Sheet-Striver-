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
   bool bs(ll i,ll target,ll m,vector<vector<int>>&v){
       ll l=0, h=m;
       while(l<=h){
           ll mid=(l+h)/2;
           if(v[i][mid]==target)return true;
        if(v[i][mid]<target)l=mid+1;
           else h=mid-1;
             
       }
       return false;
}
    
    bool searchMatrix(vector<vector<int>>&v, int target) {
        ll n=v.size();
        ll m=v[0].size();
        rep(i,0,n){
            if(v[i][0]<=target&&v[i][m-1]>=target)
            if(bs(i,target,m,v))return true;
            
        }
        return false;
        
    }
};