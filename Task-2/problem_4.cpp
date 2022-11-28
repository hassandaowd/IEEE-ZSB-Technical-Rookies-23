#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)   return n;
    int temp[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    }
    temp[j++] = arr[n - 1];
    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }
    return j;
}
int main() 
{   
    st();
    cout<<"Input : "<<endl;
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n = removeDuplicates(arr, n);
    cout<<"Output : "<<endl;
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;   
}