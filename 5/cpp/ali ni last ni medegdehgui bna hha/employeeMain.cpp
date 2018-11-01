#include "employeeClass.h"

int main(){
    //EmployeeClass классын объектон массив үүсгэж байна
	EmployeeClass *employees[2];
    for(int i=0;i<2;i++){
        char name[20];
        int id;
        employees[i] = new EmployeeClass();
        employees[i]->~employees();
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
    
//     /*
//     n- сонголтын дугаар хадгалах
//     id - гараас орох ажилчны код
//     total- нийт ажилчны тоо
//     */
// 	int n=0,id=0,total=0;
//    do{
// 		cout<<"--------------------"<<endl;
// 		cout<<"Songoltoo hiine uu"<<endl
// 			<<"1. Medeelel delgetsleh"<<endl
// 			<<"2. Tsalin bodoh"<<endl
// 			<<"3. Ajillasan tsag nemeh"<<endl
// 			<<"4. Ajiltan nemeh"<<endl
// 			<<"5. Ajiltan hewleh buh"<<endl
// 			<<"0. Garah"<<endl;
// 		cout<<"--------------------"<<endl;
// 			//гараас сонголтын дугаарыг авч байна
//             cin>>n;
//             //кодоор хайж ажилчны байгаа массивын индексиг заах хувьсагч
//             int response;
//             //сонголтод үндэслэж switch ашиглажбайнаfor(int i=0;i<=10;i++){
// 			switch(n){
// 				case 1: 
// 					cout<<"ajiltnii idiig oruulna uu"<<endl;
//                     //Мэдээлэл харах ажилчны кодыг авч байна
// 					cin>>id;
//                     //ажилчны кодоор массивын хэддүгээр индекст байгаа хайж байна
//                     response=findById(employees,id,EmployeeClass::getTotalEmployee());
//                     //Массивт байгаа эсэхийг шалгаж байна
//                     if(response>=0){
//                         //ажилчны мэдээллийг хэвлэж байна.
//                         employees[response]->display();
//                     }else{
//                         cout<<"Iim idtai hreglegch bhgui"<<endl;
//                     }    
//                     break;
// 				case 2: 
// 					cout<<"ajiltnii idiig oruulna uu"<<endl;
//                     //Цалин бодох ажилчны кодыг авч байна					
//                     cin>>id;
//                     //ажилчны кодоор массивын хэддүгээр индекст байгаа хайж байна
// 					response=findById(employees,id,EmployeeClass::getTotalEmployee());
//                     //Массивт байгаа эсэхийг шалгаж байна                    
//                     if(response>=0){
//                         // Ажилчны цалинг бодож байна
//                         cout<<"Tsalin: "<<employees[response]->calcSalary()<<endl;
//                     }else{
//                         cout<<"Iim idtai hreglegch bhgui"<<endl;
//                     }
//                     break;
// 				case 3: 
// 						float addTime;
// 						cout<<"ajiltnii idiig oruulna uu"<<endl;
//                         cin>>id;
//                         //ажилчны кодоор массивын хэддүгээр индекст байгаа хайж байна
// 						response=findById(employees,id,EmployeeClass::getTotalEmployee());
//                         if(response>=0){
//                             cout<<"NEmeh tsag"<<endl;
//                             //Нэмэх цагиг гараас авч байна
//                             cin>>addTime;
//                             //Тухайн ажилтанд цагийг нэмэж байна
//                             if(employees[response]->incWorkingTime(addTime)){
//                                 cout<<"Amjilttai nemedlee: "<<addTime<<" tsag"<<endl;
//                             }else {
//                                 cout<<"Tsag nemehed aldaa garlaa ihdee 24 tsag nemne"<<endl;
//                             }
//                         }else{
//                             cout<<"Iim idtai hreglegch bhgui"<<endl;
//                         }
// 						break;
// 				case 4:
// 					// // cout<<"Ajiltnii id-d daraah toog oruulna uu: "<<total<<endl;
// 					// //Дараагийн индекст утга авч байна
//                     // employees[total]->input();
//                     // //Нийт ажилчнаа нэгээр нэмэгдүүлж байна
//                     // total++;
//                     // //Цалингаар өсхөөр эрэмбэлж байна
//                     // sort(employees,total);
//                     for(int i=0;i<=10;i++){
//                         char name[20];
//                         int id;
//                         employees[i] = new EmployeeClass():
//                         cin>>id;
//                         while(!checkID(id,employees,employeeClass::getTotalEmployee())){
//                             cout<<"dahij oruul iim id tai ajiltan bna"<<endl;
//                         }
//                         employees[i]->setID(id);
//                         cin>>name;
//                         employees[i]->setName(name);
//                         cin>>name;
//                         employees[i]->setPosition(name);
//                         cout<<employees[i]->getName()<<" nemegdlee"<<endl;
//     }
// 					break;
//                 case 5:
//                     //Бүх ажилчны мэдээллийг хэвлэж байна
//                     //мөн тэдгээрийн цалинг
//                     for(int i=0; i<total;i++){
//                         cout<<"---------------"<<endl;
//                         employees[i]->display();
//                         cout<<"Tsalin: "<<employees[i]->calcSalary()<<endl;
//                         cout<<"---------------"<<endl;
//                     }
//                     break;
// 			}
//     //n нь 0 биш тохиолдолд давт
// 	}while(n!=0);

// }