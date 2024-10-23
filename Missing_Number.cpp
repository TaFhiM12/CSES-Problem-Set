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
    int sum = (n*(n+1)) / 2  , temp = 0 ;
    for(int i=0 ; i<n-1 ; i++){
        int a ; cin >> a ;
        temp += a ;
    }
    cout << sum - temp << nl ;
    return 0;
}