#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

struct model_computer{
int kod_computer;
string marka_computer;
string type_processor;
int frequency_operation;
int RAM;
int HDD;
string date_prom;
float vartist_v_rublyah;
int kilkist_ekz_v_nal;
};

void add(model_computer *comp, int n)
{
 setlocale(LC_CTYPE, "ukr");
cout<<"==========================================================================="<<endl;
for(int i=0; i<n; i++)
{
cout<<"Введiть код комп'ютера"<<endl;
cin>>comp[i].kod_computer;
cout<<"Введiть марку комп'ютера"<<endl;
cin>>comp[i].marka_computer;
cout<<"Введiть тип процесора"<<endl;
cin>>comp[i].type_processor;
cout<<"Введiть частоту роботи процесора"<<endl;
cin>>comp[i].frequency_operation;
cout<<"Введiть об'єм оперативної пам'ятi"<<endl;
cin>>comp[i].RAM;
cout<<"Введiть об'єм жорсткого диску"<<endl;
cin>>comp[i].HDD;
cout<<"Введiть дату випуску на ринок"<<endl;
cin>>comp[i].date_prom;
cout<<"Введiть вартiсть комп'ютера в рублях"<<endl;
cin>>comp[i].vartist_v_rublyah;
cout<<"Введiть кiлькiсть екземплярiв, якi є в наявностi"<<endl;
cin>>comp[i].kilkist_ekz_v_nal;
cout<<"==========================================================================="<<endl;
}
}
void show(model_computer *comp, int n)
{
for(int i(0); i<n; i++)
{

cout<<i+1<<") Опис ПК:"<<endl;
cout<<" Код комп'ютера :"
<<comp[i].kod_computer<<endl;
cout<<" Марка комп'ютера :"
<<comp[i].marka_computer<<endl;
cout<<" Тип процесор :"
<<comp[i].type_processor<<endl;
cout<<"Частота роботи процесора :"
<< comp[i].frequency_operation<<endl;
cout<<"Об'єм оперативноi пам'ятi :"
<<comp[i].RAM<<endl;
cout<<"Об'єм жopсткого диску :"
<<comp[i].HDD<<endl;
cout<<"Дата випуску на ринок :"
<<comp[i].date_prom<<endl;
cout<<"Вартiсть комп'ютера в рублях :"
<<comp[i].vartist_v_rublyah<<endl;
cout<<"Кiлькiсть екземплярiв, які є в наявностi :"
<<comp[i].kilkist_ekz_v_nal<<endl;
cout<<"=================================================================="<<endl;
}
}

void Search_type (model_computer mass[], string type_processor)
{int n;
for (int i = 0; i < n; i++)
{
if (type_processor == mass[i].type_processor) {
cout << " Тип процесора " << mass[i].type_processor << endl << endl;
}
else
cout << "Помилка ";
}

}

int main()
{
setlocale(LC_CTYPE, "ukr");
string type_processor;
cout<<"Введiть кiлькiсть даних для заповнення: ";
int n;
cin>>n;
model_computer *comp= new model_computer[n];
int key;
while(1)
{
m2:
cout<<"\t\t\t\t Меню"<<endl;
cout<<"===========================================================================\n\n";
cout<<"1) Ввiд данних."<<endl;
cout<<"2) Вивести данi. "<<endl;
cout<<"3) Знайти ПК по типу процесора. "<<endl;
cout<<"3) Вихiд."<<endl;
cout<<"4) Очистить консоль."<<endl;
cout<<"\n===========================================================================\n\n";
cout<<"Введiть номер меню: "<<endl;
cin>>key;
switch(key)
{
case 1: add(comp, n); break;
case 2: show(comp, n); break;
case 3: system("cls");
cout << " Тип процесора "; cin >> type_processor;
Search_type(comp, type_processor); break;
case 4: exit(1); break;
case 5: system("cls"); break;
default: cout<<"Такого пункта немає. Введiть ще раз."<<endl; goto m2;
}
}
return 0;
}
