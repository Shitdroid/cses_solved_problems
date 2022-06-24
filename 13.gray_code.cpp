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


int main(){
    FASTIO;
    int n;
    cin >> n;
    vector<ll>num;
    num.PB(0);
    num.PB(1);
    for(int i=1;i<n;i++){
        for(int j=num.size()-1;j>=0;j--)num.PB(num[j]|(1<<i));
    }
    for(ll x:num)cout<<bitset<16>(x).to_string().substr(16-n,n)<<endl;
    return 0;
}