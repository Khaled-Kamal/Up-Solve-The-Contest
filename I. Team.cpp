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
      int cnt = 0 ;
      while(t--)
      {
          int a , b , c;
          cin >> a >> b >> c ;

          int sum = a + b + c ;
          if(sum >= 2)
          {
              cnt++;
          }


      }
    cout << cnt << '\n';


}
