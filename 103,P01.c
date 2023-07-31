
//Time different of 2 city!

#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,H,M,d;
    printf("Enter the 1st city");
    scanf("%d%d",&h1,&m1);
    printf("Enter the 2nd city");
    scanf("%d%d",&h2,&m2);
    d=(h1*60+m1)-(h2*60+m2);
    H=d/60;
    M=d%60;
    printf("The  different %d hour %d minit",H,M);





    return 0;
}
