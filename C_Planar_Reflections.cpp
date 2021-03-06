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
 
void solve(){
    ll m,n,k;
    cin >> n >> k;
    if(n==1 and k > 1){
        cout<<2<<endl;
        return;
    }
    vector<ll> vec(n-1,1);
    ll ans = 2, f = 0;
    if(k==1)
    ans=1;  
    k -= 1;
    cout << vec.size()-1<<endl;
    ll size = vec.size();
    while(k>0){
        if(!f){
            //backward iteration.
            for(ll i = size-2; i >= 0; i--){
               vec[i] = (vec[i] + vec[i+1])%M;
            }
            ans = (ans + vec[0])%M;
        }
        else{
            //forward iteration.
            for(ll i=1; i< size; i++){
                vec[i] = (vec[i] + vec[i-1])%M;
            }
            ans = (ans + vec.back())%M;
        }
        // print(vec);
        f = 1-f;
        k -= 1;
    }
    cout<<ans<<endl;
}
int main() {
    FAST_FURIER;
    int tt=1;
    cin >> tt;
    while(tt--){
        solve();
    }
}
 