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
    cin>>n;
    int mat[n][n];
    int sum1 =0 , sum2 =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
            if(i==j) sum1 += mat[i][j];
            if(i==n-j-1) sum2 += mat[i][j];
        }
    }
    int res = abs(sum1-sum2);    
    cout<<"Output : "<<endl;
    cout<<res;
    return 0;   
}