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

int dfs(vector<string> board, vector<bool> lDiag, vector<bool> rDiag, vector<bool> col, int pos){
    int cnt=0;
    for(int i=0; i<8;i++){
        if(board[pos][i]=='*')continue;
        if(!rDiag[i+pos] && !lDiag[7+i-pos] && !col[i]){
            rDiag[i+pos]=true;
            lDiag[7+i-pos]=true;
            col[i]=true;
            if(pos==7){
                cnt++;
            }
            else cnt+=dfs(board,lDiag,rDiag,col,pos+1);
            rDiag[i+pos]=false;
            lDiag[7+i-pos]=false;
            col[i]=false;
        }
    }
    return cnt;
}

int main(){
    FASTIO;
    vector<string> board;
    for(int i =0;i<8;i++){
        string s;
        cin>>s;
        board.PB(s);
    }
    vector<bool>rDiag(20,0),lDiag(20,0),col(10,0);
    cout<<dfs(board,lDiag,rDiag,col,0)<<endl;
    return 0;
}