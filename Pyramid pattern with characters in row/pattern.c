#include<stdio.h>

int main () {
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);

    for(int i=1 ;i<=n;i++){
        for(int k=1; k<=n-i ; k++){
            printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("%c ",64+i);
            }
            printf("\n");
    }
return 0;
}

/*
output :
Enter the number of rows :5
    A 
   B B 
  C C C 
 D D D D 
E E E E E 

 */


