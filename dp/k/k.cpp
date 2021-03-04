#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < n; i++)
#define repd(i, n) for (int i = n-1; i > -1; i--)
#define repran(i, a,b) for (int i = a; i<b;i++)
#define all(x) (x).begin(), (x).end()
#define v(T) vector<T>
#define vv(T) vector<v(T)>
typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
template<class T>bool chmax(T &a, const T &b){
    if (a < b) {a = b; return true;}
    return false;
}
template<class T>bool chmin(T &a, const T &b){
    if (a > b) {a = b; return true;}
    return false;
}
bool dp[110000];
int main()
{
    int n, k;
    cin >> n>> k;
    vi a(n);
    rep(i, n) cin >> a[i];
    rep(i, k+1){
        for (int x : a){
            if (i+x <=k and dp[i]==0) dp[i+x] = 1;
        }
    }
    if (dp[k]) cout << "First" << endl;
    else cout << "Second" << endl;
}