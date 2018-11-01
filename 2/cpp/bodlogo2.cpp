#include<iostream>
using namespace std;
void swap(int &,int &);
void display(int &,int &);

int main(){


  int x,y;

  cin>>x>>y;
  display(x,y);
  swap(x,y);
  display(x,y);
}


void swap(int &x,int &y){
	int temp = x;
	x = y;
	y=temp;
}

void display(int &x,int &y){
	cout<<"x= "<<x<<" y="<<y<<endl;
}

