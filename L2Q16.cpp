/*16. Leia a idade de uma pessoa
e escreva se ela já tem idade para tirar carteira de habilitação (18 anos 
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a 
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
