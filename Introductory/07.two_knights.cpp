/*
when we have two knights threatening each other, 
it actually forms either a 2×3 or 3×2 board. 
And for each of 2×3 and 3×2 boards,
here are 2 ways of placing two knights
so that they threaten each other.
number of 2×3 and 3×2 squares on n×n board is
(n−1)(n−2)+(n−2)(n−1)=2(n−1)(n−2)

And for each 2×3 and 3×2 board, 
there are 2 ways of placing the knights 
so that they threaten each other. 
Therefore, in total there are
2⋅2(n−1)(n−2)=4(n−1)(n−2) 
ways of placing two knights so that they threaten each other.
*/

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
    
}

int main(){
    FASTIO;
    ll n;
    cin >> n;
    for(ll i=1;i<=n;i++)cout<<(i*i)*(i*i-1)/2-4*(i-1)*(i-2)<<endl;
    return 0;
}