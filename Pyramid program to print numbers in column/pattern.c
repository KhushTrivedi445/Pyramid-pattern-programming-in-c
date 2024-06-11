#include<stdio.h>

int main () {
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);

    for(int i=1 ;i<=n;i++){
        for(int k=1; k<=n-i ; k++){             //This loop is for spacing
            printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
            printf("\n");
    }
return 0;
}

/*
output :
Enter the number of rows :5
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 

*/
