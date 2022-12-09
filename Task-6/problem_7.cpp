/*
   Beautiful Triplets / HackerRank
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
   int n, d ,but =0;
   cin >> n >> d;
   int arr[n];
   for(int i = 0; i < n; i++)  cin >> arr[i];
   for(int i = 0; i < n-2; i++) 
   {
     for(int j = i+1; j < n-1; j++) 
     {
         if(arr[j]-arr[i] == d) 
         {
            for(int k = i+2; k < n; k++) 
            {
               if(arr[k]-arr[j] == d) 
               {
                  but++;
                  break;
               }
            }
            break;
         }
      }
   }
   cout << but;
   return 0;   
}