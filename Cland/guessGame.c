#include <stdio.h>
#include <math.h>

int user_income();  
int user_rent(int income);  
int user_car_payment(int rent);
int user_food_cost(int totle, int rent, int car_payment);

int main() {
    int income = user_income();  
    int rent = user_rent(income);
    int car_payment = user_car_payment(rent);
    int food_cost = user_food_cost(income, rent, car_payment);


    int remaining = income - rent - car_payment - food_cost;  

    printf("What is left after month pay: %d\n", remaining);  

    return 0;

}

int user_income() {
    int income;

    printf("Enter income: ");
    scanf("%d", &income);

    return income;  
}

int user_rent(int income) {  
    int rent;

    do {
        printf("Enter rent cost: ");
        scanf("%d", &rent);

        if (rent > income) {
            printf("Error: Rent cannot be higher than your income. Try again.\n");
        }

    } while (rent > income);  

    return rent;
}
    int user_car_payment(int rent){
    int car_payment;

    do{
       printf("Enter car payment\n");
        scanf("%d", &car_payment);

     if (car_payment > rent){
          printf("Error: Rent is to hight cant pay for this car. Try again.\n");
     }
    } while (car_payment > rent);
    return car_payment;
}

int user_food_cost(int income, int rent, int car_payment){
    int food_cost;
    int remaining_budget = income - rent - car_payment;
    
    do  {
        printf("Enter food cost for the month\n");
        scanf("%d", &food_cost);

         if(food_cost > remaining_budget) {
           printf("Error: Food cost cannot exceed remaining budget. Try again.\n");

    }
           
     } while (food_cost > remaining_budget);

      return food_cost;
}
