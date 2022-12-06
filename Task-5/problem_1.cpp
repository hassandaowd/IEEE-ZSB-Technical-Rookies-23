#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
void st(){ cin.tie(0);  cout.sync_with_stdio(0);}
void heapify(int arr[], int N, int i)
{
   int largest = i; 
   int l = 2 * i + 1; 
   int r = 2 * i + 2; 
   if (l < N && arr[l] > arr[largest])   largest = l;
   if (r < N && arr[r] > arr[largest])   largest = r;
   if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, N, largest);
   }
}
void Heap(int arr[], int N)
{
   for (int i = (N / 2) - 1 ; i >= 0; i--)    heapify(arr, N, i);
}
int main() 
{   
   st();
   cout<<"Input : "<<endl<<"Enter an array followed by /0 "<<endl;
   int arr[100000] ,i=0;
   while (cin)
   {
      cin>>arr[i];
      i++;
   }
   Heap(arr,i);

   cout<<"Output : "<<endl;
   for (int j = 0; j < i-1; j++)
      cout<<arr[j]<<" ";
   
   return 0;   
}
/* example
   Input : 
   Enter an array followed by /0 
   81 13 77 24 35 61 48 3 23 87 92 95 74 57 99 86 28 15 55 7 51 /0
   Output : 
   99 92 95 86 87 81 77 28 55 51 35 61 74 57 48 3 24 15 23 7 13
*/