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


ll sum=0,mn=INT_MAX;
vll num;

void summer(ll n,ll pos){
    mn=min(mn,abs(sum-2*n));
    if(pos<num.size()){
        summer(num[pos]+n,pos+1);
        summer(n,pos+1);
    }
}

int main(){
    FASTIO;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++){
        ll a;
        cin>>a;
        num.PB(a);
        sum+=num[i];
    }
    summer(num[0],1);
    summer(0,1);
    cout<<mn<<endl;
    return 0;
}