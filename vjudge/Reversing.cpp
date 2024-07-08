#include<bits/stdc++.h>
using namespace std;
int reverseArray(int arr[],long n){
  int s = 0;
  int e = n-1;
  while(s<e){
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    s++;
    e--;
  }

}
int main(){
  long n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  reverseArray(arr,n);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  
  return 0;
}