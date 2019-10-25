#include <iostream>

using namespace std;

struct node
{
    int data;
    node* link;
};

node* head;

int main()
{
    head = NULL;

    node* first_node = new node;
    first_node -> data = 1;
    first_node -> link = NULL;

    node* second_node = new node;
    second_node -> data = 2;
    second_node -> link = head ->link;
    head = second_node;

    cout << first_node -> data << endl;
    cout << first_node -> link << endl;
    return 0;

}
