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
typedef vector<bool> vb;

ll pwr(ll j){
    ll ul=1;
    for(int i=1;i<=j;i++){
        ul*=10;
    }
    return ul;
}

void solve(int tt){
    ll k=tt;
    cin>>k;
    ll n=9,pw=1;
    for(int i=0;;i++){
        if(k<=n*pw){
            ll res=n/9-1+(k/pw)+((k%pw==0)?0:1);
            ll rem=k%pw;
            if(rem==0)rem=pw;
            cout<<(res/(pwr(pw-rem)))%10<<endl;
            break;
        }
        k-=n*pw;
        n*=10;
        pw++;
    }
}

int main(){
    FASTIO;
    int tc=1000;
    cin >> tc;
    for (int tt = 1; tt <= tc; tt++){
        solve(tt);
    }
    return 0;
}