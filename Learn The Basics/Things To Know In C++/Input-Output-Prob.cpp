#include<iostream>
using namespace std;

int main()
 {
	char ch;
	cin>>ch;

	if(isalpha(ch))
	{
          if (isupper(ch))
		   {
            cout << 1;
          } 
		  else {
            cout << 0;
          }
        } 
		else {
          cout << -1;
        }

		return 0;
}
