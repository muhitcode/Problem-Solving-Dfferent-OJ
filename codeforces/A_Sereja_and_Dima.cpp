#include<bits/stdc++.h>
using namespace std;
#define max(a, b) (a<b?b:a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c) for(int(a) =0;(a) < (c);(a)++)
#define FORL(a,b,c) for(int(a) =(b); (a) <= (c);(a)++)
#define FORR(a,b,c) for(int(a) = (b); (a) >= (c);(a)--)
#define INF 1000000000000000003
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POP pop_back
#define POP pop_back
#define MP make_pair
#define nl endl
#define sp " "
int main(){
  int n;
  cin>>n;
  int arr[n];
  FOR(i,n){
    cin>>arr[i];
  }
  int s=0,d=0;
  int left =0;
  int right = n-1;
  int taken =n;
  int turn = 0;

  while(taken!=0){
    if(turn%2 ==0){
      if(arr[left]>arr[right]){
        s += arr[left];
        left++;
      }else{
        s+=arr[right];
        right--;
      }
    }else{
      if(arr[left]>arr[right]){
        d+=arr[left];
        left++;
      }else{
        d+=arr[right];
        right--;
      }
    }
    taken--;
    turn++;
  }
  cout<<s<<" "<<endl;
}