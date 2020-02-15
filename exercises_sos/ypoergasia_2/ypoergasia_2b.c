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
		printf("Dose ton 1o dipsifio arithmo : ");
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
		printf("Dose ton 2o dipsifio arithmo : ");
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
		printf("Dose ton 3o dipsifio arithmo : ");
		scanf("%d", &c);
		if ((c >= 10) && (c <= 99))
		{

			digit1 = c % 10;
			digit2 = c / 10;
			f = digit1 * 10 + digit2;
			break;
		};
	}


	head->data = d; // assign data in first node
	head->next = second;

	second->data = e;
	second->next = third;

	third->data = f; // assign data to third node
	third->next = NULL;

	/* Print list elements */
	for (head = head; head; head = head->next)
	{
		printf("Node  : %d\n", head->data);
		result *= head->data;
	}

	printf("Ginomeno komvwn : %lu\n", result);
	return 0;
};

// #include <stdlib.h>
// #include <stdio.h>

// /* List of integers */
// struct s_list {
// 	int val;		/* Integer value */
// 	struct s_list *next;
// };

// int main()
// {
// 	struct s_list *head, *p;
// 	int n;

// 	head = NULL;
// 	/* Read list elements */
// 	while (scanf("%d", &n) == 1) {
// 		p = (struct s_list *)malloc(sizeof(struct s_list));
// 		p->val = n;
// 		p->next = head;
// 		head = p;
// 	}

// 	printf("\nStarting output:\n"); <-----
// 	/* Print list elements */      
// 	for (p = head; p; p = p->next)  <------
// 		printf("%d\n", p->val);     <-------
// }

