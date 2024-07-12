#include<iostream>

using namespace std;

void inscrever(){
    cout<<"Teste de funçoes :)"<<endl;
}

int somar(int x, int y){
    int soma;
    soma = x+y;
    return soma;
}

int main(){
    inscrever();

    int a = 5, b = 4;
    int s;
    s = somar(a,b);
    cout<<"A soma eh: "<<s<<endl;

    return 0;
}