#include <stdio.h>
#include <locale.h>

int main(int argc, char* argv[]) {

    setlocale(LC_ALL, "Rus");
    int i;
    for (i = 0; i < argc; i++) {
        printf("Аргумент %d: %s\n", i, argv[i]);
    }
    for (i = 0; i < argc; i++) {
        printf("Аргумент %d: %s\n", i+1, argv[i]);
    }
    if (argc == 1) {
        printf("Командная строка не имеет дополнительных аргументов\n");
    }
    return 0;
}