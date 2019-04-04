#include <iostream>
#include <string.h>

using namespace std;

char str1[50], str2[50];

string ex1(string x,string y){
    return x+" "+y;
}

void ex2(){
    cout << "Introduza uma frase> "; cin >> str1;
    cout << "Introduza a 2 frase> "; cin >> str2;
    cout << strcat(str1,str2) << endl;
}

void ex3(string x, string y){
    if(x==y){
        cout << "0" << endl;
    }else if(x<y){
        cout << "str1 < str2" << endl;
    }else{
        cout << "str1 > str2" << endl;
    }
}

void ex4(){
    int arr[7]={1,2,3,4,5,6,7};
    int *esp;
    esp=arr;
    for(size_t i=0;i<7;i++){
        cout << *(esp+i) << " no address " << *(&esp+i) << endl;   
    }
}


int main(int argc, char const *argv[]){

    system("title Ficha_7");

    if (strcmp(argv[1],"ex1")==0){
        cout << ex1(argv[2],argv[3]) << endl;
        system("pause");
    }else if(strcmp(argv[1],"ex2")==0){
        ex2();
        system("pause");
    }else if(strcmp(argv[1],"ex3")==0){
        ex3(argv[2],argv[3]);
        system("pause");
    }else if(strcmp(argv[1],"ex4")==0){
        ex4();
        system("pause");
    }

    return 0;
}

