//Implement a function to perform matrix multiplication.

#include<stdio.h>

int main(){
    int r1,c1,r2,c2;
    int pro[10][10];
    printf("Matrix 1\n");
    printf("Enter number of rows: ");
    scanf("%d",&r1);
    printf("Enter number of columns: ");
    scanf("%d",&c1);
    int arr1[r1][c1];
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The entered matrix is: \n");
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2\n");
    printf("Enter number of rows: ");
    scanf("%d",&r2);
    printf("Enter number of columns: ");
    scanf("%d",&c2);
    int arr2[r2][c2];
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The entered matrix is: \n");
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    if(c1==r2){
        printf("Matrix multiplication is possible\n");

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<r1;j++)
                {
                pro[i][j]=0;
                for(int k=0;k<c1;k++)
                    {
                        pro[i][j]+=arr1[i][k]*arr2[k][j];
                    }
                }
        }


        //printing product matrix
        for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }
    }

    else
        printf("Matrix multiplication not possible");
    return 0;
}
