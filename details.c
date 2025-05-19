#include<stdio.h>
int main()
{
char s[20];
int a;
printf("enter your name\n");
fgets(s,sizeof(s),stdin);
printf("enter your marks\n");
scanf("%d",&a);
printf("%d\n",a);
printf("%s\n",s);
return 0;
}
