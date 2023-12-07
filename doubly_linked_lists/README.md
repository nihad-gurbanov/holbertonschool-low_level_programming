Doubly Linked Lists

0. size_t print_dlistint(const dlistint_t *h) 
	-is a function that prints all the elements of a dlistint_t list.

1. size_t dlistint_len(const dlistint_t *h)
	-is a function that returns the number of elements in a linked dlistint_t list.

2. dlistint_t *add_dnodeint(dlistint_t **head, const int n)
	-is a function that adds a new node at the beginning of a dlistint_t list.

3. dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
	-is a function that adds a new node at the end of a dlistint_t list.

4. void free_dlistint(dlistint_t *head)
	-is a function that frees a dlistint_t list.

5. dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
	-is a function that returns the nth node of a dlistint_t linked list.

6. int sum_dlistint(dlistint_t *head)
	-is a function that returns the sum of all the data (n) of a dlistint_t linked list.

7. dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
	-is a function that inserts a new node at a given position.

8. int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
	-is a function that deletes the node at index index of a dlistint_t linked list.
