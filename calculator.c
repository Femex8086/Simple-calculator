#include<stdio.h>
int main()
{
    float a,b;
    int c;
    float ans;
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter second number:");
    scanf("%f",&b);
    printf("\n\n FUNCTIONS\n 1.addition\n 2.substraction\n 3.division\n 4.multiplication\n\n Enter the function(1-4):");
    scanf("%d",&c);
    switch(c)
    {
        case(1):
        ans=a+b;
        break;
        
        case(2):
        ans=a-b;
        break;
        
        case(3):
        ans=a/b;
        break;
        
        case(4):
        ans=a*b;
        break;
    }
    if(c==1)
    {
        printf("sum = %0.3f",ans);
    }
    else if(c==2)
    {
        printf("difference = %0.3f",ans);
    }
    else if(c==3)
    {
        printf("divition = %0.3f",ans);
    }
    else
    {
        printf("multiplication = %0.3f",ans);
    }
    return 0;
}
