#include <stdio.h>
#include <stdlib.h>

typedef struct node /* Κόμβος αποθήκευσης μη μηδενικού στοιχείου του πίνακα */
{
	int row;		   /* Γραμμή του  στοιχείου */
	int column;		   /* Στήλη του στοιχείου */
	float value;	   /* Τιμή του στοιχείου */
	struct node *next; /* Επόμενο στοιχείο */
} node;

typedef struct table /*  Δομή αναπαράστασης πίνακα */
{
	node *head;			   /* Κεφαλή λίστας μη μηδενικών στοιχείων */
	int number_of_rows;	   /* Πλήθος γραμμών */
	int number_of_columns; /* Πλήθος στηλών */
} table;

/* ΕΔΩ ΒΑΛΤΕ ΟΡΙΣΜΟΥΣ ΒΟΗΘΗΤΙΚΩΝ ΣΥΝΑΡΤΗΣΕΩΝ (AN ΚΡΙΝΕΤΕ ΑΠΑΡΑΙΤΗΤΟ ΝΑ ΥΠΑΡΧΟΥΝ ΣΤΟ ΠΡΟΓΡΑΜΜΑ) */

/* Συνάρτηση εισαγωγής στοιχείων σε ένα πίνακα */
void Entertable(table *input)
{
	/* ΒΑΛΤΕ ΕΔΩ ΤΟΝ ΚΩΔΙΚΑ ΣΑΣ */
	float value = 0;
	int row = 0;
	int col = 0;
	int counter = 0;
	int counter_value = 0;
	int flag = 0;
	int pre_row = 0;
	//int new_row = 0;
	int pre_col = 0;
	//int new_col = 0;
	node *temp, *r, *start;
	start = input->head;
	temp = start;

	printf("\nΔώστε πλήθος γραμμών : ");
	scanf("%i", &input->number_of_rows);

	printf("Δώστε πλήθος στηλών : ");
	scanf("%i", &input->number_of_columns);

	counter = input->number_of_columns * input->number_of_rows;

	do
	{

		printf("\nΘα θέλατε να δώσετε στοιχείο; -->   [ NAI:1  OXI:0 ] ");
		scanf("%i", &flag);

		if (flag == 1)
		{

			if (temp == NULL)
			{
				temp = (node *)malloc(sizeof(node));
				temp->value = value;
				temp->row = row;
				temp->column = col;
				temp->next = NULL;
				input->head = temp;
			}
			else
			{
				while (temp->next != NULL)
				{
					temp = temp->next;
				}
				r = (node *)malloc(sizeof(node));
				r->value = value;
				r->row = row;
				r->column = col;
				r->next = NULL;
				temp->next = r;
			}

			do
			{
				printf("Λαθος εισαγωγή"); //Θα το διχνει εαν λειτουργει σωστα ο αμμυντικος προγραμματισμος.Αυτην την στιγμη το διχνει συνεχεια και ειναι λαθος.

				do
				{
					printf("Δώστε την γραμμή του στοιχείου : ");
					scanf("%i", &temp->row);

				} while (temp->row < 0 || temp->row > counter);

				do
				{
					printf("Δώστε την στήλη του στοιχείου: ");
					scanf("%i", &temp->column);

				} while (temp->column < 0 || temp->column > counter);

				pre_row = temp->row;
				pre_col = temp->column;

			} while (temp->row != pre_row || temp->column != pre_col);

			do
			{
				printf("Δώστε το στοιχείο : ");
				scanf("%f", &temp->value);
			} while (temp->value < 0);

			counter_value += 1;
			printf("\nΜετρητες για debugging [ ");
			printf("Σύνολο στοιχείων που μπορουν να εισαγθουν στον πίνακα  : %i  ", counter);
			printf("Στοιχεια που εχουν εισαχθει : %i ]\n", counter_value);
		}

		else
		{
			flag = 0;
			break;
		}

		if (counter == counter_value)
		{
			printf("Ο πίνακας είναι γεμάτος ! \n");
		}

	} while (counter != counter_value);
}

/* Συνάρτηση πολλαπλασιασμού δύο πινάκων */
void Multables(table table1, table table2, table *table3)
{
	/* ΒΑΛΤΕ ΕΔΩ ΤΟΝ ΚΩΔΙΚΑ ΣΑΣ */
	int i, j, k = 0;
	float number = 0;
	node *listA = table1.head;
	node *listB = table2.head;
	node *listC = table3->head;
	table3->number_of_rows = table1.number_of_rows;
	table3->number_of_columns = table2.number_of_columns;
	table3->head = NULL;

	if (table1.number_of_columns != table2.number_of_rows)
	{
		printf("Ο πολλαπλασιασμός δεν είναι εφικτός!!!\n");
		return;
	}

	for (i = 0; i < table3->number_of_rows; i++)
	{
		number = 0;

		for (j = 0; j < table3->number_of_columns; j++)
		{
			listB = table2.head;
			for (k = 0; k < table3->number_of_rows; k++)
			{
				printf("Λιστα A : %f ", listA->value);
				printf("Λιστα B : %f ", listB->value);

				//    if (listA->row == i && listA->column == k && listB->row == k)
				//     {
				number += listA->value * listB->value;
				printf(" Αποτέλεσμα : %f \n", number);

				// }

				listB = listB->next;
			}

			// if (number != 0)
			// {
			//     kataxorish sthn lista C !
			// }
			listA = listA->next;
		}
	}
}

void print(table input) /* Εμφάνιση των μη μηδενικών στοιχείων του πίνακα */
{
	node *p;
	if (input.head == NULL)
		printf("O πίνακας έχει μόνο μηδενικά στοιχεία.\n");
	else
	{
		printf("Tα μη μηδενικά στοιχεία του πίνακα είναι τα εξής: \n");
		for (p = input.head; p != NULL; p = p->next)
			printf("(γραμμή:%d στήλη:%d τιμή:%.2f) \n", p->row, p->column, p->value);
	}
	printf("\n");
}

/* Κυρίως πρόγραμμα ελέγχου των συναρτήσεων ανάγνωσης και πολλαπλασιασμού πινάκων */
int main()
{
	table table1, table2, result;
	system("chcp 1253>nul"); /* Εισαγωγή Ελληνικών χαρακτήρων */

	printf("Διαβασμα πρωτου πινακα\n");
	Entertable(&table1); /* Διάβασμα πρώτου πίνακα για πολλαπλασιασμό*/
	printf("Περιεχόμενα πρώτου πίνακα:\n");
	print(table1);

	printf("Διάβασμα δεύτερου πίνακα:\n");
	Entertable(&table2); /* Διάβασμα δεύτερου πίνακα για πολλαπλασιασμό*/
	printf("Περιεχόμενα δεύτερου πίνακα:\n");
	print(table2);

	result.head = NULL;									  /* Πριν την κλήση ο πίνακας result αρχικοποιείται ως άδειος */
	result.number_of_rows = result.number_of_columns = 0; /* ο result θα αλλάξει στην Multables μόνο αν είναι επιτρεπτός ο πολλαπλασιασμός */
	printf("Πολλαπλασιασμός των δύο πινάκων:\n");
	Multables(table1, table2, &result); /* Πολλαπλασιασμός δύο πινάκων */

	if (result.number_of_rows != 0) /* Oι πίνακες table1 και table2 μπορούν να πολλαπλασιαστούν */
	{
		printf("Αποτέλεσμα πολλαπλασιασμού των δύο πινάκων:\n");
		print(result);
	}
	system("pause");
	return 0;
}

