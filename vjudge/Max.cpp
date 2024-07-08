#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int ar[t];
  for (int i = 0; i < t; i++)
  {
    cin >> ar[i];
  }
  int max = ar[0];
  for(int i =0; i< t; i++){
    if(ar[i] > max){
      max = ar[i];
    }
  }
  cout<<max;

  return 0;
}