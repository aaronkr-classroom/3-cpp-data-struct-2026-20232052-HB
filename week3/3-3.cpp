//3-3 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<string> words;
    string s;

    cout << "단어를 입력하세요. 입력을 끝내려면 엔터(빈 줄)를 누르세요." << endl;

    // 단어 입력 (빈 줄 입력 시 종료)
    while (true) {
        cout << "단어 입력: ";
        getline(cin, s);   // 한 줄 전체 입력
        if (s.empty()) {   // 빈 줄이면 종료
            break;
        }
        words.push_back(s);
    }

    if (words.empty()) {
        cout << "단어가 적어도 하나는 있어야 합니다." << endl;
        return 1;
    }

    // 정렬해서 같은 단어끼리 모으기
    sort(words.begin(), words.end());

    string temp = words[0];
    int cnt = 1;

    for (size_t i = 1; i < words.size(); i++) {
        if (words[i] == temp) {
            cnt++;
        }
        else {
            cout << temp << " : " << cnt << endl;
            temp = words[i];
            cnt = 1;
        }
    }

    // 마지막 단어 출력
    cout << temp << " : " << cnt << endl;

    return 0;
}
