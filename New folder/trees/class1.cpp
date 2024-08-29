#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            this->data=val;
            left=NULL;
            right=NULL;
        }
       
};

 Node* createTree(){
            cout << "Enter the data for the root node : ";
            int value;
            cin >> value;
            if(value==-1){
                  return NULL;
            }
              else{
                  Node* root = new Node(value);
                  // 1 case  maine solve kr leya bako to recusion sambhal lega
                  cout << "Enter the data for the  : "<< value << endl;
                  root->left = createTree();
                   cout << "Enter the data for the  : "<< value << endl;
                  root->right = createTree();
                 
                  return root;
              }
        
        }

void preOrder(Node* root){
    if(root==NULL)
        return;
        // N
    cout << root->data << endl;
    //L
    preOrder(root->left);
    // R
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==NULL)
        return;
        // L
    inOrder(root->left);
    // N
    cout << root->data << endl;
    // R
    inOrder(root->right);
}
void postOrder(Node* root){
    if(root==NULL)
        return;
        // L
    postOrder(root->left);
    // R
    postOrder(root->right);
    // N
    cout << root->data << endl;
}




void levelOrder(Node* root){
    if(root==NULL)
        return;
        
   queue<Node*> q;
   q.push(root);
   q.push(NULL); 
   while(!q.empty()){
      // queue se nikalo 
      Node* front = q.front();
              q.pop();
      if(front=NULL){
        // iska mtlb current level complete ho gya hai
        cout << endl;
        if(!q.empty()){
            q.push(NULL);
        }
      }
      else{
   

      // fir tum print krwalio
      cout << front->data << endl;

      // isle bache kha lo

      if(front->left!=NULL){
         q.push(front->left);
      }
      if(front->right!=NULL){
         q.push(front->right);
      }
   
      }
}



void morris(Node* root){
    if(root==NULL)
        return;
        // L
    morris(root->left);
    // R
    morris(root->right);
    // N
    cout << root->data << endl;
}
int main(){

// this is a type of non linnear data structure
// it is called a tree

// it is a recursive data structure
//  here jiska koi or bacha mhi hot ahia usko leaf node lha jata hia

// ye levels mai divide hote hai

// yha pr jada se 2 bache ho sakte hai 0,1,2

Node* root ;
root = createTree();

cout << root->data << endl;

    return 0;
}

//there are so many typs iof traveral
//in this program we are using pre order traversl
//pre order traversl means
//first print the data
//then print the left child
//then print the right child


// inoreder traversl
//first print the left child
//then print the data
//then print the right child

//post order traversl
//first print the left child
//then print the right child
//then print the data

// level order traversl
//first print the left child
//then print the data
 //then print the right child
 
 
 // morris traversl
 //first print the left child
 //then print the right child
 //then print the data
 
//  time complexity is O(N)
//  space complexity is O(N)

//worst case is in the skew binary tree