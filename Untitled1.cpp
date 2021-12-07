#include <iostream>
using namespace std;

class junta{   
int vetor[6];
int vet1[6];
int vet2[12];
int i;
    public: 
vet01(int vet[6]); 
vet02(int vet[6]);
vet03(int vet[12]);
};

int junta::vet01(int vet[6]){
    for (i=0;i<6;i++){
        cout << "Digite o numero do primeiro vetor " << i << endl;
        cin >> vetor [i];
    }
}

int junta::vet02(int vet[6]){
    for (i=0;i<6;i++){
        cout << "Digite o numero do segundo vetor " << i << endl; 
        cin >> vet1 [i];
    }
}

int junta::vet03(int vet[12]){
    for (i=0;i<6;i++){
        vet2[i] = vetor[i];
    }
    for (i=6;i<12;i++){
        vet2[i] = vet1[i-6];
    }
    for (i=0;i<12;i++){
        cout << vet2[i] << " ";
    }
}

int main(){
int vet[6];
junta vetts;
vetts.vet01(vet);
vetts.vet02(vet);
vetts.vet03(vet);
}

