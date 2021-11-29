#include <iostream>
using namespace std;

class Vetores{
	int array[5];
	int j, n, i;

	public:
		int Vetor(int vet[5]);
};

int Vetores::Vetor(int vet[5]){
	for (n = 0; n < 5; n++){
        
		for (j = 0; j < 5; j++){
			cin >> n;
			vet[i] = n;
        }

	    if(n == j){
	        cout << "O numero repetido eh " << n << "e a posicao eh = " << array[i] << "e" << j << endl;
	        break;	
        }	
    }
return n;
}

int main(){
	int vet[5];
	Vetores Posi;
	Posi.Vetor(vet);
	return 0;
}
