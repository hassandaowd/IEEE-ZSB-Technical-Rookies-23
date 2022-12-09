/*
   Remove Frindes / hackerearth
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
   int  t;
   cin >> t;
   while(t--)
   {
      	stack<int> s;
    	int q , val;
    	cin >> q >> val ;
		for (int i = 0; i < q ; i++)
		{
			int x;
			cin >> x;
			while (!(s.empty()) && s.top() < x && val >0)
			{
				s.pop();
				val--;
			}
			s.push(x);
		}
		vector <int> v;
		while (!(s.empty()))
		{
			v.push_back(s.top());
			s.pop();
		}
		reverse(v.begin() , v.end());
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
   }
   return 0;   
}