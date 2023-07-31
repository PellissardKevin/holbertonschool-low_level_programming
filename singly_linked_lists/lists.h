#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct lists - structure of list
 * @str: strings or char
 * @len: size of strings
 * @next: poitner for the next node
*/
typedef struct lists
{
	char *str;
	int len;
	struct lists *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */
