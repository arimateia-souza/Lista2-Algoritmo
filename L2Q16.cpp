/*16. Leia a idade de uma pessoa
e escreva se ela j� tem idade para tirar carteira de habilita��o (18 anos 
completos) ou n�o. Se n�o tiver idade, escreva tamb�m quantos anos faltam para que possa tirar a 
carteira.
*/
#include <iostream>
using namespace std;
int main(){
	
	int idade;
	
	cout<<"\nDigite sua idade:";
	cin>>idade;
	
	if(idade >= 18){
		cout<<"\npode dirigir!";
	}else if (idade < 18){
		idade = 18 - idade;
		cout<<"\nNao pode dirigir, faltam " << idade << " anos para tirar a sua carteira";
	}
	
cout<<"\nfim\n";
system("pause");	
}
