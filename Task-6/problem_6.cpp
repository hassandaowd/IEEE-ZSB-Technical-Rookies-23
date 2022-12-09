/*
   Circular Array Rotation / HackerRank
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
   int n , k , q;
   cin >> n >> k >> q;
   int arr[n];
   for (int i = 0; i < n; i++)   cin >> arr[i];
   k %= n;
   for (int i = 0; i < q; i++)
   {
      int b;
      cin >> b;
      cout << arr[(n-k+b)%n] <<endl;
   }
   return 0;   
}