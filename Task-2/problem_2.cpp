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
    string strIn , strRev ="";
    cin>>strIn;
    for (int i = strIn.size()-1; i >= 0; i--)
    {
        char c=strIn[i];
        strRev +=c;
    }
    cout<<"Output : "<<endl;
    if(strIn == strRev)
        cout<<"yes";
    else 
        cout<<"no";
    return 0;   
}