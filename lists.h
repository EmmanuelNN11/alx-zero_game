#ifndef LIST_H
#define LIST_H
#include <stdlib.h>

/**
 * struct kamba - singly linked lists
 * @strig: malloced string
 * @length: length of string
 * @next: next pointer
 */

typedef struct kamba
{
	char *strig;
	unsigned int length;
	struct kamba *next;
}kamba;

size_t print_list(const kamba *h);
size_t list_len(const kamba *h);
list_t *add_node(kamba **head, const char *strig);
list_t *add_node_end(kamba **head, const char *strig);
void free_list(kamba *head);

#endif
