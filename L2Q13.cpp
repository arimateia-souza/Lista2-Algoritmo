#include <iostream>
using namespace std;
int main(){
	/*13. Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por um 
carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo:
	CONSUMO 	(Km/l)      	MENSAGEM
	Menor que	 8 			Venda o carro!
	Entre		 8 e 12 	Econômico!
	Maior 		que 12 		Super econômico!

*/
	float distancia, litros;
	
	cout<<"\ndigite a distancia percorrida: Km ";
	cin>>distancia;
	cout<<"\ndigite a quantidade de litros de gasolina consumidos: ";
	cin>>litros;
	if (distancia / litros < 8){
		cout<<"\nvenda o carro!";
	}else if((distancia / litros >=8) && (distancia / litros <=12)){
		cout<<"economico";
	}else if(distancia / litros > 12){
		cout<<"Super economico";
	}
	
	
	
	
	
	cout<<"\nfim\n";
	system("pause");
}
