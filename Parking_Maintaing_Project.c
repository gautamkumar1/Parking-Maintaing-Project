#include<stdio.h>
#include<stdlib.h>
int menu();
void cycle();
void bike();
void riksha();
void bus();
int showDetails();
void delete();
int no_of_cycle = 0 ,no_of_bike = 0,no_of_bus = 0,no_of_riksha = 0,amount,count = 0;
int main()
{
    printf(" ---------------");
    printf("| Parking Maintain |");
    printf(" ---------------");
    while (1)
    {
        switch (menu())
        {
        case 1:
            cycle();
            break;
        case 2:
            bike();
            break;
        case 3:
            riksha();
            break;
        case 4:
            bus();
            break;
        case 5:
            showDetails();
            break;
        case 6:
            delete();
            break;
        case 7:
            exit(0);

        default:
        printf("\nInvalid Choise");
            break;
        }
        
    }
    
}
int menu()
{
    int choise;
    printf("\n1. Enter Cycle: ");
    printf("\n2. Enter Bike: ");
    printf("\n3. Enter Riksha: ");
    printf("\n4. Enter Bus: ");
    printf("\n5. Show Status: ");
    printf("\n6. Delete Data: ");
    printf("\n7. Exit: ");
    printf("\n\nEnter your Choise = \n");
    scanf("%d",&choise);
    return(choise);
}
int showDetails()
{
    printf(" ---------------");
    printf("| Details |");
    printf(" ---------------");
    printf("\nNumber of Cycle = %d",no_of_cycle);
    printf("\nNo of Bike = %d",no_of_bike);
    printf("\nNo of Riksha = %d",no_of_riksha);
    printf("\nNo of Bus = %d",no_of_bus);
    printf("\nTotal Number of  Vehucle = %d",count);
    printf("\nTotal Gain Amount = %d",amount);
}
void delete()
{
    no_of_cycle = 0;
    no_of_bike = 0;
    no_of_riksha = 0;
    no_of_bus = 0;
    amount = 0;
    count = 0;
}
void cycle()
{
    printf("\nEntery Successful");
    no_of_cycle++; 
    amount+=50;
    count++;
}
void bike()
{
    printf("\nEntery Successful");
    no_of_bike++;
    amount+=60;
    count++;
}
void riksha()
{
    printf("\nEntery Successful");
    no_of_riksha++;
    amount+=20;
    count++;
}
void bus()
{
    printf("\nEntery Successful");
    no_of_bus++;
    amount+=100;
    count++;
}