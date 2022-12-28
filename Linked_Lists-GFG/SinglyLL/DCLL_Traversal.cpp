// C++ program to illustrate creation
// & traversal of Doubly Circular LL

#include <bits/stdc++.h>
using namespace std;

// Structure of a Node
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

// Function to insert Node at
// the beginning of the List
void insertBegin(struct Node** start, int value)
{
	// If the list is empty
	if (*start == NULL) {
		struct Node* new_node = new Node;
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}

	// Pointer points to last Node
	struct Node* last = (*start)->prev;

	struct Node* new_node = new Node;

	// Inserting the data
	new_node->data = value;

	// Update the previous and
	// next of new node
	new_node->next = *start;
	new_node->prev = last;

	// Update next and previous
	// pointers of start & last
	last->next = (*start)->prev = new_node;

	// Update start pointer
	*start = new_node;
}

// Function to traverse the circular
// doubly linked list
void display(struct Node* start)
{
	struct Node* temp = start;

	printf("\nTraversal in"
		" forward direction \n");
	while (temp->next != start) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);

	printf("\nTraversal in "
		"reverse direction \n");
	Node* last = start->prev;
	temp = last;

	while (temp->prev != last) {

		// Print the data
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("%d ", temp->data);
}

// Driver Code
int main()
{
	// Start with the empty list
	struct Node* start = NULL;

	// Insert 5
	// So linked list becomes 5->NULL
	insertBegin(&start, 5);

	// Insert 4 at the beginning
	// So linked list becomes 4->5
	insertBegin(&start, 4);

	// Insert 7 at the end
	// So linked list becomes 7->4->5
	insertBegin(&start, 7);

	printf("Created circular doubly"
		" linked list is: ");
	display(start);

	return 0;
}
