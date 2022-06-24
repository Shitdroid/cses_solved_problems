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
    string s;
    cin>>s;
    int cnt=1,maxCnt=0;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            maxCnt=max(cnt,maxCnt);
            cnt=1;
        }
        else cnt++;
        if(i==s.length()-1)maxCnt=max(cnt,maxCnt);
    }
    cout<<max(cnt,maxCnt)<<endl;
    return 0;
}