#include <stdio.h>
enum Company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

int main() {
    enum Company firm2, firm0, firm4;
    firm2 = XEROX;
    firm0 = GOOGLE;
    firm4 = EBAY;
    printf("%d \n%d \n%d",firm2,firm0,firm4);

    return 0;
}