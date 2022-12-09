/*
   Find Digits / HackerRank
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
   int t ;
   cin >> t;
   while (t--)
   {   
      int n ,d ,count =0 ;
      cin >> n;
      int test = n;
      while (test)
      {
         d = test %10;
         test /=10;
         if(d==0) continue;
         if(n % d ==0) count++;
      }
      cout << count << endl;
   }
   return 0;   
}