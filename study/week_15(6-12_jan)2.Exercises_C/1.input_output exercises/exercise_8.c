/*ΑΣΚΗΣΗ 8
Να γράψετε πρόγραμμα που να διαβάζει
δύο αριθμούς Α και Β, στη συνέχεια
να αντιμεταθέτει τις τιμές τους και, 
τέλος, να τους εμφανίζει.*/

#include<stdio.h>
int main(void)
{
    int a,b,temp;

    printf("\n");
    printf("Dwse ton prvto arithmo : ");
    scanf("%d",&a);

    printf("Dwse ton deytero arithmo : ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("Twra o a einai :  %d kai o b einai : %d\n",a,b);
    printf("\n");
}
