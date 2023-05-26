#include <stdio.h>

<<<<<<< HEAD
void PrintResult(int res)
{
printf("Result: %d\n", res);
}

=======
>>>>>>> branch1
int Calculation(int a, int b)
{
if(a > b)
return a - b;
else
return b - a;
}

int main()
{
int a = 3;
int b = 8;
int c;

if(a > b)

c = Calculation(a,b);

<<<<<<< HEAD
PrintResult(c);
=======
printf("Result: %d\n", c);
>>>>>>> branch1
return 0;
}

