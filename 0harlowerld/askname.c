#include <stdio.h>

int main() {
    char yourName[10];
    printf("What is your name? : ");
    scanf("%s", yourName);

    printf("Hello %s, nice to meet you!\n",yourName);
    return 0;
}