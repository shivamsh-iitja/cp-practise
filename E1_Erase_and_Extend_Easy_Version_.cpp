//...START BY DOING WHAT IS NECESSARY, THEN WHAT IS POSSIBLE AND SUDDENLY YOU ARE DOING THE IMPOSSIBLE... 
#include <bits/stdc++.h>
using namespace std;typedef long long ll;
#define FAST_FURIER ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define sorta(v)        sort(v.begin(), v.end())
#define sortd(v)        sort(v.begin(), v.end(), comp)
#define rep(i,a,N)      for(ll i=a;i<N;i++)
#define rrep(i,a,N)     for(ll i=a;i>N;i--)
#define print(v)        for(ll ite=0;ite<v.size();ite++){cout<<v[ite]<<' ';}cout<<endl;
#define M 1000000007
 
bool comp(ll x,ll y){
    return x > y;
}
 
/*...............code starts here................*/
// C is first won in M
bool check(string a, string b){
    // cout << a << " " << b << endl;
    string x, y;
    if(a.length() >= b.length()){
        x = b;
        x = a.substr(0, b.length())
    }
} 
void solve(){
    ll m,n,k;
    cin >> n >> k;
    string s; cin >> s;
    string a = "";
    rep(i,0,n){
        a += s[i];
        string b = s.substr(i+1, n-i-1);
        if(check(a, b))
        break;
    }
    int len = a.length();
    int req = (k + len - 1)/len;
    string ans = "";
    rep(i,0,req){
        ans += a;
    }
    rep(i,0,k) cout << ans[i];
    
}
int main() {
    FAST_FURIER;
    int tt=1;
    // cin >> tt;
    while(tt--){
        solve();
    }
}
 