#include<stdio.h>
int main(){
	  int a[3][3]={{1,2,3},{4,5,6},{3,1,-1}};
	  int count=0;
	  for(int i=0;i<3;i++){
		int min=a[i][0];
		int b=0,c=0; 
		for(int j=0;j<3;j++)
		{
			if(min>a[i][j]){
				min=a[i][j];
				b=j;
				
			}
			

	  }
	  int max=a[0][b]; 
			for(int k=0;k<3;k++){
			if(max<a[k][b]){
				max=a[k][b];
				c=k;
				
			}

		}
		if(max==min){
			
			printf("saddle point is at a[%d][%d] = %d\n",c,b,a[c][b]);
			count=1;
			
		}
		 

	  }
	  
	if(!count){
		printf("no saddle point found");
	}
	return 0;
}
