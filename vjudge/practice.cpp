// #include "bits/stdc++.h" 
// using namespace std; 
// #define max(a, b) (a < b ? b : a) 
// #define min(a, b) ((a > b) ? b : a) 
// #define mod 1e9 + 7 
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
// #define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
// #define INF 1000000000000000003 
// typedef long long int ll; 
// typedef vector<int> vi; 
// typedef pair<int, int> pi; 
// #define F first 
// #define S second 
// #define PB push_back 
// #define POB pop_back 
// #define MP make_pair 
// #define nl endl
// #define sp " "



// int main() 
// { 
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     int n;
//     cin>>n; 
//     int arr[n];
//     FOR(i,n){
//         cin>>arr[i];
//     }
//     int s=sizeof(arr)/sizeof(arr[0]);
//     // int q;
//     // cin>>q;
//     // while(q--){
//     int k;
//     cin>>k;
//     int ans;
//     int low =0;
//     int high = s-1; 

//     while(low<=high){
//         int mid = (low +high)/2;
//         if(arr[mid]==k){
//             ans = mid;
//             high = mid - 1;
//         }
//         if(arr[mid]<k)
//             low = mid + 1;
//         else 
//             high = mid -1;
//     }



//     cout<<ans<<" "<<endl;
//   // }
//     return 0; 
// } 



#include <iostream>
#include <algorithm>

using namespace std;

unsigned int heights[50005];

int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i)
        cin >> heights[i];
    
    int Q;
    cin >> Q;
    
    while (Q--)
    {
        int height;
        cin >> height;
        
        unsigned int * above = upper_bound(heights, heights + N, height);
        unsigned int * below = above; --below;
        while (below >= heights && *below == height)
           --below;
       
        if (below >= heights)
            cout << *below << ' ';
        else
            cout << "X ";
       
        if (above == heights + N)
            cout << "X\n";
        else
            cout << *above << '\n';
    }
}