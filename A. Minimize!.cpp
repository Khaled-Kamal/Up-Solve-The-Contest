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
        int a , b ;
        cin >> a >> b ;

        cout << max(a , b ) - min(a , b) << '\n';
         cout << abs(a - b) << '\n';
    }
}
