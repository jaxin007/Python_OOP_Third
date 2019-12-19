#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;


int main(int argc, char** argv) {
	srand(time(NULL));
	int n;
	cout<<"\tvvedite rozmir masuvy = ";
	cin>>n;
	cout<<"\nElements:\n\n";
	float *mas = new float[n];
	float *mas_minus;
	float *mas_plus;
	float *sum_mas_modul_minus = new float(0);
	float *sum_mas_modul_plus = new float(0);
	int *count_elem_mas_minus = new int(0);
	int *count_elem_mas_plus = new int(0);

	for(int i=0;i<n;i++){
		*(mas+i)=(rand ()%200-100)+0.01*(rand ()%99);
		if(i%6 == 0) cout<<endl<<endl;
		cout<<"["<<*(mas+i)<<"]  ";
		if(*(mas+i) < 0) (*(count_elem_mas_minus))++;
		else  (*(count_elem_mas_plus))++;
	}
	mas_minus = new float[*count_elem_mas_minus];
	mas_plus = new float[*count_elem_mas_plus];

	for(int i=0, j=0, k=0;i<n;i++){
		if(*(mas+i) < 0) {
		*(mas_minus+j) = *(mas+i); j++;
		}
		else {
			*(mas_plus+k) = *(mas+i); k++;
		}
	}
	cout<<"\n\n";
	cout<<"Dodatni elementu:\n\n";
		for(int i=0;i<*count_elem_mas_plus;i++){
				if(i%6 == 0) cout<<endl<<endl;
		cout<<"["<<*(mas_plus+i)<<"]  ";
		*(sum_mas_modul_plus) += abs(*(mas_plus+i));
		}

			cout<<"\n\n";
	cout<<"Vidjemni elementu:\n\n";
		for(int i=0;i<*count_elem_mas_minus;i++){
				if(i%6 == 0) cout<<endl<<endl;
		cout<<"["<<*(mas_minus+i)<<"]  ";
		*(sum_mas_modul_minus) += abs(*(mas_minus+i));
		}
	cout<<"\n\nSuma dodatnih elementiv po modulu = "<<*(sum_mas_modul_plus);
	cout<<"\n\nSuma vidjemnih elementiv po modulu = "<<*(sum_mas_modul_minus);
	return 0;
}
