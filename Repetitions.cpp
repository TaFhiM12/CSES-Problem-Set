#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    string str ; cin >> str ;
    int cnt = 0 , ans = 0 ;
    for(int i=0 ; i<str.size(); i++){
        if(str[i]==str[i+1]){
            cnt ++;
            // cout << cnt << nl ;
        }
        else{
            ans = max(cnt,ans);
            cnt = 0 ;
        }
    }
    cout << ans+1 << nl ;
    return 0;
}