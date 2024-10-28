
// program that counts the characters of the stdin input
// and prints the number of characters

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0;

    printf("Write some text: ");

    if (argc == 2 && argv[1][0] == '-') {
        switch (argv[1][1]) {
            case 'c':
                while (getchar() != EOF) {
                    count++;
                }
                printf("\nNumber of characters: %d\n", count);
                return 0;
            case 'w':
                char sign_prev = ' ';
                char sign = getchar(); 
                while (sign != EOF) {
                    if(sign_prev != ' ' && sign == ' ') count++;
                    sign_prev = sign;
                    sign = getchar();
                }
                ++count;
                printf("\nNumber of words: %d\n", count);
                return 0;
        }
    }
    return 0;
}