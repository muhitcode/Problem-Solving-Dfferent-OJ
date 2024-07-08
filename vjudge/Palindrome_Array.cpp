#include<bits/stdc++.h>
using namespace std;

int palindromeArray(int arr[], int n){
  int s = 0;
  int e = n-1;
  
  while(s<e){
    if(arr[s] != arr[e]){
      int ans = -1;
      break;
    }
    s++;
    e--;
  }
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  palindromeArray(arr, n);
  int ans;
  if(ans == -1)
    cout<<"NO";
  else
    cout<<"YES";
  return 0;
}