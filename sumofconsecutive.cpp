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
int parent[100017];
int size[100017];

void make(int v){
parent[v]=v;
size[v]=1;

}
int Find(int v){
    while(v!=parent[v]){
     v=parent[v];
    }
    return v;

}
void Union(int a,int b){
   a=Find(a);
   b=Find(b);
   if(a!=b){
    if(size[a]<size[b])swap(a,b);
    parent[b]=a;
    size[a]+=size[b];
   }
}

int longestConsecutive(vector<int>& nums) {
        ll n=sz(nums);
        unordered_map<ll,ll>mp;
        rep(i,0,n)make(i);
        rep(i,0,n){
            if(mp.find(nums[i])!=mp.end())continue;
            if(mp.find(nums[i]-1)!=mp.end()){
                Union(mp[nums[i]-1],i);
                
            }
             if(mp.find(nums[i]+1)!=mp.end()){
                Union(mp[nums[i]+1],i);
                
            }
             
            
            
                mp[nums[i]]=i;
                
            
        }
    int ans=0;
    rep(i,0,n){
        ans=max(ans,size[i]);
    }
    return ans;
     
        
    }
};