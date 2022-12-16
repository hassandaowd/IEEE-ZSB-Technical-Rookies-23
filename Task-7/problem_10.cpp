/*
	A. Lights Out  -----> Codeforces
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
	int n =3;
	int lights [n][n] , state[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> lights [i][j];
			state[i][j]=1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (lights[i][j] == 0)
				continue;
			if (lights[i][j] % 2 == 0)
				continue;
			else
			{
				state[i][j] = 1 - state[i][j];
				if ((j+1) <3)
					state[i][j+1] = 1 - state[i][j+1];
				if ((i+1) <3)
					state[i+1][j] = 1 - state[i+1][j];
				if ((i-1)>=0)		
					state[i-1][j] = 1 - state[i-1][j];
				if ((j-1)>=0)
					state[i][j-1] = 1 - state[i][j-1];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << state[i][j] ;
		}
		cout << endl;
	}
    return 0;   
}