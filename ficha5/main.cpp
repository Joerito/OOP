#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Menu{
    public:
        void principal(){
            cout << "1 - Exercicio_1\n2 - Exercicio_2\n3 - Exercicio_3\n4 - Exercicio_4\n5 - Exercicio_5\n6 - Exercicio_6\n7 - Exercicio_7\n8 - Exercicio_8\n\n9 - Sair\n\nOpcao> ";
        }

        void produtos_da_semana_dos_descontos(){
            cout << "\tPRODUTOS DA SEMANA DOS DESCONTOS\n\n\t1 - Cereais Nestrum\t2 - Sumo Tropical\n\t3 - Geleia Morango\t4 - Massa Italiana\n\t5 - Arroz Amarelo\t6 - Leite Soja\n\t7 - Coca Cola Zero\t8 - Couve de Bruxelas\n\nIndique o numero do produto: ";
        }

        void oof(){
            cout << "oof :/" << endl;
        }
};

class Exercicios{
    private:
    int arr[255];
    int produtos_desconto[8] = {20,15,20,10,10,20,15,5};
    
    public:
        int *esp;

        string ex1(){
            return "Bom /n";
        }

        int ex2(int x){
            return x;
        }

        int * ex3(){
            for(size_t i=0;i<=5;i++)
            {
                arr[i]=i*2;
            }
            return arr;
        }

        float ex4(float cateto1, float cateto2){
            return sqrt(pow(cateto1,2) + pow(cateto2,2));
        }

        int * ex5(int nota1, int nota2){
            arr[0]=(nota1+nota2)/2;
            if(arr[0] > 9.5){
                arr[1]=true;
                return arr;
            }else{
                arr[1]=false;
                return arr;
            }
        }

        int ex6(int x, int y){
            if(x>y){
                return x;
            }else if(x<y){
                return y;
            }else if(x==y){
                return true;
            }else{
                return false;
            }            
        }

        int ex7(int x, int y, int z){
            switch (z){
                case '+':
                    return x+y;
                    break;
                case '-':
                    return x-y;
                    break;
                case '*':
                    return x*y;
                    break;
                case '/':
                    return x/y;
                    break;
            
                default:
                    return false;
                    break;
            }
        }

        int ex8(int x){
            return produtos_desconto[x-1];
        }
        
};

class Programa{
    private:
        int input[255];
        char chin[255];
        Exercicios exercicio;
        Menu menu;

    public:
        int run(){
            while(true){
            menu.principal();
            cin >> input[0];

            switch (input[0]){
                case 1:
                    system("CLS");
                    cout << exercicio.ex1() << endl;
                    system("PAUSE");
                    system("CLS");
                    break;
                case 2:
                    system("CLS");
                    cout << "Introduza o seu numero de aluno> ";
                    cin >> input[0];
                    cout << exercicio.ex2(input[0]) << endl;
                    system("PAUSE");
                    system("CLS");
                    break;
                case 3:
                    system("CLS");
                    exercicio.esp = exercicio.ex3();
                    for(size_t i=0;i<=5;i++){
                        cout << *(exercicio.esp+i) << " ";
                    }
                    cout << endl;
                    system("PAUSE");
                    system("CLS");
                    break;
                case 4:
                    system("CLS");
                    cout << "Introduza o valor para o cateto 1> ";
                    cin >> input[0];
                    cout << "Introduza o valor para o cateto 1> ";
                    cin >> input[1];
                    cout << endl;
                    cout << exercicio.ex4(input[0],input[1]) << endl;
                    system("PAUSE");
                    system("CLS");
                    break;
                case 5:
                    system("CLS");
                    cout << "Escreva a primeira nota> ";
                    cin >> input[0];
                    cout << "Escreva a segunda nota> ";
                    cin >> input[1];
                    cout << endl;
                    exercicio.esp = exercicio.ex5(input[0],input[1]);
                    if(*(exercicio.esp+1) == true){
                        cout << "Aprovado. Com media de: " << *(exercicio.esp+0) << endl;
                    }else{
                        cout << "Reprovado. Com media de: " << *(exercicio.esp+0) << endl;
                    }
                    system("PAUSE");
                    system("CLS");
                    break;
                case 6:
                    system("CLS");
                    cout << "Insira o valor de a: ";
                    cin >> input[0];
                    cout << "Insira o valor de b: ";
                    cin >> input[1];
                    cout << endl;
                    if(exercicio.ex6(input[0],input[1]) == true){
                        cout << input[0] << " e " << input[1] << " sao iguais" << endl;
                    }else if(exercicio.ex6(input[0],input[1])==input[0]){
                        cout << input[0] << " e maior que " << input[1] << endl;
                    }else if(exercicio.ex6(input[0],input[1])==input[1]){
                        cout << input[1] << " e maior que " << input[0] << endl;
                    }else{
                        menu.oof();
                    }
                    system("PAUSE");
                    system("CLS");
                    break;
                case 7:
                    system("CLS");
                    cout << "Introduza o primeiro numero: ";
                    cin >> input[0];
                    cout << "Introduza o segundo numero: ";
                    cin >> input[1];
                    cout << "Introduza a operacao a realizar(+,-,* ou /): ";
                    cin >> chin[0];
                    cout << endl;
                    if(exercicio.ex7(input[0],input[1],chin[0]) == true){
                        menu.oof();
                    }else{
                        cout << input[0] << chin[0] << input[1] << "=" << exercicio.ex7(input[0],input[1],chin[0]) << endl;
                    }
                    system("PAUSE");
                    system("CLS");
                    break;
                case 8:
                    system("CLS");
                    menu.produtos_da_semana_dos_descontos();
                    cin >> input[0];
                    cout << endl;
                    cout << "Desconto = " << exercicio.ex8(input[0]) << '%' << endl;
                    system("PAUSE");
                    system("CLS");
                    break;
                case 9:
                    return 0;
                    break;
                default:
                    break;
            }
        }
    }

};

Programa programa;

int main(int argc, char const *argv[])
{
    system("TITLE Ficha 5");
    programa.run();
}
