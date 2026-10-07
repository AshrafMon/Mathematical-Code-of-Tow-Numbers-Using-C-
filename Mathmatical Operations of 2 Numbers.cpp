#include <iostream>
using namespace std;

/*This Code is to do some mathmatic operation (Addition , Subtraction , Multiplication , division)
	And print the output of each operation*/
	
int main() {
	
	//Part One : Input
	int Num1=10,Num2=2; // Two input number 
	int Add_Out,Sub_Out,Mul_Out,Div_Out;  //Output Parameters
	 
	//Part Two : Mathmatic Operations
	
	Add_Out=Num1+Num2; 
	Sub_Out=Num1-Num2; 
	Mul_Out=Num1*Num2;
	Div_Out=Num1/Num2;
	
	//Part Three : Print the Outputs
	
	cout<<"We have Input Numbers Num1 = "<<Num1<<" , Num2 = "<<Num2<<endl;
	cout<<"The Addition Result of Num1+Num2 = "<<Add_Out<<endl;
	cout<<"The Subtraction Result of Num1-Num2 = "<<Sub_Out<<endl;
	cout<<"The Multiplication Result of Num1*Num2 = "<<Mul_Out<<endl;
	cout<<"The division Result of Num1/Num2 = "<<Div_Out<<endl;
   
    return 0;
}
