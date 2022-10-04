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
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ret(2);
    ll sumOfA = 0, sumOfA2 = 0;
    ll temp;
    ll retA, retB;
    ll n = A.size();
    for (int i = 0; i < n; i++) {
        temp = A[i];
        sumOfA += temp;
        sumOfA2 += temp*temp;
        temp = i + 1;
        sumOfA -= temp;
        sumOfA2 -= temp*temp;
    }
    sumOfA2 = sumOfA2/sumOfA;
    retA = ((sumOfA + sumOfA2)/2);
    retB = (sumOfA2-retA);
    ret[0] = retA;
    ret[1] = retB;
    return ret;
}
