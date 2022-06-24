#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(0);cin.tie(0)
#define PB push_back
#define SZ 1e5+5
#define MOD (ll)(1e9+7)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vp;
typedef vector<pll> vpll;

int main(){
    FASTIO;
    int tc;
    cin >> tc;
    ll res=1;
    for(int i=1;i<=tc;i++)res=(res*2)%MOD;
    cout<<res<<endl;
    return 0;
}