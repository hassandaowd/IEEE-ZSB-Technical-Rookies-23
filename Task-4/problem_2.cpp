#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
bool permutation(string s1 , string s2)
{
   if(s1.size()>s2.size())   return false;
   int count1[26] = {0};
   int count2[26] = {0};
   for(int i=0;i<s1.size();i++){
      count1[s1[i] - 'a']++;
      count2[s2[i] - 'a']++;
   }
   int st = 0;
   int end = s1.size();
   while (end < s2.size())
   {
      bool b = true;
      for(int i = 0; i < 26; i++){
         if(count1[i] != count2[i])
         {
            b=false;
            break;
         }
      }
      if (b)   return true;
      count2[s2[end] - 'a']++;
      count2[s2[st]  - 'a']--;
      st++ ;
      end++;
   }
   bool b = true;
   for(int i = 0; i < 26; i++){
      if(count1[i] != count2[i])
      {
         b=false;
         break;
      }
   }
   if (b)
   {
      return true;
   }
   return false;
}
int main() 
{   
   st();
   cout<<"Input : "<<endl;
   string s1 , s2 ;
   cin >> s1 >> s2 ;
   cout<<"Output : "<<endl;
   if(permutation(s1,s2)) cout <<"true";
   else cout <<"false";
   return 0;   
}