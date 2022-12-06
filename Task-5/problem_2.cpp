#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
bool valid (string s)
{
   stack<char> str;
   for(int i = 0; i < s.length(); i++) {
      if(s[i] == '(' || s[i] == '[' || s[i] == '{') 
      {
         str.push(s[i]);
      } 
      else if(s[i] == ')') 
      {
         if(i == 0 ||  str.empty() || str.top() != '(') 
         {
            return false;
         }
         str.pop();
      } 
      else if(s[i] == ']') 
      {
         if(i == 0 || str.empty() || str.top() != '[') 
         {
            return false;
         }
         str.pop();
      } 
      else if(s[i] == '}') 
      {
         if(i == 0 || t.empty() || str.top() != '{') 
         {
            return false;
         }
         str.pop();
      }
   }
   return t.empty();
}
int main() 
{   
   st();
   cout<<"Input : "<<endl;
   string s ;
   cin >> s ;
   cout<<"Output : "<<endl;
   if(valid)
      cout<<"true";
   else 
      cout<<"false";
   return 0;   
}
/*
   example
   Input : 
   ()
   Output : 
   true
   --------------------------
   Input : 
   ()[]{}
   Output : 
   true
   --------------------------
   Input : 
   ([{}])
   Output : 
   true
   --------------------------
   Input : 
   (]
   Output : 
   false
   --------------------------
   Input : 
   ([)]
   Output : 
   false
*/