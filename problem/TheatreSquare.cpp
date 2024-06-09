#include<iostream>
#include<cmath>

using namespace std;

int main(){
  long long  n,m,a;
  cin>>n>>m>>a;
  long long length = ceil((double)n/a);
  long long height = ceil((double)m/a);

  long long numofstone = length * height;

  
  cout<<numofstone;
}