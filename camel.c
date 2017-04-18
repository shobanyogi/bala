#include<stdio.h>

#include<string.h>

int main()
{
    
char a[20];
    
int b,i;
    
printf("Enter the string");
   
 scanf("%s",a);
    
b=strlen(a);
    
for(i=0;i<b;i++)
    
{
        
if(i==0)
       
 {
           
 printf("%s",a[i]-32);
       
 }
        
else
       
 {
           
 printf("%s",a[i]);
       
 }
   
 }

return 0;
}
