#include <iostream>
using namespace std;
#include <sstream>
#include <algorithm>

int main(){
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		int N, N2, result = 0, mult = 1;
		cin >> N;
		N2 = reverse(N);
		first = N2%10;
		result = result*mult + first;
		mult = mult*10;
		N2 = N2/10;
		while(N2 > 0)
		{
			last = N2%10;
			if (last < first)
			{
				last = last - 1;
				result = result * mult;
				mult = mult*10;
				result = result + last;
				while (N2 > 0)
				{
					N2 = N2/10;
					result = result*mult;
					mult = mult*10;
					result = result + 9;
				}
				break;
			}
			else
			{
				N2 = N2/10;
				result = result*mult + first;
				mult = mult*10;
				first = last;
			}

		}
		cout << "Case #" << i + 1 << ": << result << endl;
	}
	return 0;
}
