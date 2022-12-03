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
   cin >> n;
   int arr[n][n];
   for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
         cin>>arr[i][j];
   for (int i = 0; i < n / 2; i++) {
      for (int j = i; j < n - i - 1; j++) 
      {
         int temp = arr[i][j];
         arr[i][j] = arr[n - 1 - j][i];
         arr[n - 1 - j][i] = arr[n - 1 - i][n - 1 - j];
         arr[n - 1 - i][n - 1 - j] = arr[j][n - 1 - i];
         arr[j][n - 1 - i] = temp;
      }
   }
   cout<<"Output : "<<endl;
   for (int i = 0; i < n; i++) 
   {
      for (int j = 0; j < n; j++)
         cout << arr[i][j] << " ";
      cout << '\n';
   }
   return 0;   
}