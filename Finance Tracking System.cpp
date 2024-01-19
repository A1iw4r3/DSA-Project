#include<iostream>
#include<conio.h>
#include<limits>
#include "Finance Tracking System.h"
using namespace std;
//STACK
void stack:: push(double transition,string type){
			node* tmp=new node(transition,type);
			if(head==NULL)
				head=tmp;
			else{
				tmp->next=head;
				head=tmp;
			}
		}
		void stack:: transition(){
			node* tmp=head;
			while(tmp!=NULL){
			cout<<tmp->type<<"  -  "<<tmp->transition<<endl;
			tmp=tmp->next;
			}
		}
		void stack::pop(){
			node* tmp=head;
			head=head->next;
			delete tmp;
		}





// FTS salary 
		void FTS:: set_salary(double salary){this->salary=salary;Balance+=salary;}
		void FTS:: set_Business_income(double Business){this->Business=Business;Balance+=Business;}
		void FTS:: set_saving(double savings){this->savings=savings;Balance+=savings;}
		void FTS::C_balance (){
			cout<<"Your current Balance is - "<<Balance<<endl<<endl;
		}
	// FTS expense detail	
	void FTS :: expense_detail(){
			obj.transition();
		}
	// FTS check_number
		double FTS:: check_number(double number){
	do {

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number: ";
            cin>>number;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (false);
    return number;
}
// FTS expense
		void FTS:: Expense(){
			int option;
			int amount;
			do{
			cout<<"1.Grocery - "<<endl;
			cout<<"2.Education - "<<endl;
			cout<<"3.Health - "<<endl;
			cout<<"4.Clothing - "<<endl;
			cout<<"5.Back - "<<endl;
			cout<<"choose - ";
			cin>>option;
			system("cls");
			switch(option){
				case 1:
					cout<<"Enter your amount you spent on Grocery - ";
					cin>>amount;
					if(amount>Balance){
						cout<<"Your Balance is sufficient for this transation!"<<endl;
						break;
						system("cls");
					}
					Balance-=check_number(double(amount));
					obj.push(amount,"Grocery");
					system("cls");
					break;
				case 2:
					cout<<"Ente your amount you spent on Education - ";
					cin>>amount;
					if(amount>Balance){
						cout<<"Your Balance is sufficient for this transation!"<<endl;
						break;
					}
					Balance-=check_number(double(amount));
					obj.push(amount,"Education");
					system("cls");
					break;
				case 3:
					cout<<"Enter your amount you spent on Health - ";
					cin>>amount;
					if(amount>Balance){
						cout<<"Your Balance is sufficient for this transation!"<<endl;
						break;
					}
					Balance-=check_number(double(amount));
					obj.push(amount,"Health");
					system("cls");
					break;
				case 4:
					cout<<"Enter your amount you spent on Clothing - ";
					cin>>amount;
					if(amount>Balance){
						cout<<"Your Balance is sufficient for this transation!"<<endl;
						break;
					}
					Balance-=check_number(double(amount));
					obj.push(amount,"Clothing");
					system("cls");
					break;
				case 5:
					break;
					
				default:
					cout<<"Choose Correct....."<<endl;
					break;					
			}
		}while(option!=5);
		}





