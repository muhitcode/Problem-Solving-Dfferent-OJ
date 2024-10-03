#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int up, lw;
  for (int i = 0; i < s.size(); i++)
  {
    if (isupper(s[i]))
    {
      up++;
    }
    else if(islower(s[i]))
      {
        lw++;
      }
  }
  string s1;

  for (int i = 0; i < s.size(); i++)
  {
    if(up<lw || up == lw){
      putchar(tolower(s[i]));
    }
    else if(up>lw){
      putchar(toupper(s[i]));
    }
  }
  

  
}