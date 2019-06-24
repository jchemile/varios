#include <iostream>
#include <unordered_map>

using namespace std;

struct Node
{
    int data;
    Node* left, *right;
    Node* random;

    Node(int data)
    {
        this -> data = data;
        this -> right = this ->left = nullptr;
        this -> random = nullptr;
    }
};

void preorder(Node* root)
{
    if(root == nullptr)
        return;

    cout << root->data << " --> (";

    (root->left) ? cout << root -> left->data << ", " : cout <<"X" << ", ";

    (root->right) ? cout << root -> right ->data << ", ": cout <<"X" << ", ";

    (root -> random) ? cout << root -> random -> data << ")\n": cout << "X" << ")\n";

    preorder(root->left);
    preorder(root->right);
}

void updateRandomPointers(Node* root, unordered_map<Node*, Node*> &map)
{
    if(map[root] == nullptr)
        return;

    map[root] -> random = map[root->random];

    updateRandomPointers(root->left, map);
    updateRandomPointers(root->right, map);
}

Node* cloneLeftRightPointers(Node* root, unordered_map<Node*, Node*> &map)
{
    if(root == nullptr)
        return nullptr;

    map[root] = new Node(root->data);

    map[root] -> left = cloneLeftRightPointers(root->left, map);
    map[root] -> right = cloneLeftRightPointers(root -> right, map);

    return map[root];
}

Node* cloneSpecialBinaryTree(Node* root)
{
    unordered_map<Node*, Node*> map;

    cloneLeftRightPointers(root, map);

    updateRandomPointers(root, map);

    return map[root];
}

using namespace std;

int main()
{
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    root -> random = root -> right -> left -> random;
    root -> left -> left -> random = root -> right;
    root -> left -> right -> random = root;
    root -> right -> left -> random = root -> left -> left;
    root -> random = root -> left;

    cout << "Preorder traversal of the original tree: \n";
    preorder(root);

    Node* clone = cloneSpecialBinaryTree(root);

    cout << "\Preorder traversal of the cloned tree:\n";
    preorder(clone);


    return 0;
}
