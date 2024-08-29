// binary search tree are those in which the left child is always less than the parent and the right child is always greater than the parent

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};

void buildBST(int val, Node *&root)
{
    if (root == NULL)
    {
        root = new Node(val);
    }
    else if (val < root->data)
    {
        buildBST(val, root->left);
    }
    else if (val > root->data)
    {
        buildBST(val, root->right);
    }
}


void preOrder(Node *root)
{
	if (root == NULL)
		return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(Node *root)
{
	if (root == NULL)
		return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(Node *root)
{
	if (root == NULL)
		return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

Node *createTree()
{
    cout << "Enter the data for the Node (-1 to stop): " << endl;
    int val;
    cin >> val;

    Node *root = NULL;

    while (val != -1)
    {
        buildBST(val, root);
        cout << "Enter the data for the Node (-1 to stop): " << endl;
        cin >> val;
    }

    return root; // Return the root node
}

void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
}

int getMin(Node *root)
{
	if (root == NULL)
		return -1;
        while (root->left != NULL){
            root = root->left;

        } 

        // iska mtlb jab main yha phunchunga 
        // tn root extreme left pr hoga
        return root->data;
        
}

int getMax(Node *root)
{
	if (root == NULL)
		return -1;
        while (root->right != NULL){
            root = root->right;

        } 

        // iska mtlb jab main yha phunchunga 
        // tn root extreme right pr hoga
        return root->data;

}



int main() {
    Node* root = createTree();
    std::cout << "Level Order Traversal: ";
    levelOrder(root);
    std::cout << "preOrder: ";
    preOrder(root);
    std::cout << "inOrder: ";
    inOrder(root);
    std::cout << "postOrder: ";
    postOrder(root);
    std::cout << std::endl;

    std::cout << "Min: " << getMin(root) << std::endl;
    std::cout << "Max: " << getMax(root) << std::endl;



    return 0;
}





//yha humne kiya basic bst and the searching in bst 

// or min and max in bst
