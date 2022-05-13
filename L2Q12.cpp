#include <iostream>
using namespace std;

/*12. Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou 
não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos; 
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main(){
	
	int idade, tempo;
	
	cout<<"\nDigite sua idade:";
	cin>> idade;
	cout<< "\ndigite o tempo de servico: ";
	cin>> tempo;
	if ((idade >= 65) || (tempo>=30) || (tempo >= 60 && idade >=25)){
		cout<<"\n pode se aposentar!";
	}else{
		cout<<"\nAinda nao pode se aposentar!";
	}
	
	
	cout<<"\nfim\n";
	system ("pause");
}
