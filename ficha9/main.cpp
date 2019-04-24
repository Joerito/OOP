#include <iostream>
#include <string.h>

using namespace std;

int *esp;
int arr[255];
string chr_arr;
int input_int[255];

int * ex1(int x, int y){
    arr[0]=x/y;
    arr[1]=x%y;
    return arr;
}

void ex2(){
    cout << "Introduza uma string: "; cin >> chr_arr;
    for (size_t i=0;i<chr_arr.size();i++){
        cout << "t[" << i << "]" << "=" << "'" << chr_arr[i] << "'" << endl; 
    }
}

void ex3(){
    while(true){
        cout << "Introduza um numero: "; cin >> input_int[0]; 
        if(input_int[0] > 5){
            cout << "Numero nao aceite" << endl;
            system("pause");
            system("cls");
        }else{
            cout << input_int[0] << endl;
            break;
        }   
    }
}

void ex4(){
    while(true){
        cout << "Hipotese de compra de senhas:\n\n\t(1) Pequeno Almoco\n\t(2) Almoco\n\t(3) Lanche\n\t(4) Jantar\n\nEscolha a senha que deseja comprar: "; cin >> input_int[0];
        switch(input_int[0]){
            case 1:
                cout << "\n\nComprou uma senha para Pequeno Almoco\n\n";
                system("pause");
                system("cls");
                break;
            case 2:
                cout << "\n\nComprou uma senha para Almoco\n\n";
                system("pause");
                system("cls");
                break;
            case 3:
                cout << "\n\nComprou uma senha para Lanche\n\n";
                system("pause");
                system("cls");
                break;
            case 4:
                cout << "\n\nComprou uma senha para Jantar\n\n";
                system("pause");
                system("cls");
                break;
            default:
                cout << "\n\nNumero invalido\n\n";
                system("pause");
                system("cls");
                break;
        }
    }
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
        ex2();
        system("pause");
    }else if(strcmp(argv[1],"ex3")==0){
        ex3();
        system("pause");
    }else if (strcmp(argv[1],"ex4")==0){
        ex4();
        system("pause");
    }
    
    return 0;
}
