#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee s("张  三", "中山路 18 号", "200020");
	Employee staff[3] = { "李  四", s,Employee("王  五", "中南路 100 号") };

	staff[1].ChangeName("赵  六");
	s.Display();
	for (int i = 0; i < 3; i++)
		staff[i].Display();
	return 0;
}
