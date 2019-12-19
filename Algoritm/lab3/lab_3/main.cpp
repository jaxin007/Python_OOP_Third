#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <math.h>
#include <windows.h>
#include <deque>

using namespace std;
const int N=5; //������ ����

struct Deque
{
int data[N]; //������ ������
int last; //��������� �� �����
};
void Creation(Deque *D) //�������� ����
{ D->last=0; }
bool Full(Deque *D) //�������� ���� �� �������
{
if (D->last==0) return true;
else return false;
}
void AddL(Deque *D) //���������� �������� � ������
{
if (D->last==N)
{ cout<<"\n��� ��������\n\n"; return; }
int value;
cout<<"\n�������� > "; cin>>value;
for (int i=D->last; i>0; i--)
D->data[i]=D->data[i-1];
D->data[0]=value;
D->last++;
cout<<endl<<"������� ��������\n\n";
}
void AddR(Deque *D) //���������� �������� � �����
{
if (D->last==N)
{ cout<<"\n��� ��������\n\n"; return; }
int value;
cout<<"\n�������� > "; cin>>value;
D->data[D->last++]=value;
cout<<endl<<"������� ��������\n\n";
}
void DeleteL(Deque *D) //�������� ������� ��������
{
for (int i=0; i<D->last; i++) //�������� ���������
D->data[i]=D->data[i+1]; D->last--;
}
void DeleteR(Deque *D) //�������� ���������� ��������
{ D->last--; }
int OutputL(Deque *D) //����� ������� ��������
{ return D->data[0]; }
int OutputR(Deque *D) //����� ���������� ��������
{ return D->data[D->last-1]; }
int Size(Deque *D) //������ ����
{ return D->last; }
//******************************************
int main() //������� �������
{
setlocale(LC_ALL, "Russian");
Deque D;
Creation(&D);
char number;
do
{
cout<<"1. �������� ������� � ������ ����"<<endl;
cout<<"2. �������� ������� � ����� ����"<<endl;
cout<<"3. ������� ������ ������� ����"<<endl;
cout<<"4. ������� ��������� ������� ����"<<endl;
cout<<"5. ������� ������ ������� ����"<<endl;
cout<<"6. ������� ��������� ������� ����"<<endl;
cout<<"7. ������ ������ ����"<<endl;
cout<<"0. ����� �� ���������\n\n";
cout<<"����� ������� > "; cin>>number;
switch (number)
{
case '1': AddL(&D);
break;
//-----------------------------------------------
case '2': AddR(&D);
break;
//-----------------------------------------------
case '3':
if (Full(&D)) cout<<endl<<"��� ����\n\n";
else
{
DeleteL(&D);
cout<<endl<<"������� ������ �� ����\n\n";
} break;
//-----------------------------------------------
case '4':
if (Full(&D)) cout<<endl<<"��� ����\n\n";
else
{
DeleteR(&D);
cout<<endl<<"������� ������\n\n";
} break;
//-----------------------------------------------
case '5':
if (Full(&D)) cout<<endl<<"��� ����\n\n";
else cout<<"\n������ �������: "<<OutputL(&D)<<"\n\n";
break;
//-----------------------------------------------
case '6':
if (Full(&D)) cout<<endl<<"��� ����\n\n";
else cout<<"\n��������� �������: "<<OutputR(&D)<<"\n\n";
break;
//-----------------------------------------------
case '7':
if (Full(&D)) cout<<endl<<"��� ����\n\n";
else cout<<"\n������ ����: "<<Size(&D)<<"\n\n";
break;
//-----------------------------------------------
case '0': break;
default: cout<<endl<<"������� �� ����������\n\n";
break;
}
} while(number!='0');
system("pause");
}
