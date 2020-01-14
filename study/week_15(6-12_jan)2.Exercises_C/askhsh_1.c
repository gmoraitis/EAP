/*ΑΣΚΗΣΗ 1
Να γράψετε πρόγραμμα που να διαβάζει 
τη βάση και το ύψος ενός ορθογωνίου 
και να εμφανίζει το εμβαδόν του.*/

#include<stdio.h>
int main(void)
{
    float x;
    float y;

    printf("Dwse thn vasi: ");
    scanf("%f",&x);
    printf("Dwse to ypsos: ");
    scanf("%f",&y);

    printf("Emvadon orthogwniou: %5.2f\n", x*y);
}