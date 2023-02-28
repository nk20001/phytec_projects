#include<stdio.h>
#include"meal.h"
int main() {
    int i;
    int choice = -1;
    printf("\n\n_____________* Welcome to SDI Canteen *_______________\n");
    printf("\n\n\tMEAL:\n\t1. Breakfast\n\t2. Lunch\n\t3. Snacks\n\t4. Dinner\n\t5. Exit\n");
    int flag = 1;
    while(flag){
        printf("\n\nEnter your choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                breakfast(i);
                flag = 0;
                break;
            case 2:
                lunch(i);
                flag = 0;
                break;
            case 3:
                snacks(i);
                flag = 0;
                break;
            case 4:
                dinner(i);
                flag = 0; 
                break;
            case 5:
                printf("Thank You, Your Order will be served soon!!!\n");
                flag = 0; 
                break; 
            default:
                printf("> Invalid Input\n");
                break;
        }
    }
    
    printf("\n\n\t_________Enjoy your meal__________\n\n");
    return 0;
}
