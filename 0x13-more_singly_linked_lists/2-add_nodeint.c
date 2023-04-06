#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));

	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = *head;
	*head = a;

	return (*head);
}
