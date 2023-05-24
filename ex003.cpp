#include <iostream>
using namespace std;

int timer(int n1);

int main(){
    	
    int a;

    cout << "Digite um valor: ";
    cin >> a;
    a = timer(a);

    cout << "O valor que vc digitou eh... " << a;



    return 0;
}

int timer(int n1){
    for(int cont = 1; cont <= 10000000;){
        cont++;
    }
    return n1;
}