#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t ;
    cin >> t ;
    while(t--)
    {

        int n ;
        cin >> n ;

        int a = n % 10 ; // 77
        int b = n / 10 ;

        cout << a + b << '\n';

    }
}
