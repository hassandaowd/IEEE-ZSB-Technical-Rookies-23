#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
bool compare(pair<int,int>&a, pair<int,int>&b){
   return a.second>b.second;
}
int main() 
{   
    st();
    cout<<"Input : "<<endl;
    long long n , k;
    cin >> n >> k;
    long long arr[n];
    unordered_map<long long , long long > num;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      num[arr[i]]++ ;
    }
    vector<pair<int,int>>freq(num.begin(),num.end());
    sort(freq.begin(),freq.end(),compare);
    cout<<"Output : "<<endl;
    for(int i=0;i<k;i++)   
      cout << freq[i].first << " ";
    return 0;   
}