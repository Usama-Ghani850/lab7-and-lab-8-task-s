#include<stdio.h>
int main()

{int nu=0;
  printf("enter the number of elements you want to sum ");
   scanf("%d",&nu);
int a[nu];
int sum=0;
printf("enter the values for sum ");
 for(int i=0;i<nu;i++)
  {
 
  scanf("%d",&a[i]);
  sum=sum+a[i];
}
printf("the sum is = %d",sum);
return 0;

} 