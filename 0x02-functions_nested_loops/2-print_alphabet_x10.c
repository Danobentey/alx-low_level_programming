#include <unistd.h>

void _putchar(char c) {
    write(1, &c, 1);
}

void print_alphabet_x10(void) {
    char letter = 'a';

    for (int i = 0; i < 10; i++) {
        while (letter <= 'z') {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
        letter = 'a'; // Reset the letter to 'a' for the next line
    }
}

int main() {
    print_alphabet_x10();
    return (0);
}

