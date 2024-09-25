//c programs to display pattern using numbers
#include <stdio.h>

int main(void) {
  int n,i,j,k;
  printf("Enter n: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=i-1;j++)
        printf("  ");
      for(k=n;k>=i;k--)
        printf("%d ",n+1-k);
      printf("\n");
    }
  return 0;
}
