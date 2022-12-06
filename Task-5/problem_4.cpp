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
   cout<<"Input : "<<endl;
   int n;
   cin >> n ;
   cout<<"Output : "<<endl;
   while (n % 2 ==0)
   {
      cout<< 2 << " ";
      n /= 2;
   }
   for (int i = 3; i < sqrt(n); i+=2)
      while (n % i ==0)
      {
         cout<< i << " ";
         n /= i;
      }
   if (n > 2)
      cout<< n <<" ";
   return 0;   
}