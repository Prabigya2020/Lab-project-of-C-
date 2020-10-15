#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
    char address[100];
} s[150];

int main() {
    int i,n;
    printf("How many students:");
    scanf("%d",&n);
    printf("Enter information of students:\n");
    for (i = 0; i < n; i++)
	{
        printf("Enter detail of %d student\n",i+1);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter address: ");
        scanf("%s", s[i].address);
    }


    for (i = 0; i < n; i++) {
    	printf("\nDetail of %d student",i+1);
        printf("\nFirst name: ");
        puts(s[i].firstName);
        printf("Roll no: %d", s[i].roll);
        printf("\nMarks: %.1f", s[i].marks);
        printf("\n");
        printf("address: ");
        puts(s[i].address);
    }
    return 0;
}
