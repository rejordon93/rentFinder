#include <stdio.h>

int main() {
    int age;
   
    printf("Enter a age\n");
    scanf("%d", &age);

   
    if(age >= 18){
        printf("You are eligible to dive");
    }
    else if (age <= 15)
    {
        printf("You are not eligible to dive!");
    }else{
        printf("Sorry you are a kid");
    }
    

    return 0;
}