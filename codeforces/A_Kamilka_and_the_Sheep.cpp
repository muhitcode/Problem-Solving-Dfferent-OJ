#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define vi vector<int>

int main(){
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[n - 1] - v[0] << endl;
  }
}