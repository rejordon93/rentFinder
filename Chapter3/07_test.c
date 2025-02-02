#include <stdio.h>

int main() {
    int income, carPayment, rent, total, end_of_year, food_cost;
    float pet_cost;

    printf("Enter how much you earn a month:\n");
    scanf("%d", &income);

    printf("Enter your car payment amount:\n");
    scanf("%d", &carPayment);

    printf("Enter your rent amount:\n");
    scanf("%d", &rent);

    printf("Enter your food cost every month\n");
    scanf("%d", &food_cost);

    printf("Enter pet cost\n");
    scanf("%f", &pet_cost);

    

    if (income <= 100000)
    {
       printf("Keep workinf");
    }else{
        printf("Poor still have work");
    }
    

    total = income - carPayment - rent - food_cost - pet_cost;
    end_of_year = total * 12;

    printf("Amount left after expenses: %d\n", total);
    printf("What i would save every year %d\n", end_of_year);

    return 0;
}
