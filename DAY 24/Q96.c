#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
};

struct Student
{
    int rollNo;
    char name[50];
    struct Address address;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter City: ");
    scanf("%s", s.address.city);

    printf("Enter State: ");
    scanf("%s", s.address.state);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.address.city);
    printf("State: %s\n", s.address.state);

    return 0;
}