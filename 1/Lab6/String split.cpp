
#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string& target, char c)
{
	string temp;
	stringstream stringstream { target };
	vector<string> result;

	while (getline(stringstream, temp, c)) {
		result.push_back(temp);
	}

	return result;
}

int main(){

    string line;
    ifstream fin("topics.txt");
    string ss="";
    while(getline(fin,line)){
    ss=ss+line+"\n";
    }

    vector<string> s=split(ss,' ');

     for (int i = 0; i < s.size(); i++) {

        cout << s[i] << "\n";
    }


return 0;
}
