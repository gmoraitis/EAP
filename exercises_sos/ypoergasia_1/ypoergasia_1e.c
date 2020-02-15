#include <stdio.h>
#define n 3

int absolute(int x) 
{ 
    if (x > 0) 
      return x; 
    else
      return -x; 
} 


int main()
{

    int pin_a[n];
    int pin_b[n];
    int pin_c[n];
    int i;

    printf("Δωστε τα στοιχεια του πινακα Α. \n");
    for (i = 0; i <= n-1; i++)
    {
        printf("Δωστε τo %d στοιχειo ...  \n", i+1);
        scanf("%i", &pin_a[i]);
    }

    printf("Δωστε τα στοιχεια του πινακα B. \n");
    for (i = 0; i <= n-1; i++)
    {
        printf("Δωστε τo %d στοιχειo ...  \n", i+1);
        scanf("%i", &pin_b[i]);
    }

    for (i = 0; i <= n-1; i++)
    {
        if (absolute(pin_a[i]) >= absolute(pin_b[i]))
        {
            pin_c[i] = pin_b[i];
        }
        else
            (pin_c[i] = pin_a[i]);
    }

    printf("\nΣτοιχεια Πινακα C\n");
    for (i = 0; i <= n-1; i++)
    {
        printf("%i\n",pin_c[i]);
    }

    return 0;
}




///(pin_a[i] >= pin_b[i])
//5,1,3
//6,-2,7
//5,1,3
