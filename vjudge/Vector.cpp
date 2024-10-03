#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> A;

  for (int i = 0; i < n; i++)
  {
    int queryType;
    cin >> queryType;
    if (queryType == 0)
    {
      int x;
      cin >> x;
      A.push_back(x);
    }
    else if (queryType == 1)
    {
      int p;
      cin >> p;
      cout << A[p] << endl;
    }
    else if (queryType == 2)
    {
      A.pop_back();
    }
  }
  return 0;
}