#include <iostream>
using namespace std;

class merge{
	    int arr[6];
	    int segArr[6];
	    int mergArr[12];
	    int terArr [];
	    int i, k = 0;
	    public:
	    	vet4(int terArr[]);
	        vet3(int mergArr[12]);
	        vet2(int segArr[6]);
	        vet1(int arr[6]);
};

int merge::vet3(int mergArr[6]){
	for(i=0; i<6; i++){
		cout << "Digite o primeiro Array: " << i <<  endl;
		cin >> arr[i];
	}

	for(i=0; i<6; i++){	
	    cout << "Digite o segundo Array: " << i <<  endl;
		cin >> segArr[i];
	}

	for(i=0; i<6; i++){
        mergArr[k] = arr[i];
        k++;
    }

    for(i=6; i<12; i++){
    	if(segArr[i] == mergArr[k]){
            mergArr[k] = segArr[i - 6];
            k++;
        }
    }

    for(k=0; k<12; k++){
        cout << mergArr[k] << ' ';
    }
}

int merge::vet4(int terArr[]){
	
}

int main(){	
    int mergArr[12];
    int terArr[];
    merge vetor;
    vetor.vet3(mergArr);
    vetor.vet4(terArr);
return 0;	
}

