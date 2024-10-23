#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    vector<int> v(n) ;
    int ans = 0 ;
    for(auto &i: v) cin >> i ;
    for(int i=1 ; i<n ; i++){
        if(v[i]<v[i-1]){
            ans += (v[i-1]-v[i]) ;
            v[i] += (v[i-1]-v[i]) ;
        }
    }
    cout << ans << nl ;
    return 0;
}