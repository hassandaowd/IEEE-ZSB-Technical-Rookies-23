/*
	Chocolate Feast -----> HackerRank
*/
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
int chocolateFeast(int n, int c, int m) 
{
  	int bars = n/c , wrappers = n/c;
  	while( wrappers >= m)
	{  
      bars = bars + wrappers / m;
      wrappers = wrappers % m + wrappers / m;  
  	}
  	return bars;
}
int main() 
{   
    st();
	int t;
	cin >> t;
	while (t--)
	{
		int n , c , m ;
		cin >> n >> c >> m ;
		cout << chocolateFeast( n , c , m ) << endl;
	}
    return 0;   
}