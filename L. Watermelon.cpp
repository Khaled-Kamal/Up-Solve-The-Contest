#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int n ;
    cin >> n ;

    if(n %2 == 0 && n > 2)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
  //  cin >> t;
    while(t--)
    {
        solve();
    }
}
