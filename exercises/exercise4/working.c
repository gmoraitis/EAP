#include <stdio.h>
#include <stdlib.h>

/* Η δομή που αναπαριστά λίστα συνδέσεων ενός κόμβου του γράφου */
typedef struct AdjListNode
{
    int dest;                 /* κόμβος με τον οποίο υπάρχει σύνδεση */
    struct AdjListNode *next; /* επόμενος */
} node;

/* δομή που περιέχει δείκτη στη λίστα συνδέσεων */
struct AdjList
{
    node *head; /* δείκτης τύπου node */
};

/* Η δομή Graph περιέχει τον ακέραιο Nodes (το πλήθος των κόμβων του γράφου) 
και ένα πίνακα δεικτών σε λίστες. Το μέγεθος του array αυτού θα είναι Nodes */
struct Graph
{
    int Nodes;
    struct AdjList *array;
};

/* Συνάρτηση που δημιουργεί τη δομή Graph (ερώτημα A) */
struct Graph *createGraph(int Nodes)
{
    /*
    (A) Να κατασκευάσετε τη συνάρτηση που δημιουργεί τη δομή Graph που υλοποιεί 
    τον δυναμικό πίνακα λιστών διασύνδεσης των κόμβων του γράφου. Η συνάρτηση 
    επιστρέφει δείκτη στη δομή Graph ή NULL αν η δομή δεν δημιουργήθηκε. 
    */

    struct Graph *graph =
        (struct Graph *)malloc(sizeof(struct Graph));
    graph->Nodes = Nodes;

    // Create an array of adjacency lists. Size of
    // array will be V
    graph->array =
        (struct AdjList *)malloc(Nodes * sizeof(struct AdjList));

    // Initialize each adjacency list as empty by
    // making head as NULL
    int i;
    for (i = 0; i < Nodes; ++i)
        graph->array[i].head = NULL;

    return graph;
}

/* Συνάρτηση δημιουργίας νέου κόμβου στη λίστα συνδέσεων */
node *newListNode(int dest)
{
    node *newNode = malloc(sizeof(node));
    if (newNode != NULL)
    {
        newNode->dest = dest;
        newNode->next = NULL;
        return newNode;
    }
    else
        return NULL;
}

/* Προσθήκη στη δομή graph των κόμβων src, dest στις αντίστοιχες λίστες συνδέσεων (Ερώτημα Β) */
int addEdge(struct Graph *graph, int src, int dest)
{

    int check;
    node *NewListNode = graph->array[src].head;

    if (src == dest)
    {
        printf("Δεν επιτρέπεται σύνδεση με τον εαυτό του.");
        return 0;
    }

    while (NewListNode)
    {
        check = NewListNode->dest;
        if (check == dest)
        {
            printf("H ακμή υπάρχει ήδη.");
            return 0;
        }
        NewListNode = NewListNode->next;
    }
    /* πρόσθεσε ένα στοιχείο στη λίστα του κόμβου src.   */
    node *newNode = newListNode(dest);
    if (newNode != NULL)
    {
        newNode->next = graph->array[src].head;
        graph->array[src].head = newNode;
    }
    else
        return 0;

    /* πρόσθεσε ένα στοιχείο στη λίστα του κόμβου dest.   */
    newNode = newListNode(src);
    if (newNode != NULL)
    {
        newNode->next = graph->array[dest].head;
        graph->array[dest].head = newNode;
        return 1;
    }
    else
        return 0;
}

/* συνάρτηση που τυπώνει τον πίνακα των λιστών συνδέσεων των κόμβων (ερώτημα Γ)  */
void printGraph(struct Graph *graph)
{

    /* 
    (Γ) Να κατασκευάσετε τη συνάρτηση printGraph που εμφανίζει τον πίνακα των 
    λιστών συνδέσεων των κόμβων (επιλογή 2 του χρήστη) όπως αναφέρει το υπόδειγμα εκτέλεσης στην εκφώνηση.
    */
    int k;
    for (k = 0; k < graph->Nodes; k++)
    {
        struct AdjListNode *p = graph->array[k].head;
        if(p != NULL){
            printf("\n Ο κόμβος %d συνδέεται με : ", k);
            while (p)
            {
                printf("[%d]", p->dest);
                p = p->next;
            }
        }
        else
            printf("\n Ο κόμβος %d είναι χωρίς συνδέσεις ", k);
        
    }
}

