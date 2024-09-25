/* C Program to display 
1
1 2
1 2 3
1 2 3 4
*/
#include <stdio.h>

int main(void) {
  int n,i,j;
  printf("Enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
        printf("%d ",j);
      printf("\n");
    }

  return 0;
}
