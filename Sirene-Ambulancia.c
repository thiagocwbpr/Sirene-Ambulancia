#include <stdio.h>
#include <windows.h>

int main (){
	
	int compasso;
	
	for (compasso = 0 ; compasso <= 10; compasso++){
		if (compasso % 2 == 0){
			Beep(2000,1000);
		}
		else if (compasso % 2 == 1){
			Beep(1000,1000);
		}
	}
	for (compasso = 0 ; compasso <= 10; compasso++){
		if (compasso % 2 == 0){
			Beep(1500, 350);
		}
		else if (compasso % 2 == 1){
			Beep(1200, 400);
		}
	}
}
