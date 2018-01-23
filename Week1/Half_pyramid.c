#include <stdio.h>
#include <cs50.h>

int main (void) {

int input = 0;

    do {
        printf("Please input a number between 0 and 23: \n");
        input=get_int();
    }
    while (input < 0 && input > 23);

    for (int i=0; i<input; i++) {

        for(int x=0; x<=(input-i); x++) {
            printf(" ");
        }

        for(int x=0; x<=i; x++) {
            printf("#");
        }

        printf("\n");
    }
}