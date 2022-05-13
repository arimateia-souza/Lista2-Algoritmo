#include <iostream>
using namespace std;
int main(){
/*20. 
Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que 
todos pagam R$ 100 
mais um adicional conforme a seguinte tabela: 

• Crianças com menos de 10 anos pagam R$80; 
• Conveniados com idade entre 10 e 30 anos pagam R$50; 
• Conveniados com idade entre 31 e 60 anos pagam R$ 95; 
• Conveniados com mais de 60 anos pagam R$130.*/	
	
	float idade, resultado = 100;
	
	cout<< "\ndigite a idade do conveniado ";
	cin >> idade;
	
	if (idade < 10){
		cout<< "\nO total a pagar e: R$" << (resultado + 80);
	} else if ((idade >= 10)&&(idade <=30)){
		cout<< "\nO total a pagar e: R$" << (resultado + 50);
	} else if ((idade >=31)&&(idade <=60)){
		cout<< "\nO total a pagar e: R$" << (resultado + 95);		
	} else if ((idade > 60)){
		cout<< "\nO total a pagar e: R$" << (resultado + 130);				
	}else{
		cout<<"\ncomando invalido";
	}
	
	cout<<"\nfim\n";
	system("pause");	
}
