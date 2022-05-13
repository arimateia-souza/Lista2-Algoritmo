/*5. Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. 

Faça um algoritmo que leia o salário e o código do cargo de um funcionário

e calcule o novo salário. 
Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de 
aumento.
Mostre o salário antigo, o novo salário e a diferença. 
CÓDIGO CARGO PERCENTUAL

101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30%
*/
#include <iostream>
using namespace std;
int main(){
	
	int codigo;
	float salario, novosalario, diferenca;
	
	//entrada
	cout<<"digite o codigo do seu cargo (101 - Gerente) (102 - engenheiro) (103 - tecnico): ";
	cin>> codigo;
	cout<<"\nQual seu salario?: R$";
	cin>> salario;
	//proc
	switch (codigo){
		
		case 101:
			novosalario = salario + salario * 0.10;
			diferenca = novosalario - salario;
			cout<< "\nSeu cargo e gerente com novo salario de R$"<< novosalario <<" \nSalario anterior: R$" <<salario << "\na diferenca e de: R$" << diferenca <<endl;
			break;
			
		case 102:
			novosalario = salario + salario * 0.20;
			diferenca = novosalario - salario;
			cout<< "\nSeu cargo e engenheiro com novo salario de R$"<< novosalario <<" \nSalario anterior: R$" <<salario << "\na diferenca e de: R$" << diferenca <<endl;
			break;

		case 103:
			novosalario = salario + salario * 0.30;
			diferenca = novosalario - salario;
			cout<< "\nSeu cargo e tecnico com novo salario de R$"<< novosalario <<" \nSalario anterior: R$" <<salario << "\na diferenca e de: R$" << diferenca <<endl;
			break;
			
			default:
			novosalario = salario + salario * 0.40;
			diferenca = novosalario - salario;
			cout<< "\nSeu cargo nao esta registrado, seu novo salario e de R$"<< novosalario <<" \nSalario anterior: R$" <<salario << "\na diferenca e de: R$" << diferenca <<endl;

	}
	cout<<"\nfim" <<endl;
	system("\npause");
}
