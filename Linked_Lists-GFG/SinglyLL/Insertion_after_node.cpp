// A simple C++ program for
// traversal of a linked list

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
void insertatbegin(Node *prev_node, int new_data){
     if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
    Node *new_node =new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
// Driver's code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 4; // assign data to third node
	third->next = NULL;

	// Function call
	printList(head);
    cout<<endl;
    insertatbegin(second,3);
    printList(head);
	return 0;
}


