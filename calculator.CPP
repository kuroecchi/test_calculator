#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	
	int select;
	int num1,num2,total=0;
	char repeat;
	do{
		
		system("cls");
	cout<<"OPERATORS"<<endl;
	cout<<"1.ADDITION"<<endl;
	cout<<"2.SUBTRACTION"<<endl;
	cout<<"3.MULTIPLICATION"<<endl;
	cout<<"4.DIVISION"<<endl;
	cout<<"SELECT OPERATOR BY CHOOSING VIA A NO. : ";
	cin>>select;
	system("cls");
	
	
	switch(select)
	{
		case 1:
			{
				
				cout<<"ADDITION!"<<endl;
				cout<<"input a num1: ";
				cin>>num1;
				cout<<"input a num2: ";
				cin>>num2;
				total=num1+num2;
				cout<<"total: "<<total<<endl;
				break;
			}
		case 2:
			{
				cout<<"SUBTRACTION!"<<endl;
				cout<<"input a num1: ";
				cin>>num1;
				cout<<"input a num2: ";
				cin>>num2;
				total=num1-num2;
				cout<<"total: "<<total<<endl;
				break;
			}
		
		case 3:
			{
				system("cls");
				cout<<"MULTIPLICATION!"<<endl;
				cout<<"input a num1: ";
				cin>>num1;
				cout<<"input a num2: ";
				cin>>num2;
				total=num1*num2;
				cout<<"total: "<<total<<endl;
		
				break;
			}
		case 4:
			{
				cout<<"DIVISION!"<<endl;
				cout<<"input a num1: ";
				cin>>num1;
				cout<<"input a num2: ";
				cin>>num2;
				total=num1/num2;
				cout<<"total: "<<total<<endl;
	

				break;
			}	
		default:
			{
				return main();
			}
			
			break;
	}
	
	cout<<"Do you want to repeat Y/N: ";
	cin>>repeat;
}while((repeat== 'Y')||(repeat=='y'));
	getch();
}




