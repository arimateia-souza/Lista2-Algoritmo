/*3. Calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal: 
• Homem = (72,7 x altura) - 58 
• Mulher = (62,1 x altura) - 44,7
*/

#include<iostream>
using namespace std;
int main(){

	float altura, pesoideal;
	char sexo;
	
	cout<<"\nDigite sua altura: ";
	cin>>altura;
	cout<<"\nDigite seu sexo (m - masculino ou f - feminino): ";
	cin>> sexo;
	
		if(sexo=='m'){
			pesoideal = (72.7 * altura - 58);
			cout<< "o peso calculado foi: " <<pesoideal;	
		}else{
			if(sexo=='f'){
				pesoideal = ((62.1 * altura) - 44.7);
				cout<< "o peso calculado foi: " <<pesoideal;
			
			}else{
				cout<<"Comando invalido";
			}	

		}
	
	
	
	
	
	
	
	
	cout << "\nFim\n";
	system("pause");	
}
