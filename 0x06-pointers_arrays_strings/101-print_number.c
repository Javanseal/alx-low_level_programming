#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
  /*
   * write your line of code here...
   * Remember:
   *You can only use _putchar function to print
   *You are not allowed to use long
   *You are not allowed to use arrays or pointers
   *You are not allowed to hard-code special values
   */
p[5] = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
