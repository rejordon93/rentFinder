#include <stdio.h>

int main() {
       
    int gread;

    printf("Enter you gread\n");

    scanf("%d", &gread);

    if (gread >= 90) {
        printf("A");
    } else if (gread >= 80) {
        printf("B");
    } else if (gread >= 70) {
        printf("C");
    } else if (gread >= 60) {
        printf("D");
    } else if (gread > 50) {
        printf("F");
    } else {
        printf("Get back to studying");
    }




    return 0;
}