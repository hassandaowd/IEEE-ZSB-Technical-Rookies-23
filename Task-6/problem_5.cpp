/*
   HackerRank in a String! / HackerRank
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
int main() 
{   
   st();
   int q;
   cin >> q;
   while (q--)
   {
      string s;
      cin >> s;
      string str = "hackerrank";
      int slen = 0;
      for (int i= 0; i < s.size() && slen < str.size() ; i++) 
      {
         if (s[i] == str[slen]) 
            slen++; 
      }
      if (slen == str.size())  cout << "YES" << endl;
      else                     cout << "NO"  << endl;
   }
   return 0;   
}