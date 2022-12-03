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
   int n,count=0;
   cin >> n;
   while (n!=6174)
   {
      if(n==0)
         break;
      count++;
      int arr[4]={0};
      for (int i = 0; i < 4; i++)
      {
         arr[i] = n%10;
         n /=10;
      }
      sort(arr,arr+4);
      int mn = arr[0]*1000 + arr[1]*100 + arr[2]*10 + arr[3]*1;
      int mx = arr[3]*1000 + arr[2]*100 + arr[1]*10 + arr[0]*1;
      n = abs(mx-mn);
   }
   cout<<"Output : "<<endl;
   cout<<count;
   return 0;   
}