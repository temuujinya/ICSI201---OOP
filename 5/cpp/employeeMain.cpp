#include "employeeClass.h"

int main(){
    //EmployeeClass классын объектон массив үүсгэж байна
	EmployeeClass *employees[2];
    for(int i=0;i<2;i++){
        char name[20];
        int id;
        employees[i] = new EmployeeClass();
        cin>>id;
        while(!employees[i]->checkID(id,employees,EmployeeClass::getTotalEmployee())){
            cout<<"dahij oruul iim id tai ajiltan bna"<<endl;
            cin>>id;
        }
        employees[i]->setID(id);
        cin>>name;
        employees[i]->setName(name);
        cout<<"Neree oruul"<<endl;
        cin>>name;
        employees[i]->setPosition(name);
        cout<<employees[i]->getName()<<" nemegdlee"<<endl;   
    }
    // cout<<"ss"<<EmployeeClass::getTotalEmployee()<<endl;
    sortName(employees,EmployeeClass::getTotalEmployee());
    
    for(int i=0;i<2;i++){    
        employees[i]->display();
    }
    
    for(int i=0;i<2;i++){    
        delete employees[i];
    }
}
  
