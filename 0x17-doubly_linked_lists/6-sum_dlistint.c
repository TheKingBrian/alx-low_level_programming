#include "lists.h"
/**
 * sum_dlistint - addsall the data
 * @head: The head of the dlistint_t list.
 * Return: displays all the added data
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
