#include <stdio.h>
#include <stdbool.h>

#define BUFFER_SIZE 1000

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int say = 0;
    char buffer[BUFFER_SIZE * 12]; // Her sayı ve '\n' için yeterli alan
    int buffer_index = 0;

    printf("Startin\n");

    while (true) {
        int len = sprintf(buffer + buffer_index, "%d\n", say);
        buffer_index += len;
        say++;

        if (buffer_index > BUFFER_SIZE * 10) { // Buffer dolduysa
            printf("%s", buffer);
            buffer_index = 0;
        }
    }
}