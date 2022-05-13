#include <iostream>
using namespace std;
int main(){
	/*14. Leia 3 números inteiros e escreva uma das seguintes mensagens:
• Todos os números são iguais; 
• Todos os números são diferentes; 
• Apenas dois números são iguais. */

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
