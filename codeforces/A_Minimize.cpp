#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int m[11];
    for (int i = 0; i <= 10; i++)
    {

      m[i] = (i - a) + (b - i);
    }
    int mi = 1e9;
    for (int i = 0; i <= 10; i++)
    {
      if (m[i] < mi)
      {
        mi = m[i];
      }
    }
    cout << mi << endl;
  }
  return 0;
}