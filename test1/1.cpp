#include <iostream>
#include <string>
using namespace std;

/*��ת�ַ�����������һ���ַ�����������ת�������*/
void fun1()
{
	cout << "please put in string: " << endl;
	string str;
	getline(cin, str);

	for(auto ch = str.rbegin(); ch != str.rend();ch++)
		cout << *ch ;
	cout << endl;
	system("pause");
}

int main()
{
	fun1();

	
	return 0;
}