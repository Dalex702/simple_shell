#include "shell.h"
<<<<<<< HEAD
/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the memory area
 * @b: the byte to fill *s with
 * @n: the amount of bytes to be filled
 * Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	s[i] = b;
return (s);
}
=======

/**
 **_memset - fills memory with a constant byte
 *@s: the pointer to the memory area
 *@b: the byte to fill *s with
 *@n: the amount of bytes to be filled
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

>>>>>>> 1fa70573515254b3932f5d1313a377de81e08725
/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
<<<<<<< HEAD
char **a = pp;
if (!pp)
	return;
while (*pp)
	free(*pp++);
free(a);
}
=======
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

>>>>>>> 1fa70573515254b3932f5d1313a377de81e08725
/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
<<<<<<< HEAD
=======
 *
>>>>>>> 1fa70573515254b3932f5d1313a377de81e08725
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
<<<<<<< HEAD
char *p;
if (!ptr)
	return (malloc(new_size));
if (!new_size)
	return (free(ptr), NULL);
if (new_size == old_size)
	return (ptr);
p = malloc(new_size);
if (!p)
	return (NULL);
old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
	p[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (p);
=======
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
>>>>>>> 1fa70573515254b3932f5d1313a377de81e08725
}
