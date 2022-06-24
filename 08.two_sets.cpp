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
    if((n*(n+1)/2)&1)cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        vector<int> ans1,ans2;
        
        if(n&1){
            for(int i=1;i<=n/2;i++){
                if(i&1){
                    ans1.PB(i);
                    ans1.PB(n-i);
                }
                else{
                    ans2.PB(i);
                    ans2.PB(n-i);
                }
            }
            ans2.PB(n);
        }
        else{
            for(int i=1;i<=n/2;i++){
                if(i&1){
                    ans1.PB(i);
                    ans1.PB(n-i+1);
                }
                else{
                    ans2.PB(i);
                    ans2.PB(n-i+1);
                }
            }
        }
        cout<<ans1.size()<<endl;
        for(auto x:ans1)cout<<x<<" ";
        cout<<"\n"<<ans2.size()<<endl;
        for(auto x:ans2)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
