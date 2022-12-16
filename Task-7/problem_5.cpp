/*
   Library Fine / HackerRank
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
   int d1 , m1 , y1 ;
   cin >> d1 >> m1 >> y1;
   int d2 , m2 , y2 , fine = 0 ;
   cin >> d2 >> m2 >> y2;
   if(y1 > y2)
      fine = 10000;
   else if (y1 < y2)
      fine = 0;
   else if(m1 > m2 && y1 == y2)
      fine = (500 * abs(m1-m2));

   else if(d1 > d2 && m1 == m2)
      fine = (15 * abs(d1-d2));
   
   cout << fine ;
   return 0;   
}