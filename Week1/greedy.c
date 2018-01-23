#include <stdio.h>
#include <cs50.h>

int main (void) {

float input = 0;

do {
    printf("Please input the change amount in US Dollars: \n$:");
    input=get_float();
    }
while (input <= 0);

int cents = input*100;
int coins = 0;

if (cents >= 25) {
    cents=cents-25;
    coins=coins+1;

    if (cents >= 10) {
        cents=cents-10;
        coins=coins+1;

        if (cents >= 5) {
            cents=cents-5;
            coins=coins+1;

            if (cents >= 1) {
                cents=cents-1;
                coins=coins+1;
                }
            }
        }
    }

printf("Your change will consist of %i coins. \n", coins);
}
