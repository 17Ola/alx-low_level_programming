#include "main.h"

/**
 *  * main - Prints _putchar as a message.
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
		int str[] = {127, 122, 117, 116,099, 104, 097, 114};
			int count, sz;

			sz = sizeof(str) / sizeof(int);
			for (count = 0; count < sz; count++)
			{
				_putchar(str[count]);
			}
			_putchar('\n');
			return (0);
}
