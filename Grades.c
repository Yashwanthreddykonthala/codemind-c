#include<stdio.h>
int main()

{
    int Physics,Chemistry,Biology,Mathematics,Computer_science,total_percentage;
    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&Computer_science);
    total_percentage=(Physics+Chemistry+Biology+Mathematics+Computer_science)/5;
    if(total_percentage>=90)
    {
        printf("Grade A");
    }
    else if(total_percentage>=80)
    {
        printf("Grade B");
    }
    else if(total_percentage>=70)
    {
        printf("Grade C");
    }
    else if(total_percentage>=60)
    {
        printf("Grade D");
    }
    else if(total_percentage>=40)
    {
        printf("Grade E");
    }
    else if(total_percentage<40)
    {
        printf("Grade F");
    }
}
