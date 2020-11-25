// less5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;


class Stack
{
private:
	vector <string> Names;
public:
	void NameAdd(string newName)
	{
		if (find(Names.begin(), Names.end(), newName) == Names.end())
			Names.push_back(newName);
	}

	void NameDelete(string name)
	{
		auto iter = find(Names.begin(), Names.end(), name);
		if (iter != Names.end())
		{
			Names.erase(iter);
			Names.shrink_to_fit();
		}
	}

	string GetName(int position)
	{
		return Names[position];
	}

	int GetNamePosition(string name)
	{
		return distance(Names.begin(), find(Names.begin(), Names.end(), name));
	}

	int GetNamesSize()
	{
		return Names.size();
	}

	void ClearNames()
	{
		Names.clear();
	}

	vector<string> GetNames()
	{
		return Names;
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

    for (int i = 0; i < Stack1.GetNamesSize(); i++)
    {
        cout << Stack1.GetName(i) << "\n";
    }
    vector<string> NamesVector = Stack1.GetNames();
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