/* συνάρτηση που αθροίζει το πλήθος των συνδέσεων ενος κόμβου (ερώτημα Δ)  */
int countEdges(struct Graph *graph, int nodeNumber)
{

    /* 
    (Δ) Να κατασκευάσετε τη συνάρτηση countEdges που αθροίζει 
    το πλήθος των συνδέσεων ενός κόμβου (επιλογή 3 του χρήστη)
    Η συνάρτηση επιστρέφει το πλήθος των συνδέσεων του κόμβου NodeNumber
    */
     int counter = 0;

    //traverse all vertex
    // for (int i = 0; i < graph->Nodes; i++){

    //     // add all edge that are linked to the
    //     // current vertex
    //     sum += sizeof(graph->array[i]);
    // }
    
    
       
        node *edge = graph->array[nodeNumber].head;
        while (edge)
        {
            edge = edge->next;
            counter += 1;   
        }

    
    
    return counter ;

 
    
    // The count of edge is always even because in
    // undirected graph every edge is connected
    // twice between two vertices
   
}

/* συνάρτηση που υπολογίζει το συνολικό πλήθος των ακμών  (ερώτημα Ε) */
int counttotalEdges(struct Graph *graph)
{
    int result = 0;
    /* 
    (Ε) Να κατασκευάσετε τη συνάρτηση counttotalEdges που υπολογίζει 
    και επιστρέφει το συνολικό πλήθος των ακμών του γράφου.
    */
      
        
        
            
            result = (graph->Nodes * (graph->Nodes - 1)) / 2;    
        

    
    
    return result ;
}

/* Κυρίως πρόγραμμα, menu  */
int main()
{
    int Nodes = 0;    /* Πλήθος κόμβων */
    int select = 0;   /* Επιλογή μενού */
    int edge1, edge2; /* Ακμές */
    int f, nodeNumber, count;
    struct Graph *graph; /* O γράφος */

    system("chcp 1253>nul"); /* Εισαγωγή Ελληνικών χαρακτήρων */
    printf("Πρόγραμμα συνδεσιμότητας γράφου\n");
    while (Nodes <= 0)
    {
        printf("Καταχωρίστε τον αριθμό των κόμβων του γράφου:");
        f = scanf("%d", &Nodes);
        if (f == 0)
            Nodes = 0;
    }
    graph = createGraph(Nodes);
    if (graph == NULL)
        return 0;
    while (select != 5)
    {
        nodeNumber = -1;
        count = 0;
        printf("\n MENU\n 1. Προσθήκη ακμής \n 2. Προβολή συνδέσεων όλων των κόμβων\n 3. Προβολή πλήθους συνδέσεων ενός κόμβου"
               "\n 4. Προβολή πλήθους ακμών\n 5. Έξοδος");
        printf("\n Επιλογή:");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            printf("\n Πρόσθεσε ακμή μεταξύ των κόμβων  0 έως %d (παράδειγμα: 0,%d):", Nodes - 1, Nodes - 1);
            scanf("%d,%d", &edge1, &edge2);
            if (edge1 >= 0 && edge1 < Nodes && edge2 >= 0 && edge2 < Nodes)
            {
                if (addEdge(graph, edge1, edge2))
                {
                    printf("\n>>> η ακμή ανάμεσα στους κόμβους  %d και %d έχει προστεθεί\n", edge1, edge2);
                }
                else
                    printf("\n>>> Σφάλμα: δεν έχουν εντεθεί ακμές\n");
            }
            else
                printf("\n>>> Προσοχή! κόμβοι μεταξύ 0 και %d \n", Nodes - 1);
            break;
        case 2:
            printGraph(graph);
            break;
        case 3:
            while (nodeNumber < 0 || nodeNumber > Nodes - 1)
            {
                printf("\n Δώστε αριθμό κόμβου(0 έως %d) :", Nodes - 1);
                scanf("%d", &nodeNumber);
            }
            printf("\n>>> Το πλήθος συνδέσεων του κόμβου %d είναι %d\n", nodeNumber, countEdges(graph, nodeNumber));
            break;
        case 4:
            printf("\n>>> Το συνολικό πλήθος ακμών του γράφου είναι %d \n", counttotalEdges(graph));
            break;
        case 5:
            printf("\n ΕΞΟΔΟΣ!!!\n");
            break;
        default:
            printf("\n Παρακαλώ εισάγετε 1,2,3,4 ή 5\n");
        }
    }
    system("pause");
    return 0;
}
