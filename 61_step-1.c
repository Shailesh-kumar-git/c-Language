// 15.Determine the grade based on marks.
// Marks (90-100) A grade
// Marks (75-89) B grade
// Marks (50-74) C grade
// Marks ( < 50) F grade

#include<stdio.h>

int main(){
    int m;
    char grade;
    printf("enter marks : ");
    scanf("%d",&m);
    if(m>=90 && m<=100){
        grade='A';
        printf("%c",grade);
    }
    if(m>=75 && m<90){
        grade='B';
        printf("%c",grade);
    }
    if(m>=50 && m<=75){
        grade='C';
        printf("%c",grade);
    }
    else{
        grade='F';
        printf("%c",grade);
    }

    return 0;
}