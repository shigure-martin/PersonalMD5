#include "md5.h"
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	MD5* md5 = new MD5();
	string str;
	cout << "请输入需要计算的字符串" << endl; 
	getline(cin,str);
	md5->update(str);
	cout << "原字符串：" << str << endl;
	cout << "MD5值：" << md5->toString() << endl; 

	return 0;
}
