#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t ;
   cin>> t ;
   while(t--)
   {
       int a , b , c ,d;
       cin >> a >> b >> c >> d ;
       int cont = 0 ;
       if(b>a) cont++;
       if(c>a) cont++;
       if(d>a) cont++;

       cout << cont << endl;
   }
}