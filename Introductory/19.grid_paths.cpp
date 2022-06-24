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

ll cnt=0;

void dfs(string temp, string str, int dCnt, int rCnt, int tCnt){
    if(tCnt==48){
        cout<<temp<<endl;
        if(rCnt==0 && dCnt==6)cnt++;
        return;
    }
    else temp.PB(str[tCnt]);
    if(str[tCnt]=='?'){
        if(dCnt>0){
            temp[tCnt]='U';
            dfs(temp,str,dCnt-1,rCnt,tCnt+1);
        }
        if(dCnt<6){
            temp[tCnt]='D';
            dfs(temp,str,dCnt+1,rCnt,tCnt+1);
        }
        if(dCnt>0){
            temp[tCnt]='L';
            dfs(temp,str,dCnt,rCnt-1,tCnt+1);
        }
        if(rCnt<6){
            temp[tCnt]='R';
            dfs(temp,str,dCnt,rCnt+1,tCnt+1);
        }
    }
    else {
        switch(str[tCnt]){
            case 'U':
                dfs(temp,str,dCnt-1,rCnt,tCnt+1);
                break;
            case 'D':
                dfs(temp,str,dCnt+1,rCnt,tCnt+1);
                break;
            case 'L':
                dfs(temp,str,dCnt,rCnt-1,tCnt+1);
                break;
            case 'R':
                dfs(temp,str,dCnt,rCnt+1,tCnt+1);
                break;
        }
    }
}

int main(){
    FASTIO;
    string str;
    cin >> str;
    string temp="";
    dfs(temp,str,0,0,0);
    cout<<cnt<<endl;
    return 0;
}