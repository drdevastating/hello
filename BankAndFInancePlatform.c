// C program to implement
// the given approach
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

// Declaring all the functions
void check_balance(char*);
void transfer_money(void);
void display(char*);
void person(char*);
void login(void);
void loginsu(void);
void open_account(void);
void account_created(void);
void after_login(void);
void logout(void);

// Declaring gotoxy
// function for setting
// cursor position
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Creating a structure to store
// data of the user
struct user_details {
    char username[50];
    int date, month, year;
    char pan_number[12];
    char aadhar_num[15];
    char first_name[20];
    char last_name[20];
    char father_name[20];
    char mother_name[20];
    char address[50];
    char type_of_account[20];
};

// Structure to keep track
// of amount transfer
struct money {
    char username_reveiver[50];
    char username_sender[50];
    long int money1;
};

// Structure to store
// user password
struct user_password{
    char password[50];
};

// Driver Code
int main()
{
    int i, a, b, choice;
    int password_length;

    gotoxy(20,3);

    // Creating a Main
    // menu for the user
    printf("WELCOME TO DID Banking and finance platform\n\n");
    gotoxy(18, 5);

    printf("**********************************");
    gotoxy(25, 7);

    printf("DEVELOPERS:\n Dhruv Khanna\nDhruv Rawat\nIshaan Agarwal\n");

    gotoxy(20, 10);
    printf("1.... CREATE A BANK ACCOUNT");

    gotoxy(20, 12);
    printf("2.... ALREADY A USER? SIGN IN");
    gotoxy(20, 14);
    printf("3.... EXIT\n\n");

    printf("---------------------------------");
    printf("\n\nENTER YOUR CHOICE..");

    scanf("%d", &choice);
    fflush(stdin);

    switch (choice) {
    case 1:
        system("cls");
        printf("\n\n USERNAME 20 CHARACTERS MAX!!");
        printf("\n\n PASSWORD 10 CHARACTERS MAX!!");
        open_account();
        break;

    case 2:
        login();
        break;

    case 3:
        exit(0);
        break;

        getch();
    }
}

// Function to create accounts
// of users
void open_account(void)
{
    char password[20];
    int password_length, i, seek = 0;
    char ch;
    FILE *fp, *fu;
    struct user_details ud1;

    struct user_password p1;
    struct user_password p2;

    // Opening file to
    // write data of a user
    
