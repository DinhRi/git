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
	cout<<" ket qua: "+ketqua;
	system("pause");
	return 0;
}