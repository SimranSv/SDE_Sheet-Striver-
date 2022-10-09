class Solution {
public:
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
    int lengthOfLongestSubstring(string s) {
        mpll mp;
        //int s;
        int i=0,j=0;
        ll n=sz(s);
        int ans=0;
        while(j<n){
             mp[s[j]]++;
         while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
        }
            ans=max(ans,j-i+1);
            j++;
           
             
        }
      //  if(ans==0)ans=1;
        return ans;
        
    }
};