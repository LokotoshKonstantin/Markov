#include"Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	list<string> test;
	cout << "Пример для слова = aabaabb и подстановок:1) ab->a 2) b->!.  3)  a->b " << endl;
	vector<pair<string, string>> w = { { "ab","a" },{ "b","!." },{ "a","b" } };
	string w1 = "aabaabb";

	test = Algorifm(w, w1, 3);
	for (auto x : test)
		cout << x << " -> ";

	cout << endl;
	/*
	list<string> res;
	int N;
	cout << "Введите N (кол-во подстановок) " << endl;
	cin >> N;
	string R;
	cout << "Введите R (слово) " << endl;
	cin >> R;
	vector < pair<string, string>> a(N);
	for (int i = 0; i < N; i++)
	{
		string s;
		cout << " Введите подстановку вида: ...->.....(Если еобходимо задать Eps, введите знак !)" << endl;
		cin >> s;
		a.push_back(WorkSubs(s));
    }
    res=Algorifm(a, R, N);
	for (auto x : res)
		cout << x << " -> ";*/

	system("pause");
}