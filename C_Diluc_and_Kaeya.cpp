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
int gcd(int a, int b){
    return __gcd(a,b);
} 
void solve(){
    ll m,n,k;
    cin >> n;
    string s; cin >> s;
    map<pair<int,int>, ll> mp;
    int a = 0, b = 0;
    vector<int> ans;
    map<pair<int,int>, pair<int,int> > temp;
    for(int i =0; i< n; i++){
        if(s[i]=='D')
        b += 1;
        else a += 1;
        int g = gcd(a, b);
        int temp1 = a, temp2 = b;
        a = a/g;
        b = b/g;
        pair<int,int> p = make_pair(a, b);
        mp[p] += 1;
        ans.pb(mp[p]);
        a = temp1;
        b = temp2;
    }
    for(int i =0; i< ans.size(); i++)
    cout << ans[i] << " ";
    cout << endl;
}
int main() {
    FAST_FURIER;
    int tt=1;
    cin >> tt;
    while(tt--){
        solve();
    }
}
 