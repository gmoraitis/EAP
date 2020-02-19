#include <stdio.h>
#include <ctype.h>
#define megistos_arithmos_eisodou 10

const int kommatia_endeikti[13][7] = { {1,1,1,1,1,1,0}, {0,1,1,0,0,0,0}, {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1}, 
{0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0}, 
{1,1,1,1,1,1,1}, {1,1,1,1,0,1,1,}, {1,1,1,0,1,1,1}, {1,0,0,1,1,1,0}, {1,0,0,0,1,1,1,}}; 

char eksodos[4][megistos_arithmos_eisodou * 4] = {"-","|","|","_","|","|","-"}; ///ta symvola ta vazoyme edw h ston 3x3 ?? Pisteuw edw giati exei mas ton exoyn dhlvsei me char sthn ekfvnhsh.
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
        for (j = 0; j < megistos_arithmos_eisodou * 4; j = j + 1)
            eksodos[i][j] = ' ';
    }
}

void epeksergasia_eisodou(int eisodos, int thesi)
{
    for (i = 0; i < megistos_arithmos_eisodou - 1; i++)
    {
        eksodos[thesi_kommation[i][0]][thesi_kommation[i][1]]  =  kommatia_endeikti[eisodos][i] ;
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
    adeiasma_pinaka_eksodou();//Logika prepei na valoume sthn arxh aythn thn synarthsh swsta?
    printf("Εισάγετε δέκα χαρακτήρες από 0-9 και A, C, F: ");
    while ((input = getchar()) != '\n' && count < megistos_arithmos_eisodou)//Pernoume xarakthres mexrh na mhn vroume keno xarakrhra --> ("\n")?Kai epeita mexrh o count na ginei 10.
    {
        count += 1;
        if (isdigit(input))//Elegxoume to input sthn isdigit kai ean einai pshfio kanoume ta akoloutha *alliws...
        {   
            
            epeksergasia_eisodou(input,count);//To input einai o kathe xarakthras.To count einai enas metrhths alla antoistoixa einai kai h thesh tou eksodos kathe fora??
            input = input + 4;//Ean metaferei kata 4 xarakthres thn eisagvgh tou kathe input.Prepei na mpei edW H sto telos? 
            void ektypwsh_eksodou(void);//Tha pernei san orizma kati apo ton pinaka eksodos?
        }
        else//* alliws ean einai xarakthras ta ksanastrexoume ola ayta pou grapsame sthn if alla gia tous xarakthres A,C,F ?
        {
        }
    }
}

