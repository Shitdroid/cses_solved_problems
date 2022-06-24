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
    string s,ans="";
    char odd;
    cin>>s;
    vector<int>cnt(26,0);
    int oddCnt=0,evCnt=0;
    for(int i=0;i<s.length();i++){
        cnt[s[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]&1){
            oddCnt++;
            
            if(oddCnt>1)break;
            else{
                for(int j=0;j<cnt[i]/2;j++)ans.PB('A'+i);
                odd='A'+i;
            }
        }
        else{
            for(int j=0;j<cnt[i]/2;j++)ans.PB('A'+i);
        }
    }
    if(oddCnt>1)cout<<"NO SOLUTION"<<endl;
    else {
        cout<<ans;
        if(oddCnt)cout<<odd;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}