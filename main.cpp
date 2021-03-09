// C5 P3 Using STL Algorithms

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <cstdlib>

using namespace std;

void displayRoster();
void find();
void random_shuffle();
void sort();

vector<string>::const_iterator iter;
vector<string> names {"Hinata Shōyō", "Kageyama Tobio", "Miya Atsumu", "Miya Osamu",
						"Kenma Kozume", "Kōrai Hoshiumi", "Kōtarō Bokuto", "Akaashi Keiji",
							"Daichi Sawamura", "Sugawara Koushi", "Oikawa Tōru", "Iwaizumi Hajime"};
vector<string> group1 {"Hinata Shōyō", "Kageyama Tobio", "Miya Atsumu", "Miya Osamu"};
vector<string> group2 {"Kenma Kozume", "Kōrai Hoshiumi", "Kōtarō Bokuto", "Akaashi Keiji"};
vector<string> group3 {"Daichi Sawamura", "Sugawara Koushi", "Oikawa Tōru", "Iwaizumi Hajime"};

int main()
{
	displayRoster();
	sort();
    find();
    random_shuffle();
	    
	cout << "\n\n🐺 End of Program 🐺";    
	return 0;
}
//Function Definitions
void displayRoster()
{
	cout << "🐺 MSBY Black Jackals Roster 🐺\n\n";
	
    cout << "Here is the list of names:\n\n";
    for (iter = names.begin(); iter != names.end(); ++iter)
	{
		cout << *iter << endl;
	}
	
}
void find()
{
    string name;
    cout << "\nInput a name to find: ";
    getline(cin, name);
    iter = find(names.begin(), names.end(), name);
    
    if (iter != names.end())
	{
		cout << "* Player found *\n";
	}
    else
	{
		cout << "* Player not found *\n";
	}
}
void random_shuffle()
{
	cout << "\nNames have been randomized:\n\n";
	random_shuffle(names.begin(), names.end());
	for (iter = names.begin(); iter != names.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nPlayers have been split into three groups:\n\n";
	//group1
	random_shuffle(group1.begin(), group1.end());
	for (iter = group1.begin(); iter != group1.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << string(40, '-') << "\n";
	//group2
	random_shuffle(group2.begin(), group2.end());
	for (iter = group2.begin(); iter != group2.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << string(40, '-') << "\n";
	//group3
	random_shuffle(group3.begin(), group3.end());
	for (iter = group3.begin(); iter != group3.end(); ++iter)
	{
		cout << *iter << endl;
	}
}
void sort()
{
	cout << "\nNames have been sorted (Last, First):\n\n";
    sort(names.begin(), names.end());
    for (iter = names.begin(); iter != names.end(); ++iter)
	{
		cout << *iter << endl;
	}
}