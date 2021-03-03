#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

void suma(int,int);

int main(){
	string n1,n2;
	cout<<"Esctrive el 1er valor:";
	cin<<n1;
	cout<<"Esctrive el 2do valor:";
	cin<<n2;
	suma(n1,n2);
	return 1;
}
void suma(int a,int b){
	string c=a+b;
	cout<<"la suma es:"<< c<<std::endl;
	return 1;
}
