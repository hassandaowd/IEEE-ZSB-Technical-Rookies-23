/*
	B. Broze -----> Codeforces
*/
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
	string st , ans ;
	cin >> st ;
	for (int i = 0; i < st.size()+1; i++)
	{
		if (st[i]=='.')
			ans +='0';
		if (st[i]=='-' && st[i+1]=='.')
		{
			ans += '1';
			i++;
		}
		if(st[i]=='-' && st[i+1]=='-' )
		{
			ans += '2';
			i++;
		}
	}
	cout << ans ;
    return 0;   
}