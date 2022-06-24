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

void solve(int tt){
    ll y,x;
    cin>>y>>x;
    ll mx=max(y,x);
    if(mx&1)cout<<(mx-1)*(mx-1)+x+(mx-y)<<endl;
    else cout<<(mx-1)*(mx-1)+y+(mx-x)<<endl;
}

int main(){
    FASTIO;
    int tc;
    cin >> tc;
    for (int tt = 1; tt <= tc; tt++)
    {
        solve(tt);
    }
    return 0;
}