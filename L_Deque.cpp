//...START BY DOING WHAT IS NECESSARY, THEN WHAT IS POSSIBLE AND SUDDENLY YOU ARE DOING THE IMPOSSIBLE... 
#include <bits/stdc++.h>
using namespace std;typedef long long ll;
#define FAST_FURIER ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ppb pop_back
#define mk make_pair
#define sorta(v)        sort(v.begin(), v.end())
#define sortd(v)        sort(v.begin(), v.end(), comp)
#define rep(i,a,N)      for(ll i=a;i<N;i++)
#define rrep(i,a,N)     for(ll i=a;i>N;i--)
#define print(v)        for(ll ite=0;ite<v.size();ite++){cout<<v[ite]<<' ';}cout<<endl;
#define mem(v,a) 		 memset(v, a, sizeof(v))
#define M 1000000007
bool comp(ll x,ll y)
{
    return x > y;
}
 
/*...............code starts here................*/
// C is first won in M
ll dp[3005][3000];
vector<ll>arr(3005);
ll n;
// ll calc(ll i, ll j){
//     if(i>j)
//     return 0;
//     if(i==j)
//     return arr[i];
//     ll &res = dp[i][j];
//     if(res != -1)
//     return res;
//     return res = max(arr[i] - calc(i+1,j), arr[j] - calc(i,j-1));
// }

void solve(){
    cin >> n;
    rep(i,0,n) cin >> arr[i];
// cout << max(arr[0] - calc(1,n-1), arr[n-1] - calc(0,n-2));
    rrep(i,n-1,-1){
        rep(j,i,n){
            if(i==j)
            dp[i][j] = arr[i];
            else dp[i][j] = max(arr[i] - dp[i+1][j], arr[j] - dp[i][j-1]);
        }
    }
    cout<<dp[0][n-1];

}
int main() {
    FAST_FURIER;
    int tt=1;
    // cin >> tt;
    mem(dp,0);

    while(tt--){
        solve();
    
    }
}
 
 
 
 
// g++ -std=c++17