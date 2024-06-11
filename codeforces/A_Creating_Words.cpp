#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; 
    cin>>t;
    string arr1,arr2;
    for(int i=1;i<=t;i++){
       cin>>arr1;
       cin>>arr2;
       for(int j=0;j<=2;j++){
           int temp=arr1[0];
           arr1[0]=arr2[0];
           arr2[0]=temp;
       }
       cout<<arr1<<" "<<arr2<<endl;
       
    }
    return 0;
     
 }