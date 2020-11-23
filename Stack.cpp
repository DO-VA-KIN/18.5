#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
vector <string> Names;

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