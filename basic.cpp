#include <iostream>

using namespace std;

void sayHello(){
	
	printf("ola mundo");

}

void contarNumeros(int num){

	int i = 1;
	while (i <= num){
		cout << i << endl;
		i++;
	}

}

int main(){
	
	sayHello();

	contarNumeros(10);
	
	
	return 0;
}
