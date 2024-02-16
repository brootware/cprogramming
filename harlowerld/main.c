#include <stdio.h>

int main() {
    int favNum = 0;
    double secondNum = 0;
    printf("Please enter your favorite number : ");
    scanf("%d %lf", &favNum, &secondNum);

    printf("Your first favorite number is %d and second number is %lf \n",favNum,secondNum);
    return 0;
}