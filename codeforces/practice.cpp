#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int x;
      cin >> x;
      vector<int> ve(x);
      for (int i = 0; i < x; i++)
      {
         cin >> ve[i];
      }
      cout<<ve[0];
      
   }
   return 0;
}