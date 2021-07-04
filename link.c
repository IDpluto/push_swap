#include "push_swap.h"

void dq_init(t_deque *q)
{
	q->head = NULL;
	q->tail = NULL;
}

t_bool dq_empty(t_deque *q)
{
	if (q->head == NULL)
		return (true);
	else
		return (false);
}
void append(t_deque *q, int data)
{
	t_node *new_node;
	t_node *new_node2;

	new_node = (t_node*)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->prev = q->tail;
	if (dq_empty(q))
		q->head = new_node;
	else
		q->tail->next = new_node;
	new_node->next = NULL;
	q->tail = new_node;
}
void dq_add_first(t_deque *q, int data)
{
	t_node *new_node;

	new_node = (t_node*)malloc (sizeof(t_node));
	new_node->data = data;
	new_node->next = q->head;
	if (dq_empty(q))
		q->tail = new_node;
	else
		q->head->prev = new_node;
	new_node->prev = NULL;
	q->head = new_node;
}

void dq_add_last(t_deque *q, int data)
{
	t_node *new_node;

	new_node = (t_node*)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->prev = q->tail;
	if (dq_empty(q))
		q->head = new_node;
	else
		q->tail->next = new_node;
	new_node->next = NULL;
	q->tail = new_node;
}

int dq_remove_first(t_deque *q)
{
	t_node *r_node;
	int r_data;

	r_node = q->head;
	r_data = q->head->data;
	if (dq_empty(q))
		exit(-1); //memory_error
	q->head = q->head->next;
	free(r_node);
	if (q->head == NULL)
		q->tail = NULL;
	else
		q->head->prev = NULL;
	return (r_data);
}

int dq_remove_last(t_deque *q)
{
	t_node *r_node;
	int r_data;

	r_node = q->tail;
	r_data = q->tail->data;

	if(dq_empty(q))
		exit(-1); //memory_error
	q->tail = q->tail->prev;
	free(r_node);
	if (q->tail == NULL)
		q->head = NULL;
	else
		q->tail->next = NULL;
	return (r_data);
}

int dq_get_first(t_deque *q)
{
	if (dq_empty(q))
		exit(-1); //memory_error
	return (q->head->data);
}

int dq_get_last(t_deque *q)
{
	if (dq_empty(q))
		exit(-1);
	return (q->tail->data);
}



/*int test(t_deque *q)
{
	int last;

	last = dq_remove_first(q);
	return (last);
}
*/
