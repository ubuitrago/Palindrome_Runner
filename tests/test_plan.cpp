#include "../utils.hpp"
#include <iostream>
#include <string>

/*Choosing test data that the main function 
would have filtered as valid before passing 
to isPalindrome()*/

string testData[] = {"asdfdsa","334","1234567890","a","1234321",
					"12d21","aaaabaaa",
					"qwertyuiopasdfghjklzxcvbnmnbvcxzlkjhgfdsapoiuytrewq"};

bool testResults[] = {true,false,false,true,true,true,false,true};

int main(){
	int i;
	int passed = 0;
	int failed = 0;
	//int exceptions = 0;

	cout << "Running test plan against isPalindrome()..." << endl;
	int arrsize = sizeof(testData)/sizeof(testData[0]);
	for(i=0; i<arrsize; i++){
		cout << "Test case: " << testData[i] << endl;
		if(isPalindrome(testData[i]) == testResults[i]){
			passed++;
		}

		else{
			cout << "Test case failed: " + testData[i] << endl;
			failed++;
		}
	}

	cout << "Total test cases: " << passed+failed << endl;
	cout << "Tests passed: " << passed << endl;
	cout << "Tests failed: " << failed << endl;

}
