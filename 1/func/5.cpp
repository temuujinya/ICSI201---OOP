//5. Ugugdsun natural toonii  orongiin too bolon tsifruudiig oloh hreglegchiin fun
//cin cout обьектыг ашиглахын тулд хамаарагдах санг зааж өгч байна.
#include <iostream>
using namespace std;

/*
Үйлдэл: Функц зарлаж байна
Функцийн нэр: countDigits
Функцийн үүрэг: параметрээр орж ирсэн тооны цифрийн тоог буцаана
функцийн тухай: Параметрээр ирсэн тоог уг тоо 0 болтол 10-р хуваасаар тооны цифрийн уртыг олно.
Хувьсагчийн үүрэг:
    a - цифрийг тоолох тоо
*/
int countDigits(int a);

/*
Үйлдэл: Функц зарлаж байна
Функцийн нэр: foundDigit
Функцийн үүрэг: параметрээр орж ирсэн тооны цифрүүдийг тус тусад нь салгаж буцаах
функцийн тухай: Параметрээр ирсэн тоог уг тоо 0 болтол 10-р хуваасаар тооны цифрийн уртыг олно. хуваах бүртээ арын цифрийг
массит хийж өгнө. Хаягаар main функц байгаа массивт утга хийж өгч багаа тул утга буцаах шаардлагагүй гэж үзээд функцын void
Хувьсагчийн үүрэг:
    n - хэрэглэгчийн оруулсан цифрийг олох тоо
    *b - цифр бүрийг хадгалах массив
*/
void foundDigit(int n,int *b);

int main(){

    //хэрэглэгчээс оруулах утгийг хадгалах зорилгоор
	int n;
	//Хэрэглэгчид ойлгомжтой байх үүднээс cout объектын << оператороор заавар дэлгэцлэж байна
	cout<<"Toogoo oruulna uu->";

	//cin объектыг ашиглаж n хувьсагчид хэрэглэгчээс утга авч байна. Дараах хувьсагчид оноогдох утга нь дараах зүйлүүдэд ашиглагдана
	//Тэгш тоог хайх нийт тоо, хэрэглэгчээс хэдэн элемент авах, хэр урттай массив байгуулах зэрэгт ашиглагдах
	cin>>n;

    //totalDigit-д тооны уртыг хадгалж байна
	int totalDigit=countDigits(n);
	//тооны уртын хэмжээтэй массив үүсгэж байна.
	int a[totalDigit];
	//массивийн сүүлийн индексд тооны уртыг хадгалж байна
	a[totalDigit]=totalDigit;
	//found
	foundDigit(n,a);

	for(int i=totalDigit; i>=0;i--){
		cout<<a[i]<<" ";
	}


}

int countDigits(int a){
	int count = 0;
	while(a!=0){
		count++;
		a/=10;
	}
	return count;
}

void foundDigit(int n,int *a){
	int index=0;
	while(n!=0){
		*(a+index)=n%10;
		index++;
		n/=10;
	}
}
