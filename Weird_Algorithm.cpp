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
    if(n==1) cout << n << nl ;
    else{
        vector <int> v ;
        v.push_back(n);
        while(1){
            if(n % 2 == 0) {
                n = n / 2 ;
            }
            else {
                n = n * 3 + 1 ;
            }
            v.push_back(n);
            if(n==1) {
                break;
            }
        }

        for(auto u : v) {
            cout << u << " ";
        }
        cout << nl ;
    }
    return 0;
}