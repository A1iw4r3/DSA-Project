#include<iostream>
#include<conio.h>
#include<limits>

using namespace std;
class node{
	private:
		double transition;
		string type;
		node* next=NULL;
	public:
		node(double transition,string type):transition(transition),type(type){
			
		}
		friend class stack;
};

class stack{
	private:
		node* head=NULL;
	public:
		void push(double transition,string type);
		void transition();
		void pop();
};


class FTS{
	private:
		double Balance;
		double salary;
		double Business;
		double savings;
		stack obj;
	public:
		FTS(){Balance=0;salary=0;savings=0;Business=0;}
		void set_salary(double salary);
		void set_Business_income(double Business);
		void set_saving(double savings);
		void C_balance();
		void expense_detail();
		double check_number(double number);
		void Expense();
};
