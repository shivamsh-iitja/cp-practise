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
ll rec(ll n, int i, vector<int> carry){
    if(n==0){
        if(carry[i] == 0 && carry[i+1] == 0) return 1;
        else return 0;
    }
    int rem = n%10;
    if(carry[i]) rem = (rem+1)%10;
    ll ans = (rem+1) * rec(n/10, i+1, carry);
    carry[i+2] += 1;
    ans += (9 - rem) * rec(n/10, i+1, carry);
    return ans;
}
void solve(){
    ll m,n,k;
    cin >> n;
    vector<int> carry(12, 0);
    cout << rec(n, 0, carry);
    
}
int main() {
    FAST_FURIER;
    int tt=1;
    cin >> tt;
    while(tt--){
        solve();
    }
}
 