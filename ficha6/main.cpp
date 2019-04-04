#include <iostream>
#include <string.h>

using namespace std;

class Menu{
    public:
        void principal(){
            cout << "1 - Exercicio_1\n2 - Exercicio_2\n3 - Exercicio_3\n4 - Exercicio_4\n5 - Exercicio_5\n6 - Exercicio_6\n7 - Exercicio_7\n8 - Exercicio_8\n9 - Exercicio_9\n10 - Exercicio_10\n\nOpcao> ";
        }

        void menu_ex7(){
            cout << "Menu de opcoes:\n1 - Executar o programa Calculadora\n2 - Converter graus centigrados/fahrenheit\n3 - Converter metros/quilometros\n4 - sair\n\nOpcao> ";
        }
};

class Exercicio{
    private:
        int arr[255];
        char password[10]="password";
    
    public:

        int * ex1(int x){
            for(size_t i=x;i<=15;i++){
                arr[i]=i;
            }
            return arr;
        }

        int * ex2(int x,int y){
            arr[1]=x*y;
            if (arr[1] < 10 || arr[1] > 1000) {
                arr[0]=0;
            }else{
                arr[0]=1;
            }
            return arr;
        }

        int * ex3(char *x){
            if(strcmp(x,password)==0){
                arr[0]=0;
            }else{
                arr[0]=1;
                arr[1]=strlen(password);
                arr[2]=password[0];
            }
            return arr;
        }

        int * ex4(int *x){
            for(size_t i=0;i<5;i++){
                arr[4-i]=x[i];
            }
            return arr;
        }

        int * ex6(int x,int i){
            arr[0]=x/i;
            return arr;
        }

        void ex7(int x){
            switch(x){
                case 1:
                    cout << "Calculadora: a executar..." << endl;
                    break;
                case 2:
                    cout << "Conversao de temperaturas" << endl;
                    break;
                case 3:
                    cout << "Conversao de distancias" << endl;
                    break;
                case 4:
                    cout << "A terminar o programa..." << endl;
                    break;
                default:
                    break;
            }
        }

        int * ex8(int x, int y){
            if (x >=1000){
                //...
            }else if(x >= 500){
                //...
            }else{
                //...
            }
        }

        int * ex9(int x){
            for(size_t i=1;i<=x;i++){
                i++;
                arr[i]=i;
            }
            return arr;
        }
};

class Programa{
    private:
        int input[255];
        char chrin[255];

        Menu menu;
        Exercicio exercicios;

    public:
        int *esp;
        int soma=0;
        int i=1;

        void run(){
            menu.principal();
            cin >> input[0];
            while(true){
                switch (input[0]){
                case 1:
                    cout << "Isira um numero entre 1 e 15: "; cin >> input[0];
                    if (input[0]>15 || input[0]<=0) {
                        cout << "Entre 1 e 15" << endl;
                    }else{
                        esp=exercicios.ex1(input[0]);
                        for(size_t i=input[0];i<=15;i++){
                            cout << "n = " << *(esp+i) << endl;
                        }
                        system("PAUSE");
                    }
                    break;
                
                case 2:
                    while(true){
                        cout << "Digite um numero inteiro: "; cin >> input[0];
                        cout << "Digite um outro numero inteiro: "; cin >> input[1];
                        esp=exercicios.ex2(input[0],input[1]);
                        if (*(esp+0) == 1) {
                            cout << input[0] << "+" << input[1] << "=" << *(esp+1) << endl;
                            system("PAUSE");
                            system("CLS");
                        }else{
                            cout << *(esp+0) << " " << *(esp+1) << endl;
                            system("PAUSE");
                            break;
                        }
                    }
                    break;

                case 3:
                    cout << "Introduza a palavra-passe> "; cin >> chrin;
                    esp=exercicios.ex3(chrin);
                    if (*(esp+0)==0) {
                        cout << "Palavra-passe Correta" << endl;
                        system("PAUSE");
                    }else{
                        cout << "Palavra-passe Incorreta\nPrimerira letra da palavra-passe: " << char(*(esp+2)) << "\nTamanho da palavra-passe: " << *(esp+1) << endl;
                        system("PAUSE");
                    }
                    
                    
                    break;

                case 4:
                    for(size_t i=0;i<5;i++){
                        cout << "Indique um valor para o vector [" << i << "]: "; cin >> input[i];
                    }
                    esp = exercicios.ex4(input);

                    for(size_t i=0;i<5;i++){
                        cout << *(esp+i) << endl;
                    }
                    system("PAUSE");
                    break;

                case 5:
                    //Ex5
                    break;

                case 6:
                    while(true){
                        cout << "Introduza um numero: "; cin >> input[i];
                        soma+=input[i];
                        if (soma >= 500) {
                            esp=exercicios.ex6(soma,i);
                            cout << "A media dos valores: " << *(esp+0) << endl;
                            system("PAUSE");
                            break;
                        }else{
                            i++;
                        }   
                    }
                    break;

                case 7:
                    while(true){
                        menu.menu_ex7();
                        cin >> input[0];
                        system("CLS");
                        exercicios.ex7(input[0]);
                        system("PAUSE");
                        if (input[0]==4) {
                            break;
                        }
                        system("CLS");
                    }
                    break;

                case 8:
                    cout << "Insira a quantidade> "; cin >> input[0];
                    cout << "Insira o preço do material> "; cin >> input[1];
                    esp=exercicios.ex8(input[0],input[1]);
                    break;
                
                case 9:
                    cout << "Digite um numero> "; cin >> input[0];
                    esp=exercicios.ex9(input[0]);
                    for(size_t i=1;i<=input[0];i++){
                        i++;
                        cout << *(esp+i) << endl;
                    }
                    system("PAUSE");
                    break;
                default:
                    break;
                }
            }
        }
        
};

int main(int argc, char const *argv[]){
    Programa programa;
    programa.run();
    return 0;
}


