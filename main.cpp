#include "md5.h"
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	MD5* md5 = new MD5();
	string str;
	cout << "��������Ҫ������ַ���" << endl; 
	getline(cin,str);
	md5->update(str);
	cout << "ԭ�ַ�����" << str << endl;
	cout << "MD5ֵ��" << md5->toString() << endl; 

	return 0;
}
