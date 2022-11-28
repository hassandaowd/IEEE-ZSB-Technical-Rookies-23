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
    string S,str="hello";
    cin>>S;
    int i=0,z=0;
    while(true){
        if(i==S.size() || z== str.size()){
            break;
        }
        if(S[i] == str[z]){
            z++;
        }
        i++;
    }
    cout<<"Output : "<<endl;
    if(z==5) cout<<"YES";
    else cout<<"NO";
    return 0;   
}