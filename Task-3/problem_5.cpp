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
    int n,m ,mx = 0;
    cin>>n>>m;
    int st[m];
    for(int i=0 ; i<m ; i++) 
        cin>>st[i];
    sort(st, st+m);
    for(int i=0 ; i<=st[0] ; i++) 
        mx = max(mx, st[0]-i);
    for(int i=0 ; i<m-1 ; i++){
        for(int j = st[i] ; j<=st[i+1] ; j++) {
            mx = max(mx, min(j-st[i], st[i+1]-j));
        }
    }
    for(int i=st[m-1] ; i<n ; i++) 
        mx = max(mx, i-st[m-1]);
    cout<<"Output : "<<endl;
    cout << mx << endl;
    return 0;   
}