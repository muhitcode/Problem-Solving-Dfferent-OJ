#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[10000], n, sum = 0, pre = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  },
  sort(a, a + n);
  int i;
  for (i = 0; 2 * pre <= sum; i++)
  {
    pre += a[n - i - 1];
  }
  cout << i;
}


