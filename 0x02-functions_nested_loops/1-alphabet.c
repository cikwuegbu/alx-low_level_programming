#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#endif
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++
}
_putchar('\n');
return (0);
}
