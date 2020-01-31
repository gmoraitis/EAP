#include <stdio.h> 
int main()
{
    int result;
    int i;
    

    for(i = 10; i <=110; i++){
        if(i % 7 == 0){
            result = i * i;
            printf("%i * %i = %d\n",i,i,result);
            
        }
    
    }


    return 0;
}