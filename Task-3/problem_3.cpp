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
    int c[n],v[n];
    int sumOfC =0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i]>>c[i];
        sumOfC+=v[i];
    }
    sort(c,c+n);
    int largeBottleCap =c[0]+c[1];

    cout<<"Output : "<<endl;
    if(largeBottleCap >= sumOfC)
        cout<<"Yes";
    else 
        cout<<"No";
    return 0;   
}