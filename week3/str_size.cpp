//str_size.cpp
#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
	// 프로그램 설명 출력
	cout << "Enter all words, then E0F ";
	vector<string> words;

	string max = "";
	string min = "";
	//입력 받기
	string word;
	while (cin >> word) {
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		//크기확인
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}
	cout <<
		"min word: " << min << " size: " << min.size() << endl <<
		"max word: " << max << " size: " << max.size() << endl;



	return 0;
	}