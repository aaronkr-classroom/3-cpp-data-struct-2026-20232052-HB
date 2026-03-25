//3-4
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words;
    string s;

    cout << "단어를 입력하세요. 입력을 끝내려면 엔터(빈 줄)를 누르세요." << endl;

    while (true) {
        cout << "단어 입력: ";
        getline(cin, s);   // 한 줄 전체 입력
        if (s.empty()) break;  // 빈 줄이면 종료
        words.push_back(s);
    }

    if (words.empty()) {
        cout << "단어가 적어도 하나는 있어야 합니다." << endl;
        return 1;
    }

    // 가장 짧은/긴 단어 찾기
    auto shortest = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return a.size() < b.size();
        });
    auto longest = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return a.size() < b.size();
        });

    cout << "가장 짧은 길이 : " << shortest << endl;
    cout << "가장 긴 길이 : " << longest << endl;

    return 0;
}