#include<iostream>
using namespace std;

int main(){
	double a, b, c;
	double discriminant, root1, root2, realPart, imaginaryPart;
	cout <<"Enter coefficients  a, b,and c:";
	cin >>  a >> b >>c;
	
	if(discriminant>0){
		root1 = (-b + sqrt(discriminant))) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout <<"Roots are real and different." << endl;
		cout<<"Root1 = " << root1 << endl;
		cout<<"Root2 = "<< root2 << endl;
	}
	
	else if (discrimiant==0){
		root1 = -b / (2 * a);
		cout <<" Roots are real and equal." <<endl;
		cout <<"Root=" << root1 << endl;
	}
	
	else{
		realPart=-b / (2 * a);
		imaginary Part = sqrt(-discriminant) / (2 * a);
		cout <<"Roots are real and imaginary." << endl;
		cout <<"Root1="<< real Part << " + " <<imaginary Part<< "i" << endl;
		cout <<"Root2="<< real part << " - " <<imaginnay Part<< "i" <<endl;
	}
	return 0;
};
	
	

