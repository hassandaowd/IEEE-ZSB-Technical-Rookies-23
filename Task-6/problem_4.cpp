/*
   ACM ICPC Team / HackerRank
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
   int n , m;
   cin >> n >> m ;
   string s[505];
   int count=0 , mx = 0 , temp =0;
   // get the n strings 
   for (int i = 0; i < n; i++)   cin >> s[i];
   for (int i = 0; i < n; i++)
   {
      for (int j = i+1; j < n; j++)
      {
         temp = 0;
         for (int k = 0; k < m; k++)
         {
            if(s[i][k] =='1' || s[j][k] == '1')
               temp++;
         }
         if(temp == mx)
         {
            count++;
            continue;
         }
         if(temp > mx)
         {
            mx = temp;
            count =1;
         }
      }
      
   }
   cout << mx << endl << count ;
   return 0;   
}