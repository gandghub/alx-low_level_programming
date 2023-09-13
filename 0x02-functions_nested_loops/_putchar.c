#include "main.h"
#include <unistd.h>

/**
*main - function prints text as output
*
*Return:return 0
*/
int _putchar(int c)
{
	return (write(1, &c,1));
}
