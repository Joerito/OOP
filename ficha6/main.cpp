#include <iostream>
#include <string.h>

using namespace std;

class Exercicio{
    private:
        int arr[255];
        char password[10]="password";
    
    public:

        int * ex1(int x){
            for(size_t j=x;j<=15;j++){
                arr[j]+=j;
            }
            return arr;
        }//...

        int * ex2(int x,int y){
            do{
                arr[0]=x*y;
                return arr;
            } while (arr[0] > 10 && arr[0] < 1000);
        }

        int * ex3(char *x){
            while(1){
                if(strcmp(x,password)!=0){
                    arr[0]=false;
                    arr[1]=strlen(password);
                    arr[2]=password[0];
                    return arr;
                }else{
                    arr[0]=true;
                }
            }
        }

        int * ex4(int *x){
            for(size_t i=0;i<5;i++){
                arr[4-i]=x[i];
            }
            return arr;
        }

        int * ex6(int x[]){
            for(size_t i=0;i<sizeof(*x);i++){
                arr[1]+=x[i];
            }
            if (arr[1] >= 500) {
                arr[2]=arr[1]/sizeof(arr);
                arr[0]=0;
            }else{
                arr[0]=1;
            }
            return arr;
        }

};

class Programa{
    private:
        int input[255];
        char chrin[255];

        Exercicio exercicios;

    public:
        int *esp;

        void run(){
            cin >> input[0];

            switch (input[0]){
                case 1:
                    //Ex1
                    break;
                
                case 2:
                    //Ex2
                    break;

                case 3:
                    //Ex3
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
                    while(1){
                        int i=0;
                        cout << "Introduza um numero: "; cin >> input[i];
                        esp=exercicios.ex6(input);
                        if (*(esp+0) == 0) {
                            cout << "Media do Valores: " << *(esp+0) << " " << *(esp+1) << " " << *(esp+2) << endl;
                            system("PAUSE");
                            break;
                        }else{
                            i++;
                        }
                          
                    }
                    break;

                case 7:
                    //Ex7
                    break;

                case 8:
                    //Ex8
                    break;

                default:
                    break;
            }
        }
        
};

int main(int argc, char const *argv[]){

    Programa programa;

    programa.run();
    
    return 0;
}


