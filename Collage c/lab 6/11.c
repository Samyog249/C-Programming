#include <stdio.h>

int main(){
    int A[3][3],i,j,choice;
    int evensum, diagsum;
    printf("Enter 3x3 matrix:\n");
    for ( i = 0; i < 3; i++){ 
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    do
    {
       printf("\n--- MENU---\n");
       printf("1. Print Matrix\n");
       printf("2. Sum of Even Elements\n");
       printf("3. Sum of Diagonal Elements\n");
       printf("4. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
       switch (choice)
       {
       case 1:
        printf("Matrix:\n");
        for ( i = 0; i < 3; i++)
        {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
        }
        break;
       case 2:
       evensum = 0;
       for ( i = 0; i < 3; i++)
       {
        for ( j = 0; j < 3; j++)
        {
            if (A[i][j] % 2==0)
            evensum +=A[i][j]; 
        }
       }
       printf("Sum of even elements = %d\n",evensum);
       break;
       case 3:
       diagsum = 0;
       for ( i = 0; i < 3; i++)
       {
        diagsum += A[i][i];
       }
       printf("Sum of diagonal elements =%d\n",diagsum);
       break;
       case 4:
       printf("Exiting program.....\n");
       break;
       default:
       printf("Invalid choice!\n");
        break;
       }
    } while (choice !=4);
    return 0;
}