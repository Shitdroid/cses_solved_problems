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
    int n;
    cin >> n;
    vector<bool> in(n,false); 
    for (int tt = 1; tt < n; tt++)
    {
        int a;
        cin>>a;
        in[a-1]=true;
        
    }
    for(int i=0;i<n;i++){
        if(!in[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}