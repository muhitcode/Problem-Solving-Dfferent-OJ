#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  string a[t];
  for (int i = 0; i < t; i++)
  {
    cin >> a[i];
  }
  int count = 0;
  for (int i = 0; i < t; i++)
  {
    
      if (a[i] == a[i + 1])
      {
        count++;
      }
    
  }

  cout << count << endl;

  return 0;
}