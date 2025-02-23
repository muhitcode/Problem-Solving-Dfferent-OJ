#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
#define nl endl
#define sp " "

int maxSum(int arr[],int n,int k){
    if(n<=k){
        cout<<"invalid";
        return -1;
    }
    int max_sum = 0;
    for(int i=0;i<k;i++)
        max_sum +=arr[i];
    int window_sum = max_sum;
    for(int i=k;i<n;i++){
        window_sum+=arr[i]-arr[i-k];
        max_sum = max(max_sum,window_sum);
    }
    return max_sum;
}
int main() 
{ 
     int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
} 