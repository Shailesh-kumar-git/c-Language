// WAP to accept salery and cradit score and determine lone elageblity.

#include <stdio.h>

int main() {
    int s,c;
    printf("enter salery = ");
    scanf("%d",&s);
    printf("enter credit score = ");
    scanf("%d",&c);
    if(s>=50000  &&  c>=700){
        printf("elegable for lone\n");
        printf("EXCELENT credit score\n");
    }
    else if(( s>=25000 && s<500000 ) && (c>=400 && c<700))
    {
        printf("eligeble fore lone\n");
        printf("GOOD credit score\n");
    } 
    else {
        printf("you are not eligeble for lone\n");
    }
    return 0;
}