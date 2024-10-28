
// program that counts the characters of the stdin input
// and prints the number of characters

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0; 
    int in_word = 0;
    char temp;

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
               "use one of the following arguments:\n"
               "'-c' or '-c' or '-w'\n");
    }

    else if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        printf("This program is designed to count the number of characters\n");
        printf("from standard input (stdin) and print the total count.\n");
        printf("It also provides help information when a specific command-line argument is passed.\n");
        printf("Explanation of the arguments:\n");
        printf("-c\t counts the characters\n");
        printf("-w\t counts the words\n");
    }

    else if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'w') {
        while ((temp = getchar()) != EOF) {
            if (temp == ' ' || temp == '\n' || temp == '\t') {
                if (in_word == 1) {
                    count++;
                    in_word = 0;
                }
            } 
            else {
                in_word = 1;
            }
        }

        if (in_word == 1) {
            count++;
        }
        printf("\nNumber of words: %d\n", count);
    }

    return 0;
}
