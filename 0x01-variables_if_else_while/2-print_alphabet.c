#include <stdio.h>
#include <string.h>

/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	for (c = 48; c <= 57; c++)
	{

	char str;

	for (str = 'a'; str <= 'z' ; str++)
		putchar(str);
	putchar('\n');
	return (0);

}
