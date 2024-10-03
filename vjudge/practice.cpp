#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  getline(cin,str);//taking a whole line as input

  int wordCount = 0;
  bool inWord = true;

  for(int c: str){
    if(isalpha(c)){
      if(inWord){
        wordCount ++;
        inWord = false;
      }
    }else{
      inWord = true;
    }
  }
  cout<<wordCount<<endl;
}