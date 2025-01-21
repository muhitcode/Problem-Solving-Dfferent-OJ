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


// int exp(int cN){
// 	int n,m;
// 	cin>>n>>m;
// 	vi arr(n);
// 	for(auto& i:arr)
// 		cin>>i;
// 	for(int i=0;i<m;i++){


// 		char a;
// 		cin>>a;
// 		if(a=='S'){
// 			int x;cin>>x;
// 			for(auto& i:arr)
// 				i+=x;
// 		}else if(a=='M'){
// 			int x;cin>>x;
// 			for(auto& i:arr)
// 				i*=x;
// 		}else if(a=='D'){
// 			int x;cin>>x;
// 			for(auto& i:arr)
// 				i/=x;
// 		}else if(a=='P'){
// 			int y,z;
// 			cin>>y>>z;
// 			swap(arr[y],arr[z]);
// 		}else if(a=='R'){
// 			reverse(arr.begin(),arr.end());
// 		}
// 	}

// 	cout<<"Case "<<cN<<":"<<endl;
// 	for(auto& i:arr)
// 		cout<<i<<" ";
// 	cout<<endl;





//  }


// int main() 
// { 
//     ios::sync_with_stdio(0); 
//     cin.tie(0); 
   
//     int t;cin>>t;
   

//     for(int i=1;i<=t;i++){
//     	exp(i);
//     }	
    

//     return 0; 
// } 





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pT(int cN) {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; ++i) {
        char op;
        cin >> op;

        if (op == 'S') { 
            int D;
            cin >> D;
            for (int &x : arr) {
                x += D;
            }
        } else if (op == 'M') { 
            int D;
            cin >> D;
            for (int &x : arr) {
                x *= D;
            }
        } else if (op == 'D') { 
            int K;
            cin >> K;
            for (int &x : arr) {
                x /= K;
            }
        } else if (op == 'P') { 
            int Y, Z;
            cin >> Y >> Z;
            swap(arr[Y], arr[Z]);
        } else if (op == 'R') { 
            reverse(arr.begin(), arr.end());
        }
    }

    cout << "Case " << cN << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
}

int main() {
    int T;
    cin >> T;

    for (int cN = 1; cN <= T; ++cN) {
        pT(cN);
    }

    return 0;
}
