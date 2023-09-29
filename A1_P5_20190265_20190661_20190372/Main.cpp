#include <iostream>
#include<set>
#include<string>
using namespace std;
void RecPermute(string soFar, string rest)
{
	set<string> setofPermutations;
	if (rest == "") // No more characters
		cout << soFar << endl;// Print the word
	else // Still more chars
	// For each remaining char
		
		for (int i = 0; i < rest.length(); i++) {
			string next = soFar + rest[i];// Glue next char
			string remaining = rest.substr(0, i) + rest.substr(i + 1);
			int size = setofPermutations.size();
			setofPermutations.insert(next);
			if (setofPermutations.size() > size) {
				RecPermute(next, remaining);
			}
			else
			{
				continue;
			}
		
			
		}


}
// "wrapper" function
void ListPermutations(string s) {

	RecPermute("", s);
}

int main()
{

	string word;
	cout << "Enter the word" << endl;
	cin >> word;
	cout << "The Permutations:" << endl;
	ListPermutations(word);
}
