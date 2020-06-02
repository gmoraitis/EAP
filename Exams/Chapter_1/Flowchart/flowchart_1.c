//a) for N = 1 A = 1
//       N = 2 A = 5
//       N = 3 A = 32

#include<stdio.h>


// variables
int n, a, k, g, j;

int main(){
    //defence programming while asking for n.
    do
    {
        printf("Dwse timh gia to N (akaireos thetikos)");
        scanf("%d",&n);
    } while (n <= 0);

    a = 0;

    for (k = 1; k <= n; ++k){
        g = 1;

        for(j = 1; j <= k; ++j){
            g = g * k;}
        
        a = a + g;
    
    }
    
    printf("to apotelesma einai a = %d",a);



}