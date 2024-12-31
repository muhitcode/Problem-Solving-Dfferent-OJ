#include<bits/stdc++.h>
using namespace std;

int main(){




int n, k;
cin >> n >> k;
vector<int> v(n);
for (int i = 0; i < n; i++)
{

  cin >> v[i];
}
vector<int> hs(n);
for (int i = 1; i < n; i++)
{
  hs[i] = v[i] + v[i - 1];
}
bool f = 0;
for (int i = 0; i < n; i++)
{
  if (hs[i] == k)
  {
    f = 1;
    break;
  }
}
if (f)
{
  cout << "YES" << endl;
}
else
{
  cout << "YES" << endl;
}
}