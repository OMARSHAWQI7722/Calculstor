#include <iostream>
using namespace std;
int main() {
	int num1;
	int num2;
	char oper;
	
	cout<<"Enter The Number One:";
	cin>>num1;
	
		cout<<"Enter The Number Two:";
		cin>>num2;
		
			cout<<"Enter The Number operation: \n (Only +,-,*,/,%):";
			
			
			
		cin>>oper;
		
		switch (oper) {
			
			case '+':
				
				cout<<num1<< "+" <<num2 <<" = "<<num1 + num2<<endl;
				
				break;
				
				case '-':
				
					cout<<num1<< "-" <<num2 <<" = "<<num1 - num2<<endl;
				
				break;
				case '*':
				
				cout<<num1<< "*" <<num2 <<" = "<<num1 * num2<<endl;
				
				break;
				case '/':
					
						if(num2==0) {
				
				
				cout<<"Erorr divided by zero\n";}
				
				else
				
					cout<<num1<< "/" <<num2 <<" = "<<num1 / num2<<endl;
				
				
				break;
				
				case '%':
				
					cout<<num1<< "%" <<num2 <<" = "<<num1 % num2<<endl;
				
				break;
				
				default:
				
				
				cout<<"Erorr!Enter a correct number";
			
			
		}
		
		cout<<"This is my first project in c++\n DONE BY OMAR SHAWQI";
			
		
	
	return 0;
	
}