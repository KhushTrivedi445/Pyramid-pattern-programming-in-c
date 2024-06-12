#include<stdio.h>

int main () {
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    
    for(int i=1 ;i<=n;i++){
        for(int k=1; k<=n-i ; k++){                       //This loop is for spacing
            printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("* ");
            }
            printf("\n");
    }



 /*
Enter the number of rows :5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 */




    return 0;
}
