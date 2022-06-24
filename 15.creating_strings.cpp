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

ll fact(int n){
    if(n>1)return n*fact(n-1);
    else return 1;
}


vector<int> cnt(26,0);
int x;

void make_string(string str){
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            string tempstr=str;
            cnt[i]--;
            tempstr+=(i+'a');
            if(tempstr.length()<x)make_string(tempstr);
            else cout<<tempstr<<endl;
            cnt[i]++;
        }
    }
}

int main(){
    FASTIO;
    string s;
    cin>>s;
    x=s.length();
    ll mul=fact(x);
    for(int i=0;i<s.length();i++)cnt[s[i]-'a']++;
    for(int i=0;i<26;i++){
        mul/=fact(cnt[i]);
    }
    cout<<mul<<endl;
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            string str="";
            str+=(char)(i+'a');
            cnt[i]--;
            if(str.length()<x)make_string(str);
            else cout<<str<<endl;
            cnt[i]++;
        }
    }
    return 0;
}