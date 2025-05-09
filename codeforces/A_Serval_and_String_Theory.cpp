#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

// Constructed algorithm
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    string t = s, rt = s;
    sort(t.begin(), t.end());
    reverse(rt.begin(), rt.end());
    if (t[0] == t[n - 1] || k == 0 && s >= rt)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
}