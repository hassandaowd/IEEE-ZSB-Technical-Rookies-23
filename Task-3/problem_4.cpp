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
    int n,p,turn,res;
    cin>>n>>p;
    if (p==1 || p==n)
        turn=0;
    else{
        res = 1+(p-2)/2;
        if (n%2==0)
        {
            turn = min(res, (int)(1+(n-p-1)/2));
        }
        else    
            turn = min(res, (int)(1+(n-p)/2));
        
    }
    
    cout<<"Output : "<<endl;
    cout<<turn;
    return 0;   
}