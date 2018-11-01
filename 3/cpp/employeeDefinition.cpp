
#include <iostream>
#include<string.h>
#include "employeeClass.h"
using namespace std;


int main(){
	EmployeeClass employees[50];
	int n=0,id=0,total=0;
	do{
		cout<<"--------------------"<<endl;
		cout<<"Songoltoo hiine uu"<<endl
			<<"1. Medeelel delgetsleh"<<endl
			<<"2. Tsalin bodoh"<<endl
			<<"3. Ajillasan tsag nemeh"<<endl
			<<"4. Ajiltan nemeh"<<endl
			<<"0. Garah"<<endl;
		cout<<"--------------------"<<endl;
			cin>>n;
			switch(n){
				case 1: 
					cout<<"ajiltnii idiig oruulna uu"<<endl;
					cin>>id;
					if(id>=0 && id<=50){
						employees[id].display();
					}else{
						cout<<"Iim idtai ajiltan bhgui"<<endl;
					}break;
				case 2: 
					cout<<"ajiltnii idiig oruulna uu"<<endl;
					cin>>id;
					cout<<"TSalin:"<<employees[id].calcSalary()<<endl;break;
				case 3: 
						float addTime;
						cout<<"ajiltnii idiig oruulna uu"<<endl;
						cin>>id;
						cout<<"NEmeh tsag"<<endl;
						cin>>addTime;
						if(employees[id].incWorkingTime(addTime)){
							cout<<"Amjilttai nemedlee: "<<addTime<<" tsag"<<endl;
						}else {
							cout<<"Tsag nemehed aldaa garlaa ihdee 24 tsag nemne"<<endl;
						}break;
				case 4:
					employees[total].init();
					cout<<"Ajiltnii id-d daraah toog oruulna uu: "<<total<<endl; 
					employees[total].input();
					total+=1;
					break;
			}
	}while(n!=0);
	return 0;
}

void EmployeeClass::init(){
		id=0;
		strcpy(name,"Todorhoiloogui");
		strcpy(position,"todorhoiloogui");
		workTime=0;
}

void EmployeeClass::input(){
	cout<<"Ajilchnii ID oruulna uu"<<endl;
	cin>>id;
	cout<<"Ajilchii neriig oruulna uu"<<endl;
	cin>>name;
	cout<<"Ajilchii alban tushaal"<<endl;
	cin>>position;
	cout<<"Ajillasan tsag"<<endl;
	cin>>workTime;
}
float EmployeeClass::calcSalary(){
	float back =workTime*20000;
	if(strcmp(position,"ceo")==0){
		back+=calcCeoaSalary();
	}
	return back;
}

float EmployeeClass::calcCeoaSalary(){
	return workTime*10000;
}
void EmployeeClass::display(){
	cout<<"Ajilchnii dugaar: "<<id<<endl;
	cout<<"Ajilchnii ner: "<<name<<endl;
	cout<<"Ajilchnii alban tushaal: "<<position<<endl;
	cout<<"Ajillasan tsag: "<<workTime<<endl;
}

bool EmployeeClass::incWorkingTime(float &addTime){
	if(addTime<=24){
		workTime+=addTime;
		return 1;
	}else {
	return 0;
	}
}



