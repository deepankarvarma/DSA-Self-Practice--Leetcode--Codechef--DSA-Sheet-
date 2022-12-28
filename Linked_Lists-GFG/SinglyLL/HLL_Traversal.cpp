// C++ program to illustrate creation
// and traversal of Header Linked List

#include <bits/stdc++.h>

// Structure of the list
struct link {
	int info;
	struct link* next;
};

// Empty List
struct link* start = NULL;

// Function to create header of the
// header linked list
struct link* create_header_list(int data)
{

	// Create a new node
	struct link *new_node, *node;
	new_node = (struct link*)malloc(sizeof(struct link));
	new_node->info = data;
	new_node->next = NULL;

	// If it is the first node
	if (start == NULL) {

		// Initialize the start
		start = (struct link*)malloc(sizeof(struct link));
		start->next = new_node;
	}
	else {

		// Insert the node in the end
		node = start;
		while (node->next != NULL) {
			node = node->next;
		}
		node->next = new_node;
	}
	return start;
}

// Function to display the
// header linked list
struct link* display()
{
	struct link* node;
	node = start;
	node = node->next;

	// Traverse until node is
	// not NULL
	while (node != NULL) {

		// Print the data
		printf("%d ", node->info);
		node = node->next;
	}
	printf("\n");

	// Return the start pointer
	return start;
}

// Driver Code
int main()
{
	// Create the list
	create_header_list(11);
	create_header_list(12);
	create_header_list(13);

	// Print the list
	printf("List After inserting"
		" 3 elements:\n");
	display();
	create_header_list(14);
	create_header_list(15);

	// Print the list
	printf("List After inserting"
		" 2 more elements:\n");
	display();

	return 0;
}
