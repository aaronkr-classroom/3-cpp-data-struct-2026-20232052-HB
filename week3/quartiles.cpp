//quartiles.cpp
/*
25% > 출력



*/
#include <iostream>
#include <vector>
#include <algorithm> // sort()
using namespace std;

typedef vector<int>::size_type vec_sz;

int quartile_calc(vector<int> data, int quartile) {

	int size = data.size();
	vec_sz q1 = size / 4;
	vec_sz mid_pt = size / 2;
	vec_sz q3 = size / 4 * 3;
	// 25%

	// 50%

	// 75%
}
void print_quartiles(vector<int>data) {
	//데이터를 오름차순으로 정렬
	sort(data.begin(), data.end());
	int q1 = qiartile_calc(sorted_data, 25); //제1사분위수(25%)
    int q2 = qiartile_calc(sorted_data, 50); //제2사분위수(50 %)
	int q3 = qiartile_calc(sorted_data, 75); //제3사분위수(75 %)

	cout <<
		"Q1: " << q1 << endl <<
		"Q2(중앙값): " << q2 << endl <<
		"Q3: " << q3 << endl;

}

int main(void){
	//과제 점수의 중앙값
	vec_sz mid_pt = size / 2;
	double median;
	median = size % 2 == 0 ?
		(homework[mid_pt] + homework[mid_pt - 1]) / 2 : //if 참
		homework[mid_pt];


	return 0;
}