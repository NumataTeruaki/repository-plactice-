#include <iostream>
using namespace std;


int main(void)
{
	for(int i = 1; i <= 1000; i++){
		for(int j = 1; j <= 1000; j++){
			int c = 1000-i-j;

			if(c > 0 && i*i+j*j == c*c){
				cout << i*j*c << endl;
				return 0;
			}
		}
	}
}

