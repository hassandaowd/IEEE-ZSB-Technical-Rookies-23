#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
/*
   try to solve the nun 10 times else the output is false
*/
bool solve(int n) 
{
   int count = 0;
   while(n != 1) 
   {
      count++;
      int sum = 0,digit;
      while(n) 
      {
         digit = n % 10;
         sum += (digit * digit);
         n = n / 10;
      }
      n = sum;
      if(count == 10) 
         return false;
   }
   return true;
}
int main() 
{   
   st();
   cout<<"Input : "<<endl;
   int n;
   cin >> n ;
   cout<<"Output : "<<endl;
   if(solve(n))    cout<<"true";
   else            cout<<"false";
   return 0;   
}