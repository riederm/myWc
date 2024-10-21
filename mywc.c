
// program that counts the characters of the stdin input
// and prints the number of characters

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0;

    if (argc == 2 && argv[1][0] == '-') {
        switch (argv[1][1]) {
            case 'h':
                printf("This app can count inputs in two ways:\n"
                       "-c\tCounts the characters\n"
                       "-w\tCounts everything with spaces in between\n");
            case 'c':
                while (getchar() != EOF) {
                    count++;
                }
                printf("\nNumber of characters: %d\n", count);
                return 0;
            case 'w':
                printf("The new feature will be executed!\n");
        }
    } else {
        printf("ERROR: wrong input\n"
               "use one of the following commands:\n"
               "'-c' or '-c' or '-w'\n");
    }
    
    return 0;
}