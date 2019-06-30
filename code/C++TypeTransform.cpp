#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//string转char数组
	char c[20];
	string s = "12 34你好";//中文占2个字节，即2个char
	//strcpy_s(c, s.c_str());
	strncpy_s(c, s.c_str(), 6);//可以设定数量
	cout << c;

	char buf[10];
	string str("ABCDEFG");
	strncpy_s(buf, str.c_str(), 10);//可以设定数量

	//字符数组转化成string类型
	char ch[] = "ABCDEFG";
	string str1;
	str1 = ch;//在原有基础上添加可以用str += ch;

	/*1.string类型转为CString类型：
		先将string类型变量转换为const char*类型，然后再直接赋值就可以了。例如：
		CString cstr；
		sring str = “asdasd”；
		cstr = str.c_str();*/

	//string类型转为int类型：
	string stemp = "1234";
	int itemp = atoi(stemp.c_str());

	//sting类型转为double类型：
	string stemp = "1234";
	double dtemp = atof(stemp.c_str());

	



	
	

	
	return 0;
}