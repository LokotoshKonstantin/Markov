#include"Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	list<string> test;
	cout << "������ ��� ����� = aabaabb � �����������:1) ab->a 2) b->!.  3)  a->b " << endl;
	vector<pair<string, string>> w = { { "ab","a" },{ "b","!." },{ "a","b" } };
	string w1 = "aabaabb";

	test = Algorifm(w, w1, 3);
	for (auto x : test)
		cout << x << " -> ";

	cout << endl;
	/*
	list<string> res;
	int N;
	cout << "������� N (���-�� �����������) " << endl;
	cin >> N;
	string R;
	cout << "������� R (�����) " << endl;
	cin >> R;
	vector < pair<string, string>> a(N);
	for (int i = 0; i < N; i++)
	{
		string s;
		cout << " ������� ����������� ����: ...->.....(���� ��������� ������ Eps, ������� ���� !)" << endl;
		cin >> s;
		a.push_back(WorkSubs(s));
    }
    res=Algorifm(a, R, N);
	for (auto x : res)
		cout << x << " -> ";*/

	system("pause");
}