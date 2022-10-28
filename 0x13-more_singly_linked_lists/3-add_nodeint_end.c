#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * createNode - create a new node
 *
 * @prmNbr: name
 *
 * Return: new element
 */
listint_t *createNode(const int prmNbr)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = prmNbr;
	new->next = NULL;

	return (new);
}

/**
 * getLastNode - get last node
 *
 * @prmHeadNode: first node
 *
 * Return: last element
 */
listint_t *getLastNode(listint_t *prmHeadNode)
{
	if (!prmHeadNode)
		return (NULL);
	if (prmHeadNode->next == NULL)
		return (prmHeadNode);
	else
		return (getLastNode(prmHeadNode->next));
}
