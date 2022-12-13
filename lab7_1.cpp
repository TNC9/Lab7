#include<iostream>
#include<string>

using namespace std;
// Reversed text
string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}
// toupper text
string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}
// tolower text
string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
	string Answer;
    cout << "Input text: ";
	cin >> text;
    cout << "Reversed text: " << func1(text) << "\n";
	if(func1(func2(text))==func2(text)){
		Answer = "Yes";

	}else{
		Answer = "No";
	}
    cout << "Palindrome: " << Answer;
    return 0;
}
