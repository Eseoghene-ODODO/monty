#ifndef monty_h
#define monty_h

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* MACROS */
#define SEPARATORS " \n\t\r"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* GLOBAL VARIABLES */
extern stack_t **global_free;

/* PROTOTYPES */
void monty_function(char *operator, stack_t **node, unsigned int count_lines);
void m_swap(stack_t **head, unsigned int count_lines);
int read_line(FILE *monty_file);
stack_t *add_node(stack_t **head, const int n);
void m_push(stack_t **node, unsigned int line_count);
size_t print_rev(stack_t *h);
void m_pint(stack_t **node, unsigned int line_count);
size_t print(stack_t *h);
void free_all(void);
void m_nop(stack_t **head, unsigned int count_lines);
void m_pall(stack_t **node, unsigned int line_count);
int delete_node(stack_t **head, unsigned int index);
void m_pop(stack_t **head, unsigned int line_count);
void m_add(stack_t **head, unsigned int line_count);
void m_sub(stack_t **head, unsigned int line_count);
void m_mul(stack_t **head, unsigned int line_count);
void m_div(stack_t **head, unsigned int line_count);
void m_mod(stack_t **head, unsigned int line_count);
void m_pchar(stack_t **head, unsigned int line_count);
void m_pstr(stack_t **head, unsigned int line_count);
void m_rotl(stack_t **head, unsigned int line_count);
void m_rotr(stack_t **head, unsigned int line_count);

#endif /*monty_h*/
