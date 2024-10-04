#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

      int n , h ;
      cin >> n >> h ;
      int arr[n];
      int ans = 0 ;
    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
        if(arr[i] > h )
        {
            ans+=2;
        }
        else
        {
            ans++;
        }
    }

    cout << ans ;


}
