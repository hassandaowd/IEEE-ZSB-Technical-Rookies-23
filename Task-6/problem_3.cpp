/*
   Climbing the Leaderboard / HackerRank
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
   int n ;
   cin >> n ;
   int ranked[n] ;
   for (int i = 0; i < n; i++)   cin >> ranked[i];
   int k = 0;
   int score[n] , num = ranked[0];
   score[k] = num;
   k++;
   for (int i = 1; i < n; i++)
   {
      num = ranked [i];
      if(num == ranked[i-1])
         continue;
      else
      {
         score[k] = num;
         k++;
      }
   }
   int m , ord , j = k-1 ;
   cin >> m ;
   int player[m];
   for (int i = 0; i < m; i++)
   {
      cin >> player[i]; 
      for ( j ; j >= 0; j--) 
      {
         if(player[i]<score[j])
         {   
            ord = j+2;
            break;
         }
         else if(player[i]==score[j])
         {
            ord = j+1;
            break;
         }
         else if(player[i] > score[j] && j==0)
         {
            ord = j+1;
            break;
         }
      }
      cout << ord << endl;
   }
   return 0;   
}
// 100 50 40 20 10 
// 100 50 40 20 10 5 --------------> 6
// 100 50 40 25 20 10 -------------> 4
// 100 50 50 40 25 20 10 ----------> 2
// 120 100 50 40 20 10 ------------> 1