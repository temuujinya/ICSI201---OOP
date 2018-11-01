#include <iostream>
#include<string.h>
using namespace std;

/**/
class EmployeeClass{
	//Нийт объектын тоог хадгалах статик хувьсагч
	static int totalEmployee;
	//Хандалтын түвшинг private байх гишүүн өгөгдлүүдийг тодорхойлж байна
	private:
		//ажилчны код
		int id;
		//ажилчнын нэр хадгалах гишүүн өгөгдөл
		char *name;
		//албан тушаал хадгалах гишүүн өгөгдөл
		char *position;
		//ажилласан цаг хадгалах гишүүн өгөгдөл
		float workTime;

	//хандалтын түвшин public байх функцууд	
	public:
		//анхдагч байгуулагч функц
		EmployeeClass();
		//хуулагч байгуулагч функц
		//праметрээр ирсэн функцыг дуудаж буй объектын гарааны утга болгоно
		EmployeeClass(EmployeeClass &emp);
		//байгуулагч функцийг параметртэйгээр дахин
		//тодорхойж байна
		//Хэрэглэгчээс объектын бүх гарааны утгийг авах функц
		EmployeeClass(int id, char *name, char *position, float worktime);
		//Устгагч функц объект устах үед устана
		~EmployeeClass();
		void copy(EmployeeClass *emp);
		//цалин бодох функц
		float calcSalary();
		//Объектын мэдээллийг дэлгэцлэх функц
		void display();
		void input();
		//ажилласан цагийг нэмэх функц
		bool incWorkingTime(float &addTime);
		// ID гишүүн өгөгдлийн утгыг буцаах функц
		int getID();
		// ID гишүүн функцэд утга оноох гишүүн функц
		void setID(int &n_id);
		// Name гишүүн өгөгдлийн утгыг буцаах функц
		char *getName();
		// Name гишүүн функцэд утга оноох гишүүн функц		
		void setName(char *n_name);
		// Position гишүүн өгөгдлийн утгыг буцаах функц
		char *getPosition();
		// Position гишүүн функцэд утга оноох гишүүн функц				
		void setPosition(char *n_name);
		// workTime гишүүн өгөгдлийн утгыг буцаах функц
		char getWorkTime();
		bool checkID(int id,EmployeeClass **employees,int totalEmployee);	
		void setWorkTime(int a);
		void setAll(int id, char *name, char *position,float workTime);
		
		// Нийт объектын тоог хадгалах 	totalEmployee 
		// статик гишүүн өгөгдлийн утгийг буцаах функц	
		static int getTotalEmployee();
	private:
		//захиралын цалин бодох функц
		float calcCeoaSalary();	
};

//Илгээсэн объектон массивыг цалингаар өсөх эрэмбээр эрэмбэлэх
//функц employees[] - объектон массив
//totalEmployee - нийт ажилчдын тоо
void sort(EmployeeClass **employees,int totalEmployee);
void sortName(EmployeeClass **employees, int totalEmployee);
/*
Ажилчны айдагаар массивын хэддүгээр индекст байгааг
олж буцаах функц employees[] - объектон массив
totalEmployee - нийт ажилчдын тоо
id - хайж буй ажилчны код
*/
int findById(EmployeeClass employees[], int id, int totalEmployee);