#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

// Get height
int getHeight(Node* node)
{
    if (node == NULL)
        return 0;

    return node->height;
}

// Maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Get balance factor
int getBalance(Node* node)
{
    if (node == NULL)
        return 0;

    return getHeight(node->left) - getHeight(node->right);
}

// Right Rotation
Node* rightRotate(Node* y)
{
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

// Left Rotation
Node* leftRotate(Node* x)
{
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

// Insert Node
Node* insert(Node* root, int value)
{
    // Normal BST insertion
    if (root == NULL)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        return root;

    // Update height
    root->height = 1 + max(getHeight(root->left),
                           getHeight(root->right));

    // Get balance factor
    int balance = getBalance(root);

    // Left Left Case
    if (balance > 1 && value < root->left->data)
        return rightRotate(root);

    // Right Right Case
    if (balance < -1 && value > root->right->data)
        return leftRotate(root);

    // Left Right Case
    if (balance > 1 && value > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left Case
    if (balance < -1 && value < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Inorder Traversal
void inorder(Node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}