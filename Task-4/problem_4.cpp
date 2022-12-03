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
   int n ,value =0;
   cin >> n;
   int arr [n];
   for (int i = 0; i < n; i++)  cin >> arr[i];
   for (int j = 0; j < n; j++)
   {
      value *= 10;
      value += arr[j];
   }
   value++;
   int test = value,k=0,val[n+1];
   while (test > 0)
   {
      int digit = test%10;
      test /=10;
      val[k] = digit;
      k++;
   }
   cout<<"Output : "<<endl;
   for (int i = k-1; i >=0 ; i--)
      cout << val [i] << " ";
   return 0;   
}