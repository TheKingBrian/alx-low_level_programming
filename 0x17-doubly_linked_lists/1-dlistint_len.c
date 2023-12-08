#include "lists.h"
/**
 * dlistint_len - Countsall thearrays in the list
 * @h: The head of the dlistint_t list.
 * Return:the elemenst of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
