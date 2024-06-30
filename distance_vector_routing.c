
#include <stdio.h>
int main() {
    int n;
    printf("enter the no of nodes : ");
    scanf("%d ",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ,",&matrix[i][j]);
        }
    }
    int i,j,k;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j]){
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }      
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (matrix[i][j]==999){
                printf("999");
            }
            else{
                printf("%d ",matrix[i][j]);
            }
        }
        printf("\n");
    }
}