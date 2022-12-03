#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
int minimumDistance(int a[], int n)
{
   map< int , int> hmap;
   int minDistance = INT_MAX;
   int previousIndex = 0, currentIndex = 0;
   for (int i = 0; i < n; i++) {
 
      if (hmap.find(a[i])!=hmap.end()) {
         currentIndex = i;
         previousIndex = hmap[a[i]];
         minDistance = min((currentIndex - previousIndex),minDistance);
      }
      hmap[a[i]] = i;
   }
   return (minDistance == INT_MAX ? -1 : minDistance);
}
int main() 
{   
   st();
   int n=10000;
   cout<<"Input : "<<endl;
   string s;
   getline(cin,s);
   int arr [n]={0},value =0, k=0;
   string str ="";
   for (int i = 0; i < s.size(); i++)
   {
      if (s[i]!=' ' && i != s.size()-1) str += s[i];
      else 
      {
         if(i == s.size()-1) str +=s[i];
         for (int j = 0; j < str.size(); j++)
         {
            value *= 10;
            value += (int)(str[j]-'0');
         }
         str ="";
         arr[k] = value;
         value = 0;
         k++;
      }
   }
   cout<<"Output : "<<endl;
   cout << minimumDistance(arr,k);
   return 0;   
}