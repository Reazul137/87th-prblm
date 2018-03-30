#include<stdio.h>
int main()
{
    int age;

    printf("Input the age of the candidate : ");
    scanf("%d",&age);

    if(age<18)
    {
        printf("Sorry, You are not eligible to caste your vote.\n");
        printf("You would be able to caste your vote after %d year.\n",18-age);
    }
    else
        printf("Congratulation! You are eligible for casting your vote.\n");

    return 0;
}
