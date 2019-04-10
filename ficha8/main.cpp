#include <iostream>
#include <string.h>

using namespace std;

int input_int[255];
char input_chr[255];

void ex1(){
    cout << "Insira um numero entre 1 e 10> "; cin >> input_int[0];
    if (input_int[0] < 1 || input_int[0] > 10) {
        cout << "Nao esta entre 1 e 10" << endl;
    }else{
        cout << "Esta entre 1 e 10" << endl;
    }
}

void ex2(){
    int maior=0;
    for(size_t i=0;i<3;i++){
        cout << "Insira " << "N" << i+1 << ">"; cin >> input_int[i];
        system("cls");
    }
    for(size_t i=0;i<3;i++){
        if (maior < input_int[i]) {
            maior=input_int[i];
        }
    }
    cout << maior << endl;
}

void ex3(){
    cout << "Digite uma letra: "; cin >> input_chr[0];
    if (islower(input_chr[0])) {
        cout << "Letra minuscula" << endl;
    }else{
        cout << "Letra maiuscula" << endl;
    }
}

void ex4(){
    cout << "Digite um numero entre 0 e 3 : "; cin >> input_int[0];
    switch (input_int[0]){
        case 0:
            cout << "zero" <<endl;
            break;
        case 1:
            cout << "um" <<endl;
            break;
        case 2:
            cout << "dois" <<endl;
            break;
        case 3:
            cout << "tres" <<endl;
            break;
        default:
            cout << "O numero nao esta entre 0 e 3" <<endl;
            break;
    } 
}

void ex5(){
    cout << "Insira um numero> "; cin >> input_int[0];
    
    cout << "Decrescente" << endl;
    for(size_t i=input_int[0];i>0;i--){
        cout << i << endl;
    }
    cout << "Crescente" << endl;
    for(size_t i=0;i<=input_int[0];i++){
        cout << i << endl;
    }
}

void ex6(){
    int op=1;
    //(op > 0) && (op < 3)
    while(op > 0 && op < 3){
        cout << "\n\t\tMENU DE COMANDOS\n\n\t0.\tSair\n\t1.\tMostrar\n\t2.\tApresentar\n\n\t\tEscolha uma opcao: ";
        cin >> op;
    }
}

void ex7(){
    for(size_t i=0;i<2;i++){
        cout << "Digite um numero> "; cin >> input_int[i];
        system("cls");
    }
    if(input_int[0] < input_int[1]){
        for(size_t i=input_int[0];i<=input_int[1];i++){
            cout << i << endl;
        }
    }else if(input_int[0] > input_int[1]){
        for(size_t i=input_int[0];i>=input_int[1];i--){
            cout << i << endl;
        }
    }else{
        cout << "Sao iguais" << endl;
    }
}
    
int main(int argc, char const *argv[])
{
    system("title Ficha_8");

    if (strcmp(argv[1],"ex1")==0){
        ex1();
        system("pause");
    }else if(strcmp(argv[1],"ex2")==0){
        ex2();
        system("pause");
    }else if (strcmp(argv[1],"ex3")==0) {
        ex3();
        system("pause");
    }else if (strcmp(argv[1],"ex4")==0) {
        ex4();
        system("pause");
    }else if (strcmp(argv[1],"ex5")==0) {
        ex5();
        system("pause");
    }else if (strcmp(argv[1],"ex6")==0) {
        ex6();
        system("pause");
    }else if (strcmp(argv[1],"ex7")==0) {
        ex7();
        system("pause");
    }

    return 0;
}
