#include <stdio.h>

int main()
{
int a;
int b;
 
scanf("%d %d", &a, &b);

int n = a > b ? a : b;    // большее число
int m = a < b ? b : a;    // меньшее число

while (m > 0)
{
    n = n % m;
    m = m % n;
}
printf ("%d\n", n);
  

return 0;
}