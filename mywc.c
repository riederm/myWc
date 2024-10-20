
// program that counts the characters of the stdin input
// and prints the number of characters

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0;

    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'c') {
        while (getchar() != EOF) {
            count++;
        }
        printf("\nNumber of characters: %d\n", count);
        return 0;
    }
    
    return 0;
}