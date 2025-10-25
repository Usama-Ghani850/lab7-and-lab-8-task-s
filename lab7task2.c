#include<stdio.h>
int main()

{
int b;
printf("enter the number of values for reverse order ");
scanf("%d",&b);
 int a[b];
  printf("enter the number's  ");
   
 for(int i=0;i<b;i++)
  {
 
  scanf("%d",&a[i]);
 
}

 for(int i=b-1;i>=0;i--)
  {
 
  printf("%d",a[i]);
 
}

return 0;

}