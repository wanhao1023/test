#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee s("��  ��", "��ɽ· 18 ��", "200020");
	Employee staff[3] = { "��  ��", s,Employee("��  ��", "����· 100 ��") };

	staff[1].ChangeName("��  ��");
	s.Display();
	for (int i = 0; i < 3; i++)
		staff[i].Display();
	return 0;
}
