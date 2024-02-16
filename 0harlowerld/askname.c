#include <stdio.h>

int main() {
    char yourName[10];
    printf("What is your name? : ");
    scanf("%s", yourName);

    printf("Your name is %s\n",yourName);
    return 0;
}