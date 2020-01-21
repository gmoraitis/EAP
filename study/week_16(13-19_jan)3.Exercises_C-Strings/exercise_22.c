/*Πρόγραμμα 22 Χαρακτήρες και αλφαριθμητικά */

#include <stdio.h>
int main()
{
    char ch, str[80];

    ch = 'a';
    /* Ένας χαρακτήρας τυπώνεται με το %c */
    printf("o xarakthras einai %c\n", ch);

    ch = '&';
    printf("o xarakthras einai %c\n", ch);

    printf("\n Pos se lene? ");

    /* Η συνάρτηση gets διαβάζει την γραμμή εισόδου
      από το πληκτρολόγιο και την μεταφέρει
      στον πίνακα χαρακτήρων str */
    gets(str);

    /* Ένας πίνακας χαρακτήρων τυπώνεται με το %s */
    printf("Geis soy %s \n", str);
    
    return 0;

}