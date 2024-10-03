#include<bits/stdc++.h>
using namespace std;




int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int s = 0;
  int e = n - 1;
  int ans;
  while (s < e)
  {
    if (arr[s] != arr[e])
    {
      ans = -1;
      break;
    }
    s++;
    e--;
  }
 
  if(ans == -1)
    cout<<"NO";
  else
    cout<<"YES";
  return 0;
}