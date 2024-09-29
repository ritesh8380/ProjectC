#include <stdio.h>
#include <string.h>
struct students
{
    int Roll;
    char name[10];
    float grade;
    char result[20];
};

int main()
{
    struct students s1, s2, s3;
    printf("Enter your roll no.\n");
    scanf("%d", &s1.Roll);
    getchar(); //when we press enter then scanf leaves a newline but then getchar(); consumes the new line and let the code go further.

    printf("whats your name :\n");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0; //Here 0 is the null terminator which will terminate the code wen fgets leave a new line.
    
    printf("Whats the grade point :\n");
    scanf("%f", &s1.grade);
    getchar();
    
    printf("The result is : \n");
    fgets(s1.result, sizeof(s1.result), stdin);
    s1.result[strcspn(s1.result,"\n")] = 0;
    printf("\n\n");

    printf("Roll number = %d\n", s1.Roll);
    printf("name is %s\n", s1.name);
    printf("grade is %.2f\n", s1.grade);
    printf("The final result is %s\n", s1.result);
    printf("\n");

    printf("Enter your roll no.\n");
    scanf("%d", &s2.Roll);
    getchar();

    printf("whats your name :\n");
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = 0;
    
    printf("Whats the grade point :\n");
    scanf("%f", &s2.grade);
    getchar();
    
    printf("The result is : \n");
    fgets(s2.result, sizeof(s2.result), stdin);
    s2.result[strcspn(s2.result,"\n")] = 0;
    printf("\n\n");

    printf("Roll number = %d\n", s2.Roll);
    printf("name is %s\n", s2.name);
    printf("grade is %.2f\n", s2.grade);
    printf("The final result is %s\n", s2.result);

    return 0;
}