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
    if(n<4 && n != 1) cout <<"NO SOLUTION" << nl ;
    else{
        for(int i=2 ; i<=n ; i+=2) cout << i << " ";
        for(int i=1 ; i<=n ; i+=2) cout << i << " ";
        cout << nl ;
    }
    return 0;
}