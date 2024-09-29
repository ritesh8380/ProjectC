#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int control;
    int contains, count_check_int;
    int count = 0;
    char count_check_char;
    printf("write your sentence to check for number of letter or number in the string\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\0")] = 0;
    printf("press 1 if you want to check for no.of particular letter or press 2 to check for no.of particular number\n");
    printf("Your Input : \t");
    scanf("%d", &control);
    getchar();
    if (control == 1)
    {
        printf("you chose 1 i.e check for particular letter tell me the letter : \t");
        scanf("%c", &count_check_char);
        getchar();
        for (int i = 0; i != strlen(str); i++)
        {
            if (str[i] == count_check_char)
            {
                count++;
            }
            
        }
        printf("%d times %c is in the following string\n", count, count_check_char);
    }
    else if (control == 2)
    {
        printf("you chose 2 i.e check for particular number tell me the number : \n");
        scanf("%d", &count_check_int);
        getchar();
        for (int i = 0; i != strlen(str); i++)
        {
            if (str[i] - '0' == count_check_int)  /*Here i use str[i] = count_check_int which is comparing char with string which is a big issue
                                                    in order to solve this problem i have to convert this string form char to integer so str[i]-'0'
                                                    Really helps but why only 0 because 0-9 ascii value is 48-57 and were 0 has the value 48 so to get
                                                    value 1 we have to check when does ascii is equal to 1 then 1-0 i.e 49-48 = 1 and similarly 50 - 48 = 2 
                                                    Hence iam able to change the character values to the integer values.*/
            {
                count++;
            }
             
        }
        printf("%d times %d is in the following string\n", count, count_check_int); 
    }
    else
    {
        printf("sorry no familiar input found please try later\n");
    }
    

    return 0;
}