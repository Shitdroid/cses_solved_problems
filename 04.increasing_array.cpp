#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(0);cin.tie(0)
#define PB push_back
#define SZ 100005
#define deb(n) cout<<n<<endl;
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
    ll n,cnt=0;
    cin >> n;
    vector<ll> num(n,0); 
    for (ll tt = 0; tt < n; tt++)cin>>num[tt];
    for(ll i=1;i<n;i++){
        cnt+=max((ll)0,num[i-1]-num[i]);
        num[i]=max(num[i],num[i-1]);
    }
    cout<<cnt<<endl;
    return 0;
}