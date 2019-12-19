#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;


int main(int argc, char** argv) {
	cout<<"Vvedit rozmir masuvy [N x N] cherez probel: ";
	int n1, n2;
	cin>>n1>>n2;
	srand(time(NULL));
	int *mas[n1][n2] ;
	int *mas_bilshe_sum_diagonal_kilkist = new int[n1];
	int sum_diagonal = 0;
	int rozmer_diagonali = 0;
	if(n1>n2 || n1 == n2) rozmer_diagonali = n2;
	else rozmer_diagonali = n1;
	cout<<"\nZgenerovanij masuv:\n\n";
	for(int i = 0;i<n1;i++){
		*(mas_bilshe_sum_diagonal_kilkist+i) = 0;
		for(int j = 0;j<n2;j++){
			mas[i][j] = new int;
			*mas[i][j] = rand()%(0+9);
			cout<<"\t["<<*mas[i][j]<<"]";
		}
		cout<<"\n\n";
	}
	cout<<"Suma diagonali = ";
	for(int i=0;i<rozmer_diagonali; i++) sum_diagonal+= *mas[i][i];
	cout<<sum_diagonal<<"\n\nKilkist elementiv kozhnogo ryadka, yaki bilse za sumu diagonali:\n\n";
		for(int i = 0;i<n1;i++){
			for(int j = 0;j<n2;j++){
				if(*mas[i][j] > sum_diagonal) (*(mas_bilshe_sum_diagonal_kilkist+i))++;
			}
		cout<<"ryadok "<<i+1<<" = ["<<(*(mas_bilshe_sum_diagonal_kilkist+i))<<"]\n";
	}

	system("pause");
}
