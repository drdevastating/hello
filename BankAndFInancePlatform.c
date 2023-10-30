#include<stdio.h>
void create_account();
void services_provided();
int main()
{    
    int choice;
    printf("-----Welcome to our DID Bank And Finance Platform-----\n");
    printf("1. Create an Account\n2. Already a customer...LOGIN\n3. Exit\n");
    printf("Enter the key as per your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {   
        case 1:
        create_account();
        break;
        case 2:
        services_provided();
        break;
        case 3:
        printf("-----Thank You for visiting our interface-----\n");
        break;
    }
}
void services_provided()
{
    
}
