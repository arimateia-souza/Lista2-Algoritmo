/*4. Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago.
*/
#include <iostream>
using namespace std;
int main(){

float valorcarro;
int ano;
//entrada : leia o ano e o preço do carro
	cout<< "\nDigite o valor do carro: R$";
	cin>>valorcarro;
	cout<< "\nDigite o ano do carro: ";
	cin>>ano;
	
//proc:calcular taxa de 1% para <1990
//taxa de 1.5% para >=1990
		if(ano<1990){
			valorcarro = valorcarro + valorcarro * 0.1;
			cout<<"o valor a ser pago e:"<<valorcarro;
		}else{
			if(ano>=1990){
				valorcarro = valorcarro + valorcarro * 0.015;
				cout<<"o valor a ser pago e:"<<valorcarro;
				}else{
					cout<<"comando invalido";
				
			}

	}
		
		

//saida: mostrar o resultado do carro com a taxa


}
