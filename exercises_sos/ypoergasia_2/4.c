#include <stdio.h>
#include <ctype.h>
#define megistos_arithmos_eisodou 10

const int kommatia_endeikti[13][7] = { {1,1,1,1,1,1,0}, {0,1,1,0,0,0,0}, {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1}, 
{0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0}, 
{1,1,1,1,1,1,1}, {1,1,1,1,0,1,1,}, {1,1,1,0,1,1,1}, {1,0,0,1,1,1,0}, {1,0,0,0,1,1,1,}}; 

char eksodos[4][megistos_arithmos_eisodou * 4]; 
const int thesi_kommation[7][2] = {0,1,1,0,1,1,1,2,2,0,2,1,2,2};
int array[3][3]; 
int input = 0;
int count = 0;
int i;
int j;

void adeiasma_pinaka_eksodou(void)
{
    for (i = 0; i < 4; i = i + 1)
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
	   }
	}



void ektypwsh_eksodou(void)
{
    for (i = 0; i < megistos_arithmos_eisodou - 1; i++)
    {

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
            
            epeksergasia_eisodou(input,count);
            input = input + 4;
            ektypwsh_eksodou();
        }
        else
        {
        }
    }
}

 