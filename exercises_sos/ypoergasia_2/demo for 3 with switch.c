#include <stdio.h>
#include <math.h>
#define g 0.0001

int i;
int y = 0;
int temp = 0; //temporaly for word output convertion.
double temp_div = 0; //temporaly for the division of (x - x_old) 
double temp_apol = 0; //temporaly for the output of abs().
double temp_apol_sf = 0;
double result_apol_sf = 0;
double x = 0;
double x_old = 0;

int main()

{
    do
    {
        printf("\nΔωσε τιμη ( <= 0 για εξοδο) : ");
        scanf("%d", &y);
        

        if ((y > 0) && (y < 1000))
        {
            temp = y;
            printf("Οι διαδοχικές προσεγγίσεις για την εύρεση της τετραγωνικής ρίζας του ");

            //switch cases
            switch (temp / 100)
            {
            case 9:
                printf("εννιακόσια ");
                break;
            case 8:
                printf("οκτακόσια ");
                break;
            case 7:
                printf("επτακόσια ");
                break;
            case 6:
                printf("εξακόσια ");
                break;
            case 5:
                printf("πεντακόσια ");
                break;
            case 4:
                printf("τετρακόσια ");
                break;
            case 3:
                printf("τριακόσια ");
                break;
            case 2:
                printf("διακόσια ");
            }
            if (temp == 100) /* Αν num = 100, χωρίς ν στο τέλος */
                printf("εκατό ");
            else if (temp / 100 == 1) /* Αν num > 100, με ν στο τέλος */
                printf("εκατόν ");

            temp %= 100; /* δεκάδες*/

            switch (temp / 10)
            {

            case 9:
                printf("ενενήντα ");
                break;
            case 8:
                printf("ογδόντα ");
                break;
            case 7:
                printf("εβδομήντα ");
                break;
            case 6:
                printf("εξήντα ");
                break;
            case 5:
                printf("πενήντα ");
                break;
            case 4:
                printf("σαράντα ");
                break;
            case 3:
                printf("τριάντα ");
                break;
            case 2:
                printf("είκοσι ");
                break;

            case 1:
                printf("δέκα ");
                break;
            }

            // if (y == 11)
            //     printf("enetka ");
            // else if (y == 12)
            //     printf("dwdeka ");

            temp %= 10; /* μονάδες*/

            switch (temp / 1)
            {

            case 9:
                printf("εννιά ");
                break;
            case 8:
                printf("οκτώ ");
                break;
            case 7:
                printf("επτά ");
                break;
            case 6:
                printf("έξι ");
                break;
            case 5:
                printf("πέντε ");
                break;
            case 4:
                printf("τέσσερα ");
                break;
            case 3:
                printf("τρία ");
                break;
            case 2:
                printf("δύο ");
                break;
            case 1:
                printf("ένα ");
                break;
            } //end of switch


            //main program
            x_old = y; 

            do
            {
                x = ( x_old + (y / x_old) ) / 2 ;
                temp_div = x_old - x;
                printf("\n%f με απολυτο σφαλμα : %f", x,temp_div);
                //printf("\n%f debug --> temp_div  :", temp_div);//debug
                temp_apol = fabs(temp_div);
                //printf("\n%f debug --> temp_apol  :", temp_apol);//debug
                x_old = x;//h prohgoymenh proseggisi x

            } while (temp_apol > g);
            printf("\nΗ τελική προσέγγιση είναι : %f",x);
        }
        else{
            printf("\nΈξοδος λόγω μη θετικής τιμής\n");
        } //end of if

        

    } while ((y > 0) && (y < 1000));

    return 0;
}
