/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    int room_price[3] = {
        120,100,60
    };
    
    char calc[1];
    char room_type[10];
    int meal_type, days;
    float room_charge;
    printf("WELCOM TO PARADDIGM HOSPITAL\n");
    
    bool conti = true;
    
    while (conti){
        
    printf("Room type (S-single, T-two-bedded, F-for-bedded) : ");
    scanf("%s", room_type);
    
    while ((strcmp(room_type, "S") != 0) && (strcmp(room_type, "T") != 0) && (strcmp(room_type, "F") != 0))    {
       
        printf("Invalid\nRoom type (S-single, T-two-bedded, F-for-bedded) : ");
    scanf("%s", room_type);
    }
    
    if (strcmp(room_type, "S") == 0)    {
        printf("You have chosen a single-bedded room\n\n");
    } else if (strcmp(room_type, "T") == 0)    {
        printf("You have chosen a two-bedded room\n\n");
    }   else    {
        printf("You have chosen a four-bedded room\n\n");
    }
    
    printf("Meal option (1-with meal, 2-without meal) : ");
    scanf("%d", &meal_type);
    
    while ((meal_type != 1) && (meal_type != 2))    {
        printf("Invalid\nMeal option (1-with meal, 2-without meal) : ");
    scanf("%d", &meal_type);
        
    }
    
    printf("No. of days: ");
    scanf("%d", &days);
    
    if (strcmp(room_type, "S") == 0)    {
        if (meal_type == 1) {
             room_charge = (room_price[0] + 20)*days;
        }   else    {
            room_charge = (room_price[0]*days);
        }
    } else if (strcmp(room_type, "T") == 0) {
         if (meal_type == 1) {
            room_charge = (room_price[1] + 20)*days;
        }   else    {
            room_charge = (room_price[1]*days);
        }
    }   else    {
        if (meal_type == 1) {
            room_charge = (room_price[2] + 20)*days;
        }   else    {
            room_charge = (room_price[2]*days);
        }
    }
    
    printf("The ward charge is RM %0.2f\n\n", room_charge+(room_charge*0.06));
    
    printf("Calculate another ward charge? (Y-yes/N-no) : ");
    scanf("%s", calc);
    
    if (strcmp(calc, "N") == 0) {
        break;
    }
    
    }
        
    

    return 0;
}
