// KarpRabin.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
#define M 997
#define R 26
#define digit(S,i) (S[i]-'A')
typedef long long LL;
bool check(string P,string T,size_t i){
	if (P.length() != T.length())return false;
	for ( i = 0; i < P.length(); i++)
	{
		if (P[i]!=T[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
    return 0;
}

