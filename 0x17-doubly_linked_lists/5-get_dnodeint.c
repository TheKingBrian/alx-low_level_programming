#include "lists.h"
/**
 * get_dnodeint_at_index - finds allthe nodes
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 * Return: node doesnt exist show null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
