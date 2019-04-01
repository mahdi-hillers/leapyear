#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if (argc == 1){
        printf("You haven't entered the year! Try again!\n");
        return 1;
    }
    int year = atoi(argv[1]);
    if (year%4 > 0){
        printf("It is NOT a leap year!\n");
    } else {
        printf("It is a leap year!\n");
    }
}