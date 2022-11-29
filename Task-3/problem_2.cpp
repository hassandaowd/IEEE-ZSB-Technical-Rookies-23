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
    double grade[n];
    string student[n],sortst[n] ,sortName;
    for (int i = 0; i < n; i++)
    {
        cin>>student[i];
        cin>>grade[i];
    }
    int i,j;
    double key; 
    for( i=0 ; i<n ; i++){
        key = grade[i];
        sortName = student[i];
        j = i-1;        
        while (j>=0 && grade[j]>key)
        {
        grade[j+1] = grade[j];
        student[j+1]= student[j];
        j=j-1;
        }
        grade[j+1] = key ;
        student[j+1] = sortName;
    }
    double secLow = grade[1];
    int flag =0,index ;
    for (int z = 0; z < n-1; z++)
    {
        if(flag==0 && secLow > grade[z])
        {
            flag ==1;
            index = z+1;
            break;
        }
        else{
            secLow = grade[z+1];
        }
    }
    int nind =0;
    for (int z = 0; z < n; z++)
    {
        if(secLow == grade[z]){
            sortst[nind] = student[z]; 
            nind++;
        }
    }
    sort(sortst,sortst+(n));
    cout<<"Output : "<<endl;
    for (int z = 0; z < n ; z++)
    {   if(sortst[z]!="")
        cout<<sortst[z]<<endl;
    }
    return 0;   
}