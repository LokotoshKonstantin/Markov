#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<list>

//функция для предствления подстановки(string) в пару(pair <string,string>)
std::pair < std::string, std::string > WorkSubs(std::string X)
{
	std::string r1 = X.substr(0, X.find_first_of("->"));
	std::string r2 = X.substr(X.find_first_of("->")+2,X.length());
	std::pair < std::string, std::string > res;
	res.first = r1;
	res.second = r2;
	return res;
}

bool Stop(std::pair<std::string, std::string > a)
{
	bool res = false;
	if (a.second.find('.') !=-1)
		res = true;
	return res;
}


bool Help(std::vector < std::pair<std::string, std::string>>  a, std::string  S)
{
	for (auto x : a)
	{
		if (S.find(x.first) != -1)
			return true;
	}
	return false;
}




std::string MyInput(std::string s, std::pair<std::string,std::string> a)
{
	std::string res;
	int i = 0;
	if (a.first=="!")
	{ 
		if (a.second.find('.') != -1)
			res = a.second + s;
		else
			if (i<30)
		      res = a.second + s + MyInput(res,a);
		i++;
	}
	else 
	{
		int i = s.find(a.first);
		if (i == -1)
			return"";
		else
		{
			if (a.second == "!")
					res = s.substr(0, i) + s.substr(i + a.first.length(), s.length());
			else
				if (a.second.find('.') != -1)
				     res = s.substr(0, i) + a.second.substr(0, a.second.length() - 1) + s.substr(i + a.first.length(), s.length());
				else
					res = s.substr(0, i) + a.second + s.substr(i + a.first.length(), s.length());
		}
	}
	return res;
}


std::list<std::string> Algorifm(std::vector < std::pair<std::string, std::string>>  a, std::string  S, int N)
{
	std::list<std::string> res;
	int index = 0;
	res.push_back(S);
	while (index < a.size())
	{
		if (MyInput(S, a[index]) != "")
		{
			S = MyInput(S, a[index]);
			res.push_back(S);
			if (Stop(a[index]) == true)
				return res;
			index = -1; 
			
		}
		
		index++;
	}
	return res;
}







