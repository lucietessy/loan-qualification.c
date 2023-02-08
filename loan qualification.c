//loan qualification
#include<stdio.h>
int main()
{
    int age, income;
    printf("enter age and if income");
    scanf("%d%d", &age,&income);
    if(age>=18, income>=21000){printf("congratulation you qualify for loan");}
    else{printf("unfortunately we are unable to offer loan at this time");}
    return 0;
}