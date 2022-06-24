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
    int tc;
    cin >> tc;
    if(tc<4 && tc>1)cout<<"NO SOLUTION"<<endl;
    else{
        for(int i=2;i<=tc;i+=2)cout<<i<<" ";
        for(int i=1;i<=tc;i+=2)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}