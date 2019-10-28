#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <string>
#include <utility>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

Node* newNode(int key)
{
    Node* node = new Node;
    node -> key = key;
    node -> left = node -> right = nullptr;

    return node;
}

void printDoublyList(Node* ptr)
{
    while(ptr)
    {
        cout << ptr -> key << " -> ";
        ptr = ptr -> right;
    }
    cout << "nullptr";
}

void push(Node* node, Node* &headRef)
{
    if(headRef == nullptr)
    {
    headRef = node;
    headRef -> left =  headRef -> right = nullptr;
    return;
    }

    headRef -> left = node;
    node -> right = headRef;

    node -> left = nullptr;

    headRef = node;
}

void preorder(Node *root, int level, auto &map)
{
    if(root == nullptr)
        return;

    if(level & 1)
        map[level].push_front(root);
    else
        map[level].push_back(root);

    preorder(root -> left, level + 1, map);
    preorder(root -> right, level + 1, map);
}

void convert(Node *root, Node* &headRef)
{
    unordered_map<int, list<Node*>> map;

    preorder(root, 0, map);

    int n = map.size();
    for(int i = n - 1; i >= 0; i--)
    {
        for(Node* node: map[i]){
            push(node, headRef);
        }
    }
}

void hashingBinaryToDoubleLinkedList()
{
    Node* root = nullptr;
    /* Construct below tree
              1
            /   \
           /     \
          2       3
         / \     / \
        /   \   /   \
       4     5 6     7
	*/

    root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> right -> left = newNode(6);
    root -> right -> right = newNode(7);

    Node* head = nullptr;
    convert(root, head);
    printDoublyList(head);
}
