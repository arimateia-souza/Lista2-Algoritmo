#include <iostream>
using namespace std;
int main(){
	/*14. Leia 3 n�meros inteiros e escreva uma das seguintes mensagens:
� Todos os n�meros s�o iguais; 
� Todos os n�meros s�o diferentes; 
� Apenas dois n�meros s�o iguais. */

	int x, y, z;
	
	cout << "\ndigite tres numero inteiros: ";
	cin >> x >> y >> z;
	if ((x==y)&&(y==z)){
		cout<<"\ntodos os numeros sao iguais";
	}else if ((x!=y)&&(y!=z)){
		cout<<"\ntodos sao diferentes";
	} else{
		cout<<"\napenas dois sao iguais";
	}
	
	
cout<<"\nfim\n"	;
system ("pause");
}
