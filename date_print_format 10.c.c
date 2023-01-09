#include<stdio.h>
int main()
{
    int dd,mm,yyyy;
    printf("Enter date\n Format \"DD/MM/YYYY\"\n");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);

    printf("Date\n %d-%d-%d",dd,mm,yyyy);

    return 0;
}
