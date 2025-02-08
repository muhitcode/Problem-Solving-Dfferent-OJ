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

const int max_int = 1e6;

// int divisor(int n)
// {
//   int c =0;
//   for (int i = 1; i<= n; i++)
//   {
//     if (n % i == 0)
//       c++;
//   }
//   return c;
// }

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  vi digitDivi(max_int+1,0);
  for(int i=1;i<=max_int;i++){
    for(int j=i;j<=max_int;j+=i){
      digitDivi[j]++;
    }
  }
  int n;cin>>n;
  vi a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i:a){
    cout<<digitDivi[i]<<endl;
  }


  return 0;
}

// // C++ implementation of Naive method to print all
// // divisors
// #include <iostream>
// using namespace std;

// // function to print the divisors
// void printDivisors(int n)
// {
//     for (int i = 1; i <= n; i++)
//         if (n % i == 0)
//             cout << i << " ";
// }

// /* Driver program to test above function */
// int main()
// {
//     cout <<"The divisors of 100 are: \n";
//     printDivisors(100);
//     return 0;
// }


// 2nd approach
// #include <iostream>
// #include <vector>
// using namespace std;

// const int MAX_X = 1e6;

// int main()
// {
//   // Precompute divisors for all numbers up to MAX_X
//   vector<int> divisors(MAX_X + 1, 0);

//   for (int i = 1; i <= MAX_X; i++)
//   {
//     for (int j = i; j <= MAX_X; j += i)
//     {
//       divisors[j]++;
//     }
//   }

//   // Read input
//   int n;
//   cin >> n;
//   vector<int> numbers(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> numbers[i];
//   }

//   // Output the number of divisors for each number
//   for (int x : numbers)
//   {
//     cout << divisors[x] << endl;
//   }

//   return 0;
// }
