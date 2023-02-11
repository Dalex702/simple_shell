#include "shell.h"
<<<<<<< HEAD
/**
 * _eputs - prints an input string
 * @str: the string to be printed
=======

/**
 *_eputs - prints an input string
 * @str: the string to be printed
 *
>>>>>>> 7b4424f5c93de947fa36634ff9596c809de69241
 * Return: Nothing
 */
void _eputs(char *str)
{
<<<<<<< HEAD
int i = 0;
if (!str)
	return;
while (str[i] != '\0')
{
_eputchar(str[i]);
i++;
}
}
/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
=======
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 *
>>>>>>> 7b4424f5c93de947fa36634ff9596c809de69241
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _eputchar(char c)
{
<<<<<<< HEAD
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(2, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
	buf[i++] = c;
return (1);
}
=======
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

>>>>>>> 7b4424f5c93de947fa36634ff9596c809de69241
/**
 * _putfd - writes the character c to given fd
 * @c: The character to print
 * @fd: The filedescriptor to write to
<<<<<<< HEAD
=======
 *
>>>>>>> 7b4424f5c93de947fa36634ff9596c809de69241
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putfd(char c, int fd)
{
<<<<<<< HEAD
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(fd, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
	buf[i++] = c;
return (1);
}
/**
 * _putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
=======
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 *_putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 *
>>>>>>> 7b4424f5c93de947fa36634ff9596c809de69241
 * Return: the number of chars put
 */
int _putsfd(char *str, int fd)
{
<<<<<<< HEAD
int i = 0;
if (!str)
	return (0);
while (*str)
{
i += _putfd(*str++, fd);
}
return (i);
=======
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
>>>>>>> 7b4424f5c93de947fa36634ff9596c809de69241
}
