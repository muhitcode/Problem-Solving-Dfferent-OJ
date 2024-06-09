#include <iostream>
using namespace std;

int main() {
    int x,a,b;

    // Input X, A, and B
    cin>>x>>a>>b;
    int bestbydate=a+x;
    if(b<=bestbydate){
      cout<<"delicious\n";
    }else if(b<=bestbydate+1){
      cout<<"safe\n";
    }else{
      cout<<"dangerous\n";
    }

    return 0;
}
