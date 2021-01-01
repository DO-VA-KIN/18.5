// less5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;


class Stack
{
private:
	int length = 0;
	string *Names = new string[0];
public:
	void NameAdd(string newName)
	{
		length++;

		string* localNames = new string[length];
		for (int i = 0; i < length - 2; i++)
		{
			localNames[i] = Names[i];
		}

		localNames[length - 1] = newName;
		Names = localNames;
		delete[]localNames;
	}

	void NameDelete(string nameDel)
	{
		int nameDelPos = -1;

		for (int i = 0; i < length - 1; i++)
		{
			if(Names[i] == nameDel)
			{
				nameDelPos = i;
				break;
			}
		}

		if (nameDelPos == -1)
			return;

		length--;
		string* localNames = new string[length];

		for (int i = 0; i < nameDelPos; i++)
		{
			localNames[i] = Names[i];
		}
		for (int i = nameDelPos; i < length; i++)
		{
			localNames[i] = Names[i + 1];
		}

		Names = localNames;
		delete[] localNames;
	}

	void ClearNames()
	{
		length = 0;
		Names = new string[length];
	}

	string* GetNames()
	{
		return Names;
	}

	int GetLength()
	{
		return length;
	}
};


int main()
{
    Stack Stack1{};
    Stack1.NameAdd("Sara");
    Stack1.NameAdd("Johny");
    Stack1.NameAdd("Kate");
    Stack1.NameAdd("Johny");
    Stack1.NameAdd("Masha");
    Stack1.NameDelete("st");
    Stack1.NameDelete("Johny");

    string *localNames = Stack1.GetNames();

	for (int i = 0; i < Stack1.GetLength(); i++)
	{
		cout << localNames[i];
	}

    Stack1.ClearNames();
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
