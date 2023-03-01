#include <iostream>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 

double xplus(double a,double b,double delta){
	
	double x2;
	double result;
	double firsteq;
	double calca = 2*a;
	double calcb = b*(-1);
	double sqrtdelta;
	
	//CALCULANDO A RAIZ QUADRADA DO DELTA
	sqrtdelta = sqrt(delta);	
	//CALCULANDO X2
	firsteq = (calcb+(sqrtdelta));
	x2 = firsteq/calca;
	cout << "A RAÍZ 2 É: " << x2 << "\n";
	
	////////////FIM DO XMINUS///////////
	
}
 
double xminus(double a,double b,double delta){
	
	double x1;
	double result;
	double firsteq;
	double calca = 2*a;
	double calcb = b*(-1);
	double sqrtdelta;
	
	//CALCULANDO A RAIZ QUADRADA DO DELTA
	sqrtdelta = sqrt(delta);	
	//CALCULANDO X1
	firsteq = (calcb-(sqrtdelta));
	x1 = firsteq/calca;
	cout << "A RAÍZ 1 É: " << x1 << "\n";
	
	
}

double deltacalc(double a, double b, double c){
	
	
	string tout;
	
	string result;
	//CALCULANDO b^2
	double bexp;
	bexp = b * b;	
	
	//CALCULANDO 4 . a . c
	double acresult;
	acresult =  4*a*c;
	
	//CALCULANDO DELTA 
	double delta;
	delta = bexp - acresult;
	
	
	
	//VERIFICANDO SE DELTA É MENOR OU IGUAL A 0

	if(delta < 0){
		cout << "\n" << "NAO EXISTEM RAIZES";
		
	}else if(delta == 0){
		cout << "\n" << "SO EXISTE UMA RAIZ REAL";
	}else{
		cout << "\n" << "O DELTA é: " << delta << "\n";
		double resultxminus = xminus(a, b, delta);
		double resultxplus = xplus(a, b, delta);
				
	}

}



int main() {  
	double a, b, c;
	cout << "\n" << "INSURA O VALOR DE A: ";
	cin >> a;
	cout << "\n" <<"INSURA O VALOR DE B: ";
	cin >> b;
	cout << "\n" <<"INSURA O VALOR DE C: ";
	cin >> c;
	
	
	if(a > 0)
	cout << "Concavidade voltada para cima";
	else if(a == 0)
		cout << "Concavidade tangente ao eixo X";
	else
		cout << "Concavidade voltada para baixo";
	
	
	deltacalc(a, b ,c);
}


