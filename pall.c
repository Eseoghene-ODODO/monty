#include "monty.h"
/**
 * m_pall - print the stack
 * @head: doble pointer to head of d linked list
 * @line_count: current line of monty file
 * Return: returns void
 */
void m_pall(stack_t **head, __attribute__((unused)) unsigned int line_count)
{
	stack_t *temp = *head;

	if (*head && head)
	{
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}
