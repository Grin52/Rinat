#include <stdio.h>

int main()
{
int a;
int b;

scanf("%d %d", &a, &b);

int n;    // большее число
int m;    // меньшее число
if (a > b){
    n = a;
    m = b;
}    
else if (a < b){
    n = b;
    m = a;
}    
else if (a == b){
    printf ("Error\n");
}
//while (m > 0)
//{
    
//}
printf ("%d %d\n", n, m);

return 0; 

} 
