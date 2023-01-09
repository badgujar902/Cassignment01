#include<stdio.h>
int main()
{
    int HH,MM;
    printf("Enter Time \n Format : \"HH:MM\"\n");
    scanf("%d:%d",&HH,&MM);

    printf("%d Hour and %d Minutes",HH,MM);

    return 0;
}
