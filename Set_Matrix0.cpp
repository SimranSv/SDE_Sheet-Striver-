
class Solution{
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
    void setZeroes(vector<vector<int>> &matrix)
    {

        ll n = matrix.size();
        ll m = matrix[0].size();
        vll r(n, 0), c(m, 0);
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                if (!matrix[i][j])
                {
                    r[i] = 1, c[j] = 1;
                }
            }
        }
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                if (r[i] || c[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
      
};
