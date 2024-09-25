//This C program prints the factors of any given natural no.'s
#include<stdio.h>
int main(){
    int i , n;
    printf("Enter any natural no. : ");
    scanf("%d",&n);
    printf("Factors of %d are:\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}   
