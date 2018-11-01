#include "employeeClass.h"
#include <stdlib.h> 
#include<ctime>
/* 
Анхдагч байгуулагч 
объект үүсэх үед дуудагдаж гарааны утга онооно
workTime-д санамсаргүй утга өгсөн нь тест хийх зориулалтаар
*/
EmployeeClass::EmployeeClass(){
	//ажилласан цагийг өөр өөр байлгах үүднээс туршилтан хэрэг болно
	workTime=rand() % 100 + 5;
	char defaultString[15] = "Todorhoiloogui";
	setAll(0, defaultString, defaultString, workTime);
	totalEmployee++;
}

/* 
Хуулагч байгуулагч
	Дуудсан объектод параметрэtotalEmployeeэр орж ирсэн объектын утгийг 
	гарааны утга болгож өгнө.
*/
EmployeeClass::EmployeeClass(EmployeeClass &emp){
	/*
	worktime болон id нь хуулагдаж гарааны утга болох хэрэггүй гэж бодлоо
	*/
	setAll(emp.getID(), emp.getName(), emp.getPosition(), emp.getWorkTime());
	//Объект 
	totalEmployee++;
}

/*
Параметртэй байгуулагч функц
Гараас бүх гишүүн өгөгдөлд гарааны утга авна
*/
EmployeeClass::EmployeeClass(int n_id, char *n_name, char *n_position, float n_worktime){
	setAll(n_id, n_name,n_position, n_worktime);
	totalEmployee++;
}

/*
Устгагч функц
ОБъект устах үед дуудагдах бөгөөд санах ойг чөлөөлж 
ойн цоорхой үүсхээс хамгаалж байна
*/
EmployeeClass::~EmployeeClass(){
	cout<<"Object "<<getName()<<" ustlaa"<<endl;
	delete [] name, position;
	totalEmployee--;
}


/*
Параметрт ирсэн бүх утга бүрийг тухайн гишүүн өгөгдлийн өгөгдөлд 
оноох set функцээр дамжуулж утга онооно.
*/
void EmployeeClass::setAll(int id, char *name, char *position,float workTime){
	setID(id);
	setName(name);
	setPosition(position);
	setWorkTime(workTime);
}

/*
Цалин бодох функц
*/
float EmployeeClass::calcSalary(){
	float back =getWorkTime()*2000;
	if(strcmp(getPosition(),"ceo")==0){
		back+=calcCeoaSalary();
	}
	return back;
}

void EmployeeClass::input(){
	int new_id;
	cout<<"ID"<<endl;
	cin>>new_id;
	char new_name[20];
	cout<<"Name"<<endl;
	cin>>new_name;
	char new_position[20];
	cout<<"position"<<endl;
	cin>>new_position;
	int time;
	cout<<"time"<<endl;
	cin>>time;
	setAll(new_id,new_name,new_position,time);
}
/*
Захиралын цалин бодох функц
*/
float EmployeeClass::calcCeoaSalary(){
	return getWorkTime()*5000;
}

/*
Дуудсан объектын мэдээллийг харуулах функц
*/
void EmployeeClass::display(){
	cout<<"Ajilchnii dugaar: "<<getID()<<endl;
	cout<<"Ajilchnii ner: "<<getName()<<endl;
	cout<<"Ajilchnii alban tushaal: "<<getPosition()<<endl;
	cout<<"Ajillasan tsag: "<<getWorkTime()<<endl;
}

/*
Ажилласан цагийг нэмэх функц
*/
bool EmployeeClass::incWorkingTime(float &addTime){
	if(addTime<=24){
		addTime+=getWorkTime();
		setWorkTime(addTime);
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
	name = new char[strlen(n_name)+1];
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
	position = new char[strlen(n_pos)+1];
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

void EmployeeClass::copy(EmployeeClass *emp){

	setAll(emp->getID(), emp->getName(), emp->getPosition(), emp->getWorkTime());	
	
}
//Нийт объектын тоог хадгалах статик хувьсагч
int EmployeeClass::totalEmployee=0;

// Нийт объектын тоог хадгалах 	totalEmployee EmployeeClass
// статик гишүүн өгөгдлийн утгийг буцаах функц	
int EmployeeClass::getTotalEmployee(){
	return totalEmployee;
}

//Илгээсэн объектон массивыг цалингаар өсөх эрэмбээр эрэмбэлэх
//функц employees[] - объектон массивsetName
//totalEmployee - нийт ажилчдын тооemp

void sortName(EmployeeClass **employees, int totalEmployee){
	//strcmp 
//    int i, j;
//    EmployeeClass *key; 
//    for (i = 1; i < totalEmployee-1; i++) 
//    { 
//        key = employees[i]; 
//        j = i-1; 

//        while (strcmp(key->getName(),employees[j]->getName())<0 && j>=0){ 
//            employees[j+1]=employees[j];
//            j = j- 1;
//        } 
//        employees[j+1]=key;
//    }

// EmployeeClass *key;
// for(int i=0;i<totalEmployee;i++){
// 	for(int j=i+1;j<totalEmployee;j++){
// 		if(strcmp(employees[i]->getName(),employees[j]->getName())>0){
// 			key = employees[j];
// 			employees[j] = employees[i];
// 			employees[i] = key;
// 		}
// 	}
// }
}

bool EmployeeClass:: checkID(int id,EmployeeClass **employees,int totalEmployee){
	for(int i=0;i<totalEmployee;i++){
		if(id==employees[i]->getID()){
			return false;
		}
	}
	return true;
}

// void sort(EmployeeClass **employees, int totalEmployee){
	 
//    int i, j;
//    EmployeeClass *key; 
//    for (i = 1; i < totalEmployee; i++) 
//    { 
//        key = employees[i]; 
//        j = i-1; 

//        while (j >= 0 && employees[j]->calcSalary() > key.calcSalary()) 
//        { 
//            employees[j+1]=employees[j]; 
//            j -= 1; 
//        } 

//        employees[j+1]=key; 
//    }
// }

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