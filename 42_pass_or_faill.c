//  11.Write a program to accept percentage from user and check student pass or fail.


#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5,total;
    printf("marks of subject 1 : ");
    scanf("%d",&s1);
    printf("marks of subject 2 : ");
    scanf("%d",&s2);
    printf("marks of subject 3 : ");
    scanf("%d",&s3);
    printf("marks of subject 4 : ");
    scanf("%d",&s4);
    printf("marks of subject 5 : ");
    scanf("%d",&s5);

    total=(s1+s2+s3+s4+s5)/5;
    printf("percentage of student : %d%% \n",total);
    if(total>=35){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
    return 0;
}