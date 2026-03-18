#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	/*
	 한 과목에서
	 중간고사 20퍼
	 기말고사 40퍼
	 평균과제 40퍼
	*/
	// 학생의 이름을 묻고 입력받기
	int option = 0;
	string name = " ", fname, lname;
	double att = 0.1,
		mid = 0.3,
		fin = 0.3,
		hw = 0.25,
		project = 0.05;


	while (option != 1 && option != 2) {
		cout << " Select country: 1. korea 2. USA";
		cin >> option;
		if (option == 1) {
			cout << "Name: ";

			cin >> name;

		}
		else if (option == 2) {
			cout << "First name + Last name: ";
			cin >> fname >> lname;
			name = fname + "  " + lname;

		}
		if (name != "") {
			cout << "Hello, " << name << "!" << endl;
		}
	}
	//중간고사와 기말고사 점수를 묻고 입ㄹ력받기

	double midterm, final, sum = 0;
	int count = 0;

	cout << "Mideterm + Ginal grades: ";
	cin >> midterm >> final; // 45 65 45줄바꿈 65
	//과제 점수를 물음
	cout << "All HW grades: + EOF: ";//EOF: CTRL + D CTRL + Z

	vector<double>homework;
	//입력을 위한 변수
	double in; //임시변수 과제 읽을때만

	//불변성: 지금까지 count개 점수를 입력 받았으며
	//입력 받은 점수의 합은 sum
	while (cin >> in) {
		homework.push_back(in);
	}

	//과제 점수의 입력 유무를 확인
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();//배열 크기
	if (size == 0) {
		cout << endl << "Enter your HW grades! Try again!"
			<< endl;
		return 1; // 오류코드
	}

	//점수를 정렬
	sort(homework.begin(), homework.end());
	// 정렬한 점수를 출력
	cout << "Sorted grades: ";
	for (int i = 0; i < homework.size(); i++) {
		cout << homework[i] << " ";
	}
	cout << endl;
	//과제 점수의 중앙값
	vec_sz mid_pt = size / 2;
	double median;
	median = size % 2 == 0 ?
		(homework[mid_pt] + homework[mid_pt - 1]) / 2 : //if 참
		homework[mid_pt]; // else 거짓

	// 추가: 중앙값과 평균 비교하기 
	double average, sum = 0; 
	for (int i = 0; i < homework.size(); i++) {
		sum += homework[i];

	}
	average = sum / homework.size();
	// 결과를 출력
	streamsize prec = cout.precision(); //나중에 이거 사용
	//정밀도가 다시 리셋할
	/*
	cout << name << "'s Final grade: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * (sum / count)
		<< setprecision(prec) << endl;
	*/
	cout << name << "'s Final grade: "
		<< (att * 100)
		+ (mid * midterm)
		+ (fin * final)
		+ (hw * (sum / count))
		+ (project * 100)
		<< endl;
	cout << name << "'s Final grade: "
		<< (att * 100)
		+ (mid * midterm)
		+ (fin * final)
		+ (hw * (sum / count))
		+ (project * 100)
		<< endl;




	return 0;
}