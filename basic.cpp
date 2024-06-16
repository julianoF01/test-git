#include <iostream>

using namespace std;

void sayHello(){
	
	printf("ola mundo");

}

void contarNumeros(int num){

	for(int i = 0; i < num; i++){
		cout << i + 1;
	}

}

int main(){
	
	sayHello();

	contarNumeros(10);
	
	
	return 0;
}
