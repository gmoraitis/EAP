/*ΑΣΚΗΣΗ 3
Να γράψετε πρόγραμμα που να διαβάζει
την πλευρά ενός τετραγώνου και να 
εμφανίζει την περίμετρο και το εμβαδόν του.*/

#include<stdio.h>
int main(void)
{
    float x;

    printf("Dwse thn pleura : ");
    scanf("%f",&x);

    printf("Perimetros tetragonou: %5.2f\n", 4*x); 
    printf("Embadon tetragonou: %5.2f\n", x*x);

}