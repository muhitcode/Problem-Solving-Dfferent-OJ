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
// int main() 
// { 
//     ios::sync_with_stdio(0); 
//     cin.tie(0); 
    
//     for(int i=0;i<10000;i++){
//     	int x;cin>>x;
//     	vi v;
//     	v.push_back(x);
//     	int n =v.size();
//     	if(n ==1)cout<<v[0];
    	
//     	int ans =0;
//     	if(n>1){
//     		if(n%2==0){
//     			ans =(v[(n/2)-1]+v[(n/2)])/2;
//     		}else{
//     			ans = v[(n/2)];
//     		}
//     	}
//     	cout<<ans<<"\n";

				
							
// 	}

// }


    



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int> lower_half; 
    priority_queue<int, vector<int>, greater<int>> upper_half;

    int x; 
    while (cin >> x) {
        if (lower_half.empty() || x <= lower_half.top()) {
            lower_half.push(x);
        } else {
            upper_half.push(x);
        }

        if (lower_half.size() > upper_half.size() + 1) {
            upper_half.push(lower_half.top());
            lower_half.pop();
        } else if (upper_half.size() > lower_half.size()) {
            lower_half.push(upper_half.top());
            upper_half.pop();
        }

        int median;
        if (lower_half.size() > upper_half.size()) {
            median = lower_half.top();
        } else {
            median = (lower_half.top() + upper_half.top()) / 2;
        }

        cout << median << "\n";
    }

    return 0;
}
