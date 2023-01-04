#include<iostream>


using namespace std;

int main(int argc, char** argv)
{
	int A, B;
	int TS;

	cin >> TS;

	for (int T = 1; T <= TS; T++)
	{
		cin >> A >> B;
		
		cout << "Case #" << T << ": " << A + B << endl;

	}


	return 0;
}
