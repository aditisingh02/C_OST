#include<stdio.h>
int main(){
    int rows,columns,sum=0;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of columns: ");
    scanf("%d",&columns);
    int arr[rows][columns];
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The entered matrix is: \n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of all elements in the array is: %d",sum);
}
