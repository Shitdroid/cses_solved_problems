#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(0);cin.tie(0)
#define PB push_back
#define SZ 100005
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
    ll tc,ans;
    cin >> tc;
    for (int tt = 5; tt <= tc; tt*=5){
        ans+=tc/tt;
    }
    cout<<ans<<endl;
    return 0;
}