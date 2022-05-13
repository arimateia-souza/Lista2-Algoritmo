#include <iostream>
using namespace std;
int main(){
	
		/*2. Leia um número
	 	verifique e escreva se este número é par ou ímpar. 
	 	Se for par, verifique e escreva se é 
		maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo.*/

	int x;

	cout<<"digite um numero:" << endl;
	cin>>x;
	if ((x %2 ==0) && (x >100)){
		cout<<"numero par maior que 100" <<endl;
	}else if ((x %2 ==0) && (x <0)){
		cout<< "numero par";
	} else 
		if (x < 0){
			cout<<"numero impar negativo";
		} else cout<<"numero impar positivo";
	

	system("pause\n");
}
