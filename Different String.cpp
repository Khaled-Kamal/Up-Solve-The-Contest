#include <bits/stdc++.h>
#define ll long long
using namespace std;
void KKB()
{
    string s ;
    cin >> s ;
    string x = s;
    sort(x.begin(),x.end());
    if(x!=s)
    {
        cout << "YES" << '\n' << x << '\n';
    }
    else
    {
        reverse(x.begin(),x.end());
        if(x==s)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n' << x << '\n';

        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1 ;
    cin >> t ;
    while(t--)
    {
        KKB();
    }

    return 0;
}