/*
	Modified Kaprekar Numbers -----> HackerRank
*/
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
bool kaprekar(long long n) 
{
    if(n <= 1) 
		return true;
    long long d =  floor(log10(n))+1; 
    long long sq = n*n;
    long long sum =0;
    for(int i=0; i<d; ++i) 
	{
        sum += (sq%10) * pow(10,i);
        sq /= 10; 
    }
    sum +=sq;
    return (sum==n);
} 

int main() 
{   
    st();
    long long p , q ;
	cin >> p >> q ;
	bool catchit = false;
	for (int i = p ; i <= q ; i++)
	{
		if (kaprekar(i))
		{
			if (catchit == false)
				catchit = true;
			cout << i << " ";
		}
	}
	if(catchit == false)
		cout << "INVALID RANGE";
    return 0;   
}