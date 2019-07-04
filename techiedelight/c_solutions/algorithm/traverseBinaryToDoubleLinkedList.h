#include <iostream>
#include <string>
#include <utility>
#include <list>
#include <stack>
#include <vector>
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

void printDoublyList(Node *ptr)
{
    while(ptr)
    {
        cout << ptr -> key << " -> ";
        ptr = ptr -> right;
    }
    cout << "nulptr";
}

void push(Node* node, Node* &headRef)
{
    if(headRef == nullptr)
    {
        headRef = node;
        headRef -> left = headRef -> right = nullptr;
        return;
    }

    headRef -> left = node;
    node -> right = headRef;

    node -> left = nullptr;

    headRef = node;
}

void convert(Node* root, Node* &headRef)
{
    if(root == nullptr)
        return;

    list<Node*> deque;
    deque.push_front(root);

    bool flag = false;

    stack<Node*> s;

    while(!deque.empty())
    {
        int nodeCount = deque.size();

        if(flag)
        {
            while(nodeCount)
            {
                Node *curr = deque.front();
                deque.pop_front();

                if(curr->left != nullptr)
                    deque.push_back(curr->left);

                if(curr->right != nullptr)
                    deque.push_back(curr->right);

                s.push(curr);
                nodeCount--;
            }
        }
        else
        {
            while(nodeCount)
            {
                Node* curr = deque.back();
                deque.pop_back();

                if(curr -> right != nullptr)
                    deque.push_front(curr->right);

                if(curr ->left !=nullptr)
                    deque.push_front(curr->left);

                s.push(curr);
                nodeCount--;
            }
        }

        flag = !flag;
    }

    while (!s.empty())
    {
        push(s.top(), headRef);
        s.pop();
    }
}

void traverseBinaryToDoubleLinkedList()
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
