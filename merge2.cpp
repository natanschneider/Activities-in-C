#include <iostream>
using namespace std;

class merge{
	    int arr[6];
	    int segArr[6];
	    int mergArr[12];
	    int terArr[12];
	    int i, k = 0, o = 0;
	    public:
	    	vet4(int terArr[12]);
	        vet3(int mergArr[12]);
	        vet2(int segArr[6]);
	        vet1(int arr[6]);
};

//junta os arrays:
int merge::vet3(int mergArr[6]){
	int o = 0;
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
        mergArr[k] = segArr[i - 6];
        k++;
    }

    cout << "mergArr" << endl;
    for(k=0; k<12; k++){
        cout << mergArr[k] << ' ';
    }
    cout << endl;
    
    for(i=0; i<12; i++){
			terArr[i] = mergArr[o];
			o++;
    }
    
    cout << "terArr" << endl;
    for(i=0; i<12; i++){
        cout << terArr[i] << ' ';
   }
    cout << endl;
}

//junta e apaga os repetidos no array:
int merge::vet4(int terArr[12]){
	
	int j, o = 0;

    cout << "terArr" << endl;
    for(i=0; i<12; i++){
        cout << terArr[i] << ' ';
   }
    cout << endl;
	
   	for (i=0; i<12; i++){
       for (j=i; j<12; j++){
           if(terArr[i] == terArr[j]){
              if(i != j){
              terArr[i] - terArr[j];
              break;
              }
           }
       }
    }
   
   cout << "Array final" << endl;
   for(i=0; i<12; i++){
        cout << terArr[i] << ' ';
   }
   cout << endl;
}

int main(){	
    int mergArr[12];
    int terArr[12];
    merge vetor;
    merge vetor2;
    vetor.vet3(mergArr);
    vetor2.vet4(terArr);
return 0;	
}

