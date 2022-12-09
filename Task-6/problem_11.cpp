/*
   A. Book Reading / Codeforces
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
   int n , t ;
   cin>>n>>t;
   int a[86500] , day = 86400 , c =0 ;
   for(int i=0; i<n; i++)  cin>>a[i];
   for(int i=0; i<n; i++){
      if( ( a[i]==0 ) && ( t>0 ) ){
         c++;
         t-=( day - a[i] );
      }
      else if( ( a[i] < day && a[i] > 0 ) && ( t > 0 ) ){
         t-=( day - a[i]);
         c++;
      }
      else if( ( a[i] >= day ) && ( t > 0 ) ){
         c++;
      }
   }
   cout<< c << endl;
   return 0;   
}