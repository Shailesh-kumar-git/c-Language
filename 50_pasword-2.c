// 20.Write a program to accept username and password and
// verify login (hardcoded values).

#include <stdio.h>

int main()
{
    int pass;
    char us;
    printf("\n <---welcome to logine page--->\n");
    printf(" Now set usereame AND password:-\n");
    printf("--------------------------------\n\n");
    printf("set usearename : ");
    scanf(" %c", &us);
    printf("set password : ");
    scanf(" %d", &pass);

    printf("\n");
    if ((us >= 'a' && us <= 'z') || (us >= 'A' && us <= 'Z'))
    {

        int p;
        char u;
        printf("  WELCOME to LOGINE PAGE\n");
        printf("-------------------------- \n\n");
        printf("enter usearname : ");
        scanf(" %c", &u);
        printf("enter passeword : ");
        scanf(" %d", &p);
        printf("\n");

        if (us == u && pass == p)
        {
            printf("logine success full");
        }
        else
        {
            printf("ERROR");
        }
    }
    else
    {
        printf("wrong usere name");
    }

    return 0;
}