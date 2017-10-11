#include <stdio.h>
#include <string.h>


void set_stop_symb(char model, int length, int arr_of_stop){
	int i;
	int stop;
	char dop_char;
	char symb;
	dop_char = *(model+length);
	*(model + length) = 0;

	for (i = 0; i < length; i++){
		symb = *(model+i);
		stop = strrchr(model, symb) - model;
		*(arr_of_stop + i) = stop;

	}

	*(model + length) = dop_char;


}


int main(){
	char model[16];
	gets(model);
	


	return 0;
}