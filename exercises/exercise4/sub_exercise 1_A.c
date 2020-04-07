/* test 1 */
#include <stdio.h>
#include <stdlib.h>
#define N 11

/* Δημιουργία τριγώνου Πασκάλ */
void createPascalsTriangle(int pin[][N], int maxrow);

/* Εκτύπωση τριγώνου Πασκάλ */
void printPascalsTriangle(int pin[][N], int arxi, int telos);

/* Ψάξιμο τριγώνου Πασκάλ για εντοπισμό συντελεστή */
int searchingCoefficient(int pin[][N], int maxrow, int coef, int pinFound[]);

/*Δημιουργία επιπέδου πυραμίδας Πασκάλ*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer);

/* Κυρίως πρόγραμμα */
int main()
{
    int size = 0,         /* η μεγαλύτερη σε αριθμό σειρά του τριγώνου του Πασκάλ  */
        x,                /* αναζήτηση συντελεστή */
        //rowX,		      /* 1 ή 0, ανάλογα με το αν βρέθηκε ο συντελεστής */
        start =0, end=0,  /* όρια για τις σειρές του τριγώνου του Πασκάλ */
        //i, j,
        epip;			  /* προσδιορίζει το επίπεδο πυραμίδας του Πασκάλ */
    int ptPin[N][N],      /* Τρίγωνο του Πασκάλ */ /*------>>>  n+1;*/
        xPin[N],          /* Αποθήκευση γραμμών συγκεκριμένων συντελεστών */
        ptPyr[N][N];	  /* Συγκεκριμένο επίπεδο πυραμίδας Πασκάλ */

    system("chcp 1253>nul"); /* Εισαγωγή Ελληνικών χαρακτήρων */

    /* 1. Εντολές για να την εισάγωγη του μέγιστου αριθμού σειράς (size) του τριγώνου του Πασκάλ */
    do{   
        printf("Εισάγεται μέγιστο αριθμό σειράς τριγώνου Πασκάλ ( <= 10) : ");
        scanf("%d", &size );

        }while(size >= 11 || size < 1);
    
    
    /* 2. κλήση της συνάρτησης createPascalsTriangle() */
    createPascalsTriangle(ptPin, size + 1 );

    
    /* 3. κλήση της συνάρτησης printPascalsTriangle() ώστε να εμφανιστούν όλες οι σειρές του τριγώνου  */
    printPascalsTriangle(ptPin, start = 0, end = size + 1 );  
    

    /* 4. Εντολές για την εισάγωγή του συντελεστή που αναζητείται (x)  */
    printf("Ψάξε για συντελεστή : ");
    scanf("%d", &x);


    /* 5 .κλήση της συνάρτησης searchingCoefficient()  */
    searchingCoefficient(ptPin, size + 1, x, xPin);


	/* 6. εμφάνιση αποτελεσμάτων αναζήτησης του συντελεστή (rowX)  *////////////////////
    printf("%d \n",x);


	/* 7. Εντολές για την εισάγωγη των όριων των σειρών του τριγώνου του Πασκάλ. (start , end) */

    printf("Όρισε εύρος γραμμών  \n");

    //start
     do{   
        printf("Εισήγαγε γραμμή αρχής εύρους (0 <= αρχή <= 10) : ");
        scanf("%d", &start );
        }while(start >= 11 || start < 1);

    //end
    do{   
        printf("Εισήγαγε γραμμή τέλους εύρους (%d <= τέλος <= 10) : " , start);
        scanf("%d", &end );
        }while(end >= 11 || end < start);


	/* 8. κλήση της συνάρτησης printPascalsTriangle() ώστε να εμφανιστούν οι συγκεκριμένες σειρές */
	/*    του τριγώνου του Πασκάλ */
    printPascalsTriangle(ptPin, start, end + 1 );


	/* 9.  Εντολές για την εισάγωγη του επιπέδου της πυραμίδας του Πασκάλ  (epip)   */
    do{   
        printf("Όρισε επίπεδο πυραμίδας Πασκάλ  (0 <= επίπεδο <= 10) : ");
        scanf("%d", &epip );
        }while(epip >= 11 || epip < 1);


	/* 10. κλήση της συνάρτησης createPascalsPyramid()   */
    createPascalsPyramid(ptPin, size, ptPyr, epip );

    system("pause");
    return 0;
}


/* Δημιουργία τριγώνου Πασκάλ */
void createPascalsTriangle(int pin[][N], int maxrow)
{
    int row, col;

    
    for (row = 0; row < maxrow; row++)
    {
        for (col = 0; col <= row; col++)
        {
            if (row == col || col == 0)
                pin[row][col] = 1;
            else
                pin[row][col] = pin[row - 1][col - 1] + pin[row - 1][col];
        }
    }
}


/* Εκτύπωση τριγώνου Πασκάλ */
void printPascalsTriangle(int pin[][N], int arxi, int telos)
{
    int row, col;
   
    for (row = arxi; row < telos; row++)
    {
        for (col = 0; col < row + 1; col++)
        {
            printf("%d\t", pin[row][col]);
        }
        printf("\n");
    }
}


/* Ψάξιμο τριγώνου Πασκάλ για εντοπισμό συντελεστή */
int searchingCoefficient(int pin[][N], int maxrow, int coef, int pinFound[])
{
    int row, col;
    //int x = 0;

    /*  */////////// rowX return 1,0??
    printf("Ο συντελεστής %d βρέθηκε στην γραμμή (-ές) : ", coef);

    for (row = 0; row < maxrow; row++)
    {

        for (col = 0; col < row + 1; col++)
        {

            if (pin[row][col] == coef && pinFound[row] != row)
            { 
                pinFound[row] = row;
                printf("%d ", pinFound[row]);
                return 1;
            }
            
            
        }
    }
    printf("\n");
    return 0;
}


/*Δημιουργία επιπέδου πυραμίδας Πασκάλ*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer)
{
	int row, col;

	
     for (row = 0; row < maxrow; row++)
    {
        for (col = 0; col <= row; col++)
        {
            if (row == col || col == 0)
                pin[row][col] = 1;
            else
                pin[row][col] = pin[row - 1][col - 1] + pin[row - 1][col];           
        }   
    }

    for( int i = 0; i <= layer; i++)
    {
        for( int j = 0; j <= i; j++)
        {
            pin2[layer][i] = pin[i][j] * pin[layer][i];
            printf("%d\t", pin2[layer][i]);
        }
        printf("\n");               
    }
                
    
}

