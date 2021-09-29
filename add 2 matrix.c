#include<stdio.h> // include stdio.h


int main()
{
    int ROW,COL ,i, j;
    printf("Enter the rows and col :");
    scanf("%d %d",&ROW,&COL);
    int arr1[ROW],arr2[COL];

    printf("Enter first matrix: \n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &arr1[i][j]);
        }        
    }

    printf("\nEnter second matrix: \n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {         
            scanf("%d", &arr2[i][j]);
        }                
    }

    printf("\narr1 + arr2 = \n");

    // add two matrices
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%5d ", arr1[i][j] + arr2[i][j]);            
        }        
        printf("\n");
    }       

    // signal to operating system everything works fine
    return 0;
}
