#include <stdio.h>

int main() {
   
   int b=0,c=0;
   

    do
    {
        printf("which type of matrix did you want to transpose enter\n 1)2*2\n2)3*3\n3)4*4\n");
        scanf("%d",&b);
        if(b!=1 && b!=2 && b!=3){

            printf("Selection out of range!\nPlease Re- Enter ");
        }
    } while (b!=1 && b!=2 && b!=3);
    
   

   int a[b][b];
     printf("enter the number's of matrix");
   for(int i=0;i<b;i++){
    for(int j=0;j<b;j++){
        printf("a[%d][%d]",i,j);        
        scanf("%d",&a[i][j]);
    }
   }
      for(int i=0;i<b;i++){
    for(int j=0;j<b;j++){
        printf("%d ",a[j][i]);
       
    }printf("\n");
   }
    return 0;
}