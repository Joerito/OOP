#include <iostream>
#include <string.h>

using namespace std;

int *esp;
int arr[255];
int input_int[255];

int * ex1(int x, int y){
    arr[0]=x/y;
    arr[1]=x%y;
    return arr;
}

int * ex2(string x){
    for(size_t i=0;i<x.size();i++){
        arr[i]=x[i];
    }
    return arr;
}

int main(int argc, char const *argv[]){
    
    system("title Ficha_9");

    if (strcmp(argv[1],"ex1")==0){
        cout << "Introduza o valor de x: "; cin >> input_int[0];
        cout << "Introduza o valor de y: "; cin >> input_int[1];
        esp=ex1(input_int[0],input_int[1]);
        cout << "O resultado: " << *(esp+0) << endl;
        cout << "O resto da divisao inteira: " << *(esp+1) << endl;
        system("pause");
    }else if(strcmp(argv[1],"ex2")==0){
        
    }
    

    return 0;
}
