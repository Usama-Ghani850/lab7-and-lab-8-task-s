#include <stdio.h>

int main() {
    int a[2][2][2]={{{0,0},{0,0}},{{0,0},{0,0}}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                printf("enter the number of a[%d][%d][%d]",i,j,k);
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                printf("%d ",a[i][j][k]);
                
            }printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}
