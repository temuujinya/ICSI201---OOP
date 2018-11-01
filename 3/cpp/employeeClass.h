
/**/
class EmployeeClass{
	public:
		int id;
		char name[20];
		char position[10];
		float workTime;
		
	public:
		void init();
		void input();
		float calcSalary();
		float calcCeoaSalary();
		void display();
		bool incWorkingTime(float &addTime);
};
