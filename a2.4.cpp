#include <iostream>
#include <deque>
#include <string>

/*
* Jonathan Barajas
* D Harden
* Project 2.4
* 
* This program will cin a string and will check if said string is a palindrome
* note that this program will assume all lowercase and will ignore spaces and
* punctuation 
* 
*/

using namespace std;

int main() {
	string line;
	bool result = false;
	deque<char> string;

	
	getline(cin, line);


	for (int i = 0; i < line.length(); i++) {
		if (line[i] < 'z' && line[i] > 'a') {
			string.push_back(line[i]);
		}
	}

	while (string.size() > 1) {
		if (string.front() == string.back()) {
			result = true;
		}
		string.pop_front();
		string.pop_back();
	}

	if (result) {
		cout << "Yes, \"" << line << "\" is a palindrome" << endl;
	}
	else {
		cout << "No, \"" << line << "\" is not a palindrome" << endl;
	}
}

/* CONSOLE OUTPUT:
senile felines!
Yes, "senile felines!" is a palindrome

*/