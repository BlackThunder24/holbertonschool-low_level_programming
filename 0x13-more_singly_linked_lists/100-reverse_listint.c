#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *frente, *fondo;

if (head == NULL || *head == NULL)
return (NULL);

fondo = NULL;

while ((*head)->next != NULL)
{
frente = (*head)->next;
(*head)->next = fondo;
fondo = *head;
*head = frente;
}

(*head)->next = fondo;

return (*head);
}
