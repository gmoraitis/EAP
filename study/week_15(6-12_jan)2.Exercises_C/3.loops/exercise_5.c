/*ΑΣΚΗΣΗ 5
Να γράψετε πρόγραμμα που να υπολογίζει το γινόμενο όλων των περιττών αριθμών από το 1 έως το 20.*/

#include <stdio.h>
int main(void)
{
    int i;
    long gin;
    gin = 1;
    for (i = 1; i <= 20; i++)
        if (i % 2)
            gin = gin * i;
    printf("Ginomeno: %ld\n", gin);
}