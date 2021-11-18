#include <iostream>
using namespace std;
int hieu(int a, int b)
{
	return a-b;
}
int tong(int a, int b)
{
	return a+b;
}
int tich(int a, int b)
{
	return a*b;
}
void ChanLe(int a)
{
	if(a%2==0)
	cout<<"so "+a+" la so chan";
	else cout<<"so "+a+" la so le";
}

int main()
{
	int a, b,ketqua;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if(phepToan=="-")
		ketqua=hieu(a,b);
	else if(phepToan=="+")
		ketqua=tong(a,b);
	else if(phepToan=="*")
		ketqua=tich(a,b);
	cout<<" ket qua: "+ketqua;
	cout<<"nhap so bat ky: ";
	cin>> a;
	ChanLe(a);
	system("pause");
	return 0;
}