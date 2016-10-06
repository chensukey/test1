#include <iostream>
#include <string>
using namespace std;

/*逆转字符串——输入一个字符串，将其逆转并输出。*/
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