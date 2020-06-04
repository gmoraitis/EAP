/* - BY reference shows to the adress of that variable 
and if we change it  in the function it will change and outside */

#include <stdio.h>
int k, l;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
main()
{
    k = 10;
    l = 20;
    swap(&k, &l);
    printf("%d,%d\n", k, l);
}

/// #include <stdio.h>
// int i, x;

// void Double(int *a)
// {

//     *a = 2 * (*a);
// };
// int main()
// {

//     printf("Dwse arithmo gia diplasiasmo : ");
//     scanf("%d", &x);
//     i = x;

//     Double(&x);
//     printf("O diplasiasmos tou %d pou dwsate einai %d :", i, x);
// }





/// #include <stdio.h>
// void absolute(int *a) /* Η παράμετρος ορίζεται ως δείκτης */
// {
//     if (*a < 0)
//     {
//         *a = -(*a);
//     }
// }
// main()
// {
//     int b = -5;
//     printf("Value of b before invoking absolute is: %d\n", b);
//     absolute(&b); /* κλήση με αναφορά */
//     printf("Value of b after invoking absolute is:%d\n", b);
// }