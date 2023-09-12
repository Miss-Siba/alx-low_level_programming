#include "main.h"
/**
 * print_alphabet_x10 - This function will print the alphabet x10.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
char letter;
int count;

for (count = 0; count < 10; count++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
