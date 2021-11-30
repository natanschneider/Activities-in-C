#include <iostream>
using namespace std;

class vetores{ 
    int vetor[5]; 
    int i, v,j;
    public: 
        vet(int vet[5]);
};

int vetores::vet(int vet[5]){
    for (i=0;i<5;i++){
        cout << "Digite o " << i+1 << " valor"<< endl;
        cin >> vet[i];
} 

for (i=0;i<5;i++){
    for (j=i;j<5;j++){
            if(vet[i] == vet[j]){
                if(i != j){
                    cout << "O numero repetido eh: " << vet[i] <<  " na posicao: " << i+1 << " e " << j+1 << endl;
                    break;
                }
            }
    }
}
}

int main(){
    int vet[5];
    vetores vetus;
    vetus.vet(vet);
    return 0;
}

