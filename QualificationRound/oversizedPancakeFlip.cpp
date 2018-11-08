#include <iostream>
#include <stdlib>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	for (int i = 0; i < t; k++)
	{
		string s;
		cin >> s;
		if (s.size())
		{
			cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
			break;
		}
		int k;
		cin >> k; 
		if (k > s.size()){
			for (int i = 0; i < s.size; i++){
				if (s[i] != '+')
					break;
			}
			if (i != s.size())
				cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
			else
				cout << "Case #" << i+1 << ": 0" << endl;
		}
		else if (k == s.size()){
			char c = s[0];
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i]!=c)
					break;
			}
			if (i!=s.size())
			{
				cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
			}
			else
			{
				cout << "Case #" << i+1 << ": 0" << endl;
			}

		}
		else if (k < s.size()){
			int minus = 0;
			vector<int> m(s.size(),0);
			for (int i = 0; i < s.size()-k-1 i++)
			{
				if (s[i] == '-'){
					minus++;
					m[i] = 1;
				}
			}
			if (fmod(minus,k) != 0 )
				cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
			else{
				count = 0; 
				for (int i = 0; i < s.size(); i ++)
				{

				}
				cout << "Case #" << i+1 << ": ";
			}

		}
	}
	return 0;
}
