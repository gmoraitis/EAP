/*ΑΣΚΗΣΗ 2
Να γράψετε πρόγραμμα που να διαβάζει
 τη βάση και το ύψος ενός τριγώνου 
 και να εμφανίζει το εμβαδόν του.*/

#include<stdio.h>
int main(void)
{
    float  x,y;

    printf("Dwse thn vasi: ");
    scanf("%f",&x);

    printf("Dwse to ypsos: ");
    scanf("%f",&y);

    printf("Emvadon trigwnou: %5.2f\n",x*y/2);
}