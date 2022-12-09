/*
   Binary Search Tree : Insertion / HackerRank
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
class Node{
   public:
      int data;
      Node *left;
      Node *right;
      Node(int d){
         data = d;
         left = NULL;
         right = NULL;
      }
};
class Solution{
   public:
      Node* insert(Node* root, int data) {
         if(root == NULL) {
            return new Node(data);
         }
         else {
            Node* cur;
               if(data <= root->data){
                  cur = insert(root->left, data);
                  root->left = cur;
               }
               else{
                  cur = insert(root->right, data);
                  root->right = cur;
               }
               return root;
            }
         }
         int getHeight(Node* root){
         if(!root) {
           return -1;
         }
         int leftDepth = getHeight(root->left);
         int rightDepth = getHeight(root->right);
              
         return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
      }
      
}; 

void st(){ cin.tie(0);  cout.sync_with_stdio(0);}

int main() 
{   
   st();
   Solution myTree;
   Node* root = NULL;
   int t;
   int data;
   cin >> t;
   while(t-- > 0){
      cin >> data;
      root = myTree.insert(root, data);
   }
   int height = myTree.getHeight(root);
   cout << height;
   return 0;   
}