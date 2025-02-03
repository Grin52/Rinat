#include <stdio.h>

int main()
{
int a;
int b;
if (scanf("%d %d", &a, &b) != 2) {
    printf("Input error.");
    return 0;
}    

int n = a > b ? a : b;    // большее число
int m = a < b ? a : b;    // меньшее число
int x;

while (m > 0 ){
    x = n % m;
    n = m;
    m = x;
}    
printf ("%d\n", n);

return 0; 
} 