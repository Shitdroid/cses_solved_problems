#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(0);cin.tie(0)
#define PB push_back
#define MOD (ll)(1e9+7)
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
    ll a,b;
    bool flag=true;
    cin>>a>>b;
    if(max(a,b)>min(a,b)*2)flag=false;
    else if((a+b)%3!=0)flag=false;\
    flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
}

int main(){
    FASTIO;
    int tc;
    cin >> tc;
    for (int tt = 1; tt <= tc; tt++){
        solve(tt);
    }
    return 0;
}