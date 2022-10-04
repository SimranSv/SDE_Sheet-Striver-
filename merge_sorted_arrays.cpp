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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        ll i=m-1,j=n-1;
        ll k=m+n-1;
        while(i>=0&&j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                j--;
                k--;
                
            }else {
                nums1[k]=nums1[i];
               // nums1[i]=nums2[j];
             //   j--;
               i--;
                k--;
            }
        }
        if(j>=0){
            for(int i=j;i>=0;i--){nums1[k]=nums2[i],k--;}
        }
        
    
        
    }
};