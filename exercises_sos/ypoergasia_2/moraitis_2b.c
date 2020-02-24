#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	int a, b, c, digit1, digit2, d, e, f;
	unsigned long result = 1;

	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));

	while (true)
	{
		printf("Δώστε τον 1ο διψήφιο αριθμό : ");
		scanf("%d", &a);
		if ((a >= 10) && (a <= 99))
		{

			digit1 = a % 10;
			digit2 = a / 10;
			d = digit1 * 10 + digit2;
			break;
		};
	}

	while (true)
	{
		printf("Δώστε τον 2ο διψήφιο αριθμό : ");
		scanf("%d", &b);
		if ((b >= 10) && (b <= 99))
		{

			digit1 = b % 10;
			digit2 = b / 10;
			e = digit1 * 10 + digit2;
			break;
		};
	}

	while (true)
	{
		printf("Δώστε τον 3ο διψήφιο αριθμό : ");
		scanf("%d", &c);
		if ((c >= 10) && (c <= 99))
		{

			digit1 = c % 10;
			digit2 = c / 10;
			f = digit1 * 10 + digit2;
			break;
		};
	}

	/* Εισαγώγη δεδομενων στους κομβους */
	head->data = d; 
	head->next = second;

	second->data = e;
	second->next = third;

	third->data = f; 
	third->next = NULL;

	/* Εκτυπωση */
	for (head = head; head; head = head->next)
	{
		printf("Κόμβος  : %d\n", head->data);
		result *= head->data;
	}

	printf("Γινόμενο κόμβων : %lu\n", result);
	return 0;
};





