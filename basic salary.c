#include<stdio.h>
int main(){
int bs,hra,da,allow,pf;
float ts;
char grade;
printf("Enter the basic salary:\n");
scanf("%d",&bs);
printf("Enter the grades");
scanf("%s",&grade);
if(grade=='A')
{
    allow=1700;
   
}
else if(grade=='B')
{
    allow=1500;
}
else
{
    allow=1300;
}
hra=0.5*bs;
da=0.2*bs;
pf=0.11*bs;
    ts=bs+hra+da+allow-pf;
    printf("%f",ts);

return 0;
}
