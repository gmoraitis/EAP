#include <stdio.h>
#include <ctype.h>
#define megistos_arithmos_eisodou 10

const int kommatia_endeikti[13][7] = {{1, 1, 1, 1, 1, 1, 0}, 
{0, 1, 1, 0, 0, 0, 0}, 
{1, 1, 0, 1, 1, 0, 1}, 
{1, 1, 1, 1, 0, 0, 1}, 
{0, 1, 1, 0, 0, 1, 1}, 
{1, 0, 1, 1, 0, 1, 1}, 
{1, 0, 1, 1, 1, 1, 1}, 
{1, 1, 1, 0, 0, 0, 0}, 
{1, 1, 1, 1, 1, 1, 1}, 
{1, 1, 1, 1, 0, 1, 1},
{1, 1, 1, 0, 1, 1, 1},
{1, 0, 0, 1, 1, 1, 0},
{1, 0, 0, 0, 1, 1, 1,}};

char eksodos[4][megistos_arithmos_eisodou * 4];
const int thesi_kommation[7][2] = {{0, 1}, {1, 2}, {2, 2}, {2, 1}, {2, 0}, {1, 0}, {1, 1}};

char input;
int count = 0;
int i;
int j;
int temp;

void adeiasma_pinaka_eksodou(void)
{
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < megistos_arithmos_eisodou * 4; j++)
            eksodos[i][j] = ' ';
    }
}

void epeksergasia_eisodou(int eisodos, int thesi)
{
    int i, grammes, stiles;

    for (i = 0; i < 7; i++)
    {
        if (kommatia_endeikti[eisodos][i])
        {
            grammes = thesi_kommation[i][0];
            stiles = thesi_kommation[i][1] + thesi;
            eksodos[grammes][stiles] = i % 3 == 0 ? '_' : '|';
        }
        else
        {
            
        }
    }
}

void ektypwsh_eksodou(void)
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < (megistos_arithmos_eisodou * 4) - 1; j++)
        {

            putchar(eksodos[i][j]);
            
        }
    }
    
}

int main()
{
    adeiasma_pinaka_eksodou();
    printf("Εισάγετε δέκα χαρακτήρες από 0-9 και A, C, F: ");
    while ((input = getchar()) != '\n' && count < megistos_arithmos_eisodou)
    {
        count += 1;
        if (isdigit(input))
        {
            //if(((input - 48)  >= 48) || ((input - 48)  <= 57) ){  Προσπαθεια αποφυγης αλλων χαρκτηρων αλλα δεν δουλευει.
            epeksergasia_eisodou(input - 48  , ((count - 1) * 4));

            temp = temp + 4;
   
        }
        else
        {
            
            switch (input)
            {

            case 'A':
                epeksergasia_eisodou(input - 55, ((count - 1) * 4));
                break;
            case 'C':
                epeksergasia_eisodou(input - 56, ((count - 1) * 4));
                break;
            case 'F':
                epeksergasia_eisodou(input - 58, ((count - 1) * 4));
                break;
                
            }
        }
    }
    ektypwsh_eksodou();
    printf("\n---------------------------------------\n");
    
}




