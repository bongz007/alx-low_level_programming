#include "main.h"

/**
 * print_alphabet - print alphabet lowercases
 *
 * Return: Always 0  (success)
 * */

void print_alphabet(void)
{
	char alphabet;

	for  (alpha = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n')
}

