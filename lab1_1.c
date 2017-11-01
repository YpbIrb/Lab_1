#include <stdio.h>
#include <string.h>

//установка стоп символов
void set_stop_symb(char* model, int length, int* stop_symb){
	int i;
	int stop;
	char dop_char;
	char symb;
	dop_char = *(model + length - 1);
	*(model + length - 1) = 0;
	for (i = 0; i < length - 1; i++){
		symb = *(model + i);
		stop = strrchr(model, symb) - model;
		*(stop_symb +i) = stop;
		
	}
	*(model + length - 1) = dop_char;
}


int finding_stop(char symb, int *arr_of_stop, char* model){
	for (int i = 0; i < strlen(arr_of_stop); i++){
		if (model[i] == symb)
			return arr_of_stop[i];
	}
	return strlen(model);
}


int main(){

	char model[16] = {0};
	gets(model);
	int len_model = strlen(model);
	int stop_symb[16] = {0};
	set_stop_symb(model, len_model, stop_symb);
	
	
	return 0;
}
