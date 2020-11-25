#include <iostream>
using namespace std;

class Stack
{
public:
	void NameAdd(string newName);
	void NameDelete(string name);
	void ClearNames();

	string GetName(int position);
	vector<string> GetNames();

	int GetNamePosition(string name);
	int GetNamesSize();
};