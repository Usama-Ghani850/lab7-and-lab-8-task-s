#include<stdio.h>
int main(){
	  int a[]={1,2,3,4,0};
	  int b[]={1,2,3,4,5};
	int c[10];
	int k=5;
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			if(i==0){
				c[j]=a[j]; 
			}else {
				c[k]=b[j];
				k++;
			}
			
		}
	}
	for(int i=0;i<10;i++){
		printf("%d",c[i]);
	}
	
	
	
	return 0;
}
