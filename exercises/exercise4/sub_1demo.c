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
	int size,		/* η μεγαλύτερη σε αριθμό σειρά του τριγώνου του Πασκάλ  */
		x,			/* αναζήτηση συντελεστή */
		rowX,		/* 1 ή 0, ανάλογα με το αν βρέθηκε ο συντελεστής */
		start, end, /* όρια για τις σειρές του τριγώνου του Πασκάλ */
		i, j,
		epip;								  /* προσδιορίζει το επίπεδο πυραμίδας του Πασκάλ */
	int ptPin[N][N], /* Τρίγωνο του Πασκάλ */ /*------>>>  n+1;*/
		xPin[N],							  /* Αποθήκευση γραμμών συγκεκριμένων συντελεστών */
		ptPyr[N][N];						  /* Συγκεκριμένο επίπεδο πυραμίδας Πασκάλ */

	system("chcp 1253>nul"); /* Εισαγωγή Ελληνικών χαρακτήρων */

	/* 1. εδώ θα βάλετε τις εντολές για να εισάγετε το μέγιστο αριθμό σειράς (size) του τριγώνου του Πασκάλ */
	printf("Εισάγεται μέγιστο αριθμό σειράς τριγώνου Πασκάλ ( <= 10) : ");
	scanf("%d", &size);

	/* 2. κλήση της συνάρτησης createPascalsTriangle() */
	createPascalsTriangle(ptPin[N][N], size);

	/* 3. κλήση της συνάρτησης printPascalsTriangle() ώστε να εμφανιστούν όλες οι σειρές του τριγώνου  */

	/* 4. εδώ θα βάλετε τις εντολές για να εισάγετε τον συντελεστή που αναζητείται (x)  */

	/* 5 .κλήση της συνάρτησης searchingCoefficient()  */

	/* 6. εμφάνιση αποτελεσμάτων αναζήτησης του συντελεστή (rowX)  */

	/* 7. εδώ θα βάλετε τις εντολές για να εισάγετε τα όρια των σειρών του τριγώνου του Πασκάλ
	      που θα εμφανίσετε  (start , end) */

	/* 8. κλήση της συνάρτησης printPascalsTriangle() ώστε να εμφανιστούν οι συγκεκριμένες σειρές */
	/*    του τριγώνου του Πασκάλ που ζητήθηκαν */

	/* 9.  εδώ θα βάλετε τις εντολές για να εισάγετε το επίπεδο της πυραμίδας του Πασκάλ */
	/*     που θα δημιουργήσετε και θα εμφανίσετε   (epip)   */

	/* 10. κλήση της συνάρτησης createPascalsPyramid()   */

	system("pause");
	return 0;
}

/* Δημιουργία τριγώνου Πασκάλ */
void createPascalsTriangle(int pin[][N], int maxrow)
{
	int row, col;

	/* εδώ θα βάλετε τις εντολές για την δημιουργία της συνάρτησης */
}

/* Εκτύπωση τριγώνου Πασκάλ */
void printPascalsTriangle(int pin[][N], int arxi, int telos)
{
	int row, col;

	/* εδώ θα βάλετε τις εντολές για την δημιουργία της συνάρτησης */
}

/* Ψάξιμο τριγώνου Πασκάλ για εντοπισμό συντελεστή */
int searchingCoefficient(int pin[][N], int maxrow, int coef, int pinFound[])
{
	int row, col;

	/*  εδώ θα βάλετε τις εντολές για την δημιουργία της συνάρτησης */
}

/*Δημιουργία επιπέδου πυραμίδας Πασκάλ*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer)
{
	int row, col;

	/* εδώ θα βάλετε τις εντολές για την δημιουργία της συνάρτησης   */
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
demo to print triangle with selected rows with 2d array in c


#include<stdio.h>
int
main (void)
{
  int n, i, j;

  printf ("Enter the number of rows: ");
  scanf ("%d", &n);

  int pascal[n][n];
  for (i = 0; i < n; ++i)
    {
      for (int j = 0; j <= i; ++j)
	{
	  if (j == 0 || j == i)
	    pascal[i][j] = 1;
	  else
	    pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];

	  printf ("%d ", pascal[i][j]);
	}

      printf ("\n");
    }

  return 0;
}





###Second solution

C array: Pascal triangle exercise
By using two-dimensional array, write C program to display 
a table that represents a Pascal triangle of any size. 
In Pascal triangle, the first and the second rows are set to 1. 
Each element of the triangle (from the third row downward) is 
the sum of the element directly above it and the element to the 
left of the element directly above it. See the example Pascal triangle(size=5) below:

Solution: 
#include <stdio.h>
#include <conio.h>
void printPascalTr(int size);
int main()
{

	int size;
	printf("Enter Pascal triangle size:");
	scanf("%d", &size);
	printPascalTr(size);
	getch();
	return 0;
}

void printPascalTr(int size)
{
	int PascalTr[size][size];
	int row, col;
	//assign zero to every array element
	for (row = 0; row < size; row++)
		for (col = 0; col < size; col++)
			PascalTr[row][col] = 0;
	//first and second rows are set to 1s
	PascalTr[0][0] = 1;
	PascalTr[1][0] = 1;
	PascalTr[1][1] = 1;

	for (row = 2; row < size; row++)
	{
		PascalTr[row][0] = 1;
		for (col = 1; col <= row; col++)
		{
			PascalTr[row][col] = PascalTr[row - 1][col - 1] + PascalTr[row - 1][col];
		}
	}
	//display the Pascal Triangle
	for (row = 0; row < size; row++)
	{
		for (col = 0; col <= row; col++)
		{
			printf("%d\t", PascalTr[row][col]);
		}
		printf("\n");
	}
} 





// C program for Pascal’s Triangle 
// A O(n^2) time and O(n^2) extra space  
// method for Pascal's Triangle 
void printPascal(int n) 
{ 
// An auxiliary array to store  
// generated pscal triangle values 
int arr[n][n];  
  
// Iterate through every line and print integer(s) in it 
for (int line = 0; line < n; line++) 
{ 
    // Every line has number of integers  
    // equal to line number 
    for (int i = 0; i <= line; i++) 
    { 
    // First and last values in every row are 1 
    if (line == i || i == 0) 
        arr[line][i] = 1; 
    // Other values are sum of values just  
    // above and left of above 
    else 
        arr[line][i] = arr[line-1][i-1] + arr[line-1][i]; 
    printf("%d ", arr[line][i]); 
    } 
    printf("\n"); 
} 
} 
// Driver code 
int main() 
{ 
int n = 5; 
    printPascal(n); 
    return 0; 
} 
*/
