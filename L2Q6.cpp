/*6. A escola �APRENDER� faz o pagamento de seus professores por hora/aula.
Fa�a um algoritmo que calcule 
e escreva o sal�rio de um professor,
sabendo que o valor da hora/aula segue a tabela abaixo:

Professor n�vel 1 R$ 12,00 por hora aula
Professor n�vel 2 R$ 17,00 por hora aula
Professor n�vel 3 R$ 25,00 por hora aula*/

#include <iostream>
using namespace std;

int main(){
	
	float nivel, horas;
	
	cout<< "\nVoce e professor de qual nivel? (1 - nivel I, 2 - nivel II, 3 - nivel III) ";
	cin>> nivel;
	cout<< "Quantas hora voce trabalha? ";
	cin>> horas;
	
		if (nivel==1){
			nivel = 12 * horas;
			cout<< "\n seu salario e R$" << nivel;
		}else if(nivel == 2){
			nivel = 17 * horas;
			cout<<"\n seu salario e R$"<< nivel;
			}else if(nivel == 3){
				nivel = 25 * horas;
			cout<<"\n seu salario e R$"<< nivel;
			}else cout<<"\n\ncomando invalido";
		
	cout<<"\n\n\nacabou\n\n";	
	system ("pause");	
	}
	
	
	
	
	
	
	
	

