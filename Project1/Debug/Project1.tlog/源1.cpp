


#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
	stu_Information stu1;
	string school, sclass, name;
	int number;
	school = stu1.setSchool(school);
	sclass = stu1.setClass(sclass);
	name = stu1.setName(name);
	number = stu1.setNum(number);
	cout << "学校名：" << school << "\n" << "班级：" << sclass << '\n';
	cout << "学生信息：\n" << "姓名：" << name << "\n" << "班级：" << sclass << "\n";


}
class stu_Information {
public:
	string setSchool(string school) {
		cout << "请输入学校名：";
		cin >> school;
		return school;
	}
	string setClass(string sclass) {
		cout << "请输入班级名：";
		cin >> sclass;
		return sclass;
	}
	string setName(string name) {
		cout << "请输入姓名：";
		cin >> name;
		return name;
	}
	int setNum(int number) {
		cout << "请输入学号：";
		cin >> number;
		return number;
	}

};
