#include "employeeClass.h"

#include<ctime>
/* 
Анхдагч байгуулагч 
объект үүсэх үед дуудагдаж гарааны утга онооно
workTime-д санамсаргүй утга өгсөн нь тест хийх зориулалтаар
*/
EmployeeClass::EmployeeClass(){
	id=0;
	name = new char(strlen("Todorhoiloogui"));
	position = new char(strlen("Todorhoiloogui"));
	strcpy(name,"Todorhoiloogui");
	strcpy(position,"todorhoiloogui");
	workTime=rand() % 100 + 5;
	totalEmployee++;
}

/* 
Хуулагч байгуулагч
	Дуудсан объектод параметрэtotalEmployeeэр орж ирсэн объектын утгийг 
	гарааны утга болгож өгнө.
*/
EmployeeClass::EmployeeClass(EmployeeClass &emp){
	id = emp.id;
	strcpy(name,emp.name);
	strcpy(position,emp.position);
	// workTime = emp.workTime;
	workTime = 0;
	totalEmployee++;
}

/*
Параметртэй байгуулагч функц
Гараас бүх гишүүн өгөгдөлд гарааны утга авна
*/
EmployeeClass::EmployeeClass(int n_id, char *n_name, char *n_position, float n_worktime){
	id = n_id;
	name = new char[strlen(n_name)+1];
	position = new char[strlen(n_position)+1];
	workTime = n_worktime;
	totalEmployee++;
}

/*
Устгагч функц
ОБъект устах үед дуудагдах бөгөөд санах ойг чөлөөлж 
ойн цоорхой үүсхээс хамгаалж байна
*/
EmployeeClass::~EmployeeClass(){
	cout<<"Object "<<name<<" ustlaa"<<endl;
	delete [] name, position;
	totalEmployee--;
}

/*
Объектын гишүүн өгөгдлүүдэд гараас утга авах функц
*/

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

/*
Цалин бодох функц
*/
float EmployeeClass::calcSalary(){
	float back =workTime*2000;
	if(strcmp(position,"ceo")==0){
		back+=calcCeoaSalary();
	}
	return back;
}

/*
Захиралын цалин бодох функц
*/
float EmployeeClass::calcCeoaSalary(){
	return workTime*5000;
}

/*
Дуудсан объектын мэдээллийг харуулах функц
*/
void EmployeeClass::display(){
	cout<<"Ajilchnii dugaar: "<<id<<endl;
	cout<<"Ajilchnii ner: "<<name<<endl;
	cout<<"Ajilchnii alban tushaal: "<<position<<endl;
	cout<<"Ajillasan tsag: "<<workTime<<endl;
}

/*
Ажилласан цагийг нэмэх функц
*/
bool EmployeeClass::incWorkingTime(float &addTime){
	if(addTime<=24){
		workTime+=addTime;
		return 1;
	}else {
	return 0;
	}
}
// ID гишүүн өгөгдлийн утгыг буцаах функц
int EmployeeClass::getID(){
	return id;
}
// ID гишүүн функцэд утга оноох гишүүн функц
void EmployeeClass::setID(int &n_id){
	id = n_id;
}
// Name гишүүн өгөгдлийн утгыг буцаах функц
char *EmployeeClass::getName(){
	return name;
}
// Name гишүүн функцэд утга оноох гишүүн функц		
void EmployeeClass::setName(char *n_name){
	if(name){
		delete [] name;
	}
	strcpy(name, n_name);
}
// Position гишүүн өгөгдлийн утгыг буцаах функц
char *EmployeeClass::getPosition(){
	return position;
}
// Position гишүүн функцэд утга оноох гишүүн функц				
void EmployeeClass::setPosition(char *n_pos){
	if(position){
		delete [] position;
	}
	strcpy(name, n_pos);
}
// workTime гишүүн өгөгдлийн утгыг буцаах функц
char EmployeeClass::getWorkTime(){
	return workTime;
}
// setWorkTime гишүүн функцэд утга оноох гишүүн функц		
void EmployeeClass::setWorkTime(int a){
	workTime = a;
}
//Нийт объектын тоог хадгалах статик хувьсагч
int EmployeeClass::totalEmployee=0;

// Нийт объектын тоог хадгалах 	totalEmployee 
// статик гишүүн өгөгдлийн утгийг буцаах функц	
int EmployeeClass::getTotalEmployee(){
	return totalEmployee;
}

//Илгээсэн объектон массивыг цалингаар өсөх эрэмбээр эрэмбэлэх
//функц employees[] - объектон массив
//totalEmployee - нийт ажилчдын тоо
void sort(EmployeeClass employees[], int totalEmployee){
	 
   int i, j;
   EmployeeClass key; 
   for (i = 1; i < totalEmployee; i++) 
   { 
       key = employees[i]; 
       j = i-1; 

       while (j >= 0 && employees[j].calcSalary() > key.calcSalary()) 
       { 
           employees[j+1] = employees[j]; 
           j -= 1; 
       } 
       employees[j+1] = key; 
   }
}

/*
Ажилчны айдагаар массивын хэддүгээр индекст байгааг
олж буцаах функц employees[] - объектон массив
totalEmployee - нийт ажилчдын тоо
id - хайж буй ажилчны код
*/
int findById(EmployeeClass employees[],int id, int totalEmployee){
	for(int i=0;i<totalEmployee;i++){
		if(employees[i].getID()==id){
			return i;
		}
	}
	return -1;
}