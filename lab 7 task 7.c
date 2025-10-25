#include<stdio.h>
int main(){
	  int a[]={1,2,3,4,0};
	  int b;
	  printf("which numeber did you want to find");
	  scanf("%d",&b);
	int i;
	for( i=0;i<5;i++){
		if(a[i]==b){
		    printf("the number is on the index %d",i);
		    break;
		}else if(i==4) {
		    printf("-1");
		}
		
	}
	
	
	
	return 0;
}
