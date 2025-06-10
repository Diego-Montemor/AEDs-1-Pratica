#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int quant = 0, dif = 0;
    int VetorRep[20] = {4, 9, 1, 7, 0, 6, 10, 3, 2, 8, 5, 0, 9, 4, 1, 6, 7, 3, 2, 10}, VetorSemRep[quant];
    
    for(int i = 0; i< 20 ; i++){
        cout << VetorRep[i] << " ";
    }
    cout << endl;
    
    for(int i = 0 ; i < 20 ; i++){
        for(int j = 0 ; j < 20; j++ ){
            if(VetorRep[i] != VetorSemRep[j]){
                quant++;
                dif = 1;                
            }
        }
        if(dif == 1){
            VetorSemRep[quant] = VetorRep[i];
            dif = 0;
        }
    }
    
    for(int i = 0; i< quant ; i++){
        cout << VetorSemRep[i] << " ";
    }
    
    
    return 0;
}