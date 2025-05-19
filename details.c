#include<stdio.h>
int main()
{
char s[20];
int a;
printf("enter your name");
fgets(s,sizeof(s),stdin);
printf("enter your marks");
scanf("%d",&a);
printf("%d",a);
printf("%s",s);
return 0;
}
