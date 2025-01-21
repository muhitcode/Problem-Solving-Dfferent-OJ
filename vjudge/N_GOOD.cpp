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
//   	int t;cin>>t;
//   	for(int i=1;i<=t;i++){
//   		cout<<"Case "<<i<<": ";
//   		int x;cin>>x;
//   		double res = 0;
//   			int cre = 0;
//   		for(int i=0;i<x;i++){
//   			int cd;
//   			double mar;
//   			cin>>cd>>mar;
//   			if(mar<40){
//   				cout<<"Sorry, you have failed in 2 courses!"<<endl;
//   				return 0;
//   			}
  			
//   			res+=(double)cd*mar;
//   			cre+=cd;
//   		}
//   		cout<<res/(double)cre<<endl;

//   	}
//     return 0; 
// } 



#include <bits/stdc++.h>

using namespace std;

double getGrad(double m) {
    if (m >= 80) return 4.00;
    if (m >= 75) return 3.75;
    if (m >= 70) return 3.50;
    if (m >= 65) return 3.25;
    if (m >= 60) return 3.00;
    if (m >= 55) return 2.75;
    if (m >= 50) return 2.50;
    if (m >= 45) return 2.25;
    if (m >= 40) return 2.00;
    return 0.00;
}

int main() {
    int T; 
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int C; 
        cin >> C;

        double tGP = 0.0;
        double tC = 0.0;
        int fC = 0;

        for (int i = 0; i < C; ++i) {
            double m, c;
            cin >> m >> c;

            double gPa = getGrad(m);
            if (gPa == 0.0) {
                fC++;
            }

            tGP += gPa * c;
            tC += c;
        }

        cout << "Case " << t << ": ";
        if (fC > 0) {
            cout << "Sorry, you have failed in " << fC
                 << (fC == 1 ? " course!" : " courses!") << endl;
        } else {
            double CGPA = tGP / tC;
            cout << fixed << setprecision(2) << CGPA << endl;
        }
    }

    return 0;
}
