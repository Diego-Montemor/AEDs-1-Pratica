#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    
    int i;
    float C,F;
    
    i = 0;
    
    while (i <= 100){
        C = i;
        
        F = (C * 1.8) + 32 ;
        
        printf("\n%d°C", (int)C);
        printf(" -> %.1f°F",F);
        
        i = i + 5;
    }
    
    return 0;
}

