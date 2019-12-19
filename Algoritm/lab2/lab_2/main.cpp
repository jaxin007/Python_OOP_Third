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
cout<<"����i�� ��� ����'�����"<<endl;
cin>>comp[i].kod_computer;
cout<<"����i�� ����� ����'�����"<<endl;
cin>>comp[i].marka_computer;
cout<<"����i�� ��� ���������"<<endl;
cin>>comp[i].type_processor;
cout<<"����i�� ������� ������ ���������"<<endl;
cin>>comp[i].frequency_operation;
cout<<"����i�� ��'�� ���������� ���'��i"<<endl;
cin>>comp[i].RAM;
cout<<"����i�� ��'�� ��������� �����"<<endl;
cin>>comp[i].HDD;
cout<<"����i�� ���� ������� �� �����"<<endl;
cin>>comp[i].date_prom;
cout<<"����i�� ����i��� ����'����� � ������"<<endl;
cin>>comp[i].vartist_v_rublyah;
cout<<"����i�� �i���i��� ���������i�, ��i � � ��������i"<<endl;
cin>>comp[i].kilkist_ekz_v_nal;
cout<<"==========================================================================="<<endl;
}
}
void show(model_computer *comp, int n)
{
for(int i(0); i<n; i++)
{

cout<<i+1<<") ���� ��:"<<endl;
cout<<" ��� ����'����� :"
<<comp[i].kod_computer<<endl;
cout<<" ����� ����'����� :"
<<comp[i].marka_computer<<endl;
cout<<" ��� �������� :"
<<comp[i].type_processor<<endl;
cout<<"������� ������ ��������� :"
<< comp[i].frequency_operation<<endl;
cout<<"��'�� ����������i ���'��i :"
<<comp[i].RAM<<endl;
cout<<"��'�� �op������ ����� :"
<<comp[i].HDD<<endl;
cout<<"���� ������� �� ����� :"
<<comp[i].date_prom<<endl;
cout<<"����i��� ����'����� � ������ :"
<<comp[i].vartist_v_rublyah<<endl;
cout<<"�i���i��� ���������i�, �� � � ��������i :"
<<comp[i].kilkist_ekz_v_nal<<endl;
cout<<"=================================================================="<<endl;
}
}

void Search_type (model_computer mass[], string type_processor)
{int n;
for (int i = 0; i < n; i++)
{
if (type_processor == mass[i].type_processor) {
cout << " ��� ��������� " << mass[i].type_processor << endl << endl;
}
else
cout << "������� ";
}

}

int main()
{
setlocale(LC_CTYPE, "ukr");
string type_processor;
cout<<"����i�� �i���i��� ����� ��� ����������: ";
int n;
cin>>n;
model_computer *comp= new model_computer[n];
int key;
while(1)
{
m2:
cout<<"\t\t\t\t ����"<<endl;
cout<<"===========================================================================\n\n";
cout<<"1) ��i� ������."<<endl;
cout<<"2) ������� ���i. "<<endl;
cout<<"3) ������ �� �� ���� ���������. "<<endl;
cout<<"3) ���i�."<<endl;
cout<<"4) �������� �������."<<endl;
cout<<"\n===========================================================================\n\n";
cout<<"����i�� ����� ����: "<<endl;
cin>>key;
switch(key)
{
case 1: add(comp, n); break;
case 2: show(comp, n); break;
case 3: system("cls");
cout << " ��� ��������� "; cin >> type_processor;
Search_type(comp, type_processor); break;
case 4: exit(1); break;
case 5: system("cls"); break;
default: cout<<"������ ������ ����. ����i�� �� ���."<<endl; goto m2;
}
}
return 0;
}
