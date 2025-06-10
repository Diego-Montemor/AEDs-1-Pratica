#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
    
    float somatorio;
    int i,n1,n2,n3;
    
    
    i = 1;
    n1 = 50;
    n2 = 1;
    n3 = 2;
    
    while(n3 <=50){
        somatorio = ((n1-n2) / n3) + somatorio;
        
        n1 = n1 - 1;
        n2 = n2 +2;
        n3 = n3 + 1;
                
        
        n3 = n3 +1;
    }
    
    printf("%d",n1);
    printf("\n%d",n2);
    printf("\n%d",n3);
    
    printf("\nO resultado final foi %.2f",somatorio);
    
    return 0;
}

