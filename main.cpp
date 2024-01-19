#include<iostream>
#include<conio.h>
#include<limits>
#include "Finance Tracking System.h"
void set_data(FTS &obj){
	double check;
			cout<<"Salary - ";
			cin>>check;
			
			obj.set_salary(obj.check_number(double(check)));
			cout<<"Bussiness income - ";
			cin>>check;
			obj.set_Business_income(obj.check_number(double(check)));
			cout<<"Saving - ";
			cin>>check;
			obj.set_saving(obj.check_number(double(check)));
			system("cls");
			
}
void choice(){
	FTS a;
	set_data(a);
	double num;
	int option;
	do{
	cout<<"1.Current Balance  "<<endl;
	cout<<"2.Expenses "<<endl;
	cout<<"3.Transition History"<<endl;
	cout<<"4.Exit"<<endl;
	cin>>option;
	num=a.check_number(option);
	system("cls");
	switch(int(num)){
		case 1:
			a.C_balance();
			break;
		case 2:
			a.Expense();
			break;
		case 3:
			a.expense_detail();
			break;
		case 4:
			break;
		default:
			cout<<"choose correct........."<<endl;
			break;
	}

	}while(option!=4);
}
void Welcome(){
	cout<<"\n\n                     *******************************************"<<endl;
	cout<<"                     WelCome To Personal Finance Tracking System"<<endl;
	cout<<"                     *******************************************"<<endl;
	cout<<"\n                             Press any key to Continue"<<endl;
	_getch();
	system("cls");
}
int main(){
	Welcome();
	choice();
}