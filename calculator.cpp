#include<iostream>
using namespace std;

class Calculator
{
	double Num1;
	double Num2;
	char op;
	public:
		void GETDATA()
		{   cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
			cout<<"\tEnter the First Digit --> ";
			cin>>Num1;
			cout<<"\tEnter the Second Digit --> ";
			cin>>Num2;
		}
		void OPTION()
		{	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*\n";
			cout<<"\tEnter the Operation as...\n";
			cout<<"\tEnter + for SUM or ADDTION \n";
			cout<<"\tEnter - for SUBSTRACION  \n";
			cout<<"\tEnter * for MULTIPLICATION \n";
			cout<<"\tEnter / for DIVISION \n";
			cout<<"\tOption --> ";
			
		}
		void SUM()
		{
			double SUMM=Num1+Num2;
			cout<<"\tSUM or ADDTION is -> "<<SUMM; 
		}	
		
			void SUB()
		{
			double SUBB=Num1-Num2;
			cout<<"\tSUBSTRACTION is -> "<<SUBB; 
		}	
			void MUL()
		{
			double MULL=Num1*Num2;
			cout<<"\tMULTIPLICATION is -> "<<MULL; 
		}	
			void DIV()
		{
			double DIVV=Num1/Num2;
			cout<<"\tDIVISION  is -> "<<DIVV; 
		}	

};


int main()
{ 
    char op,choice;
	do
	{
	system("cls");
	Calculator c1;
	c1.GETDATA();
	c1.OPTION();
	
	cin>>op;
	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*\n";
	switch(op)
		{
			case '+':c1.SUM();
					 break;
	     	case '-':c1.SUB();
					 break;
		    case '*':c1.MUL();
					 break;
		    case '/':c1.DIV();
					 break;
	
		  	default :cout<<"INVALID OPERATION.....";

		}
		cout<<"\n";
		cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*\n";
		 cout<<"\n";
		 cout<<"\tDo You Want to Continue [Yes/No] ? : --=> ";
   	     cin>>choice;
	}
	while(choice=='y'||choice=='Y');

}