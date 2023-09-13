#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

int printAlphabet (void) {
	char alphabet = 'a';

	while (alphabet <= 'z') {
		_putchar(alphabet);
		alphabet++;
	}
	_putchar("\n");

}
