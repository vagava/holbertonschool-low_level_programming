# Resources
Read or watch:

- What is a Doubly Linked List

## Learning Objectives
- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## More Info
Please use this data structure for this project:
<p>
/**\
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</p>