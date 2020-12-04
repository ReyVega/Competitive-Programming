#include <iostream>
#include <string>
#include<stack>

using namespace std;

int S[1000000], 
    Extension[1000000],
    Frecuencia[1000000];

int main() {
	string cadena;
	stack<int> s;
    int maximoParentesis = 0;
	
	cin >> cadena;
	
	for(int i = 0; i < cadena.size(); i++) {
		if(cadena[i] == '(') {
			s.push(i);
		} else {
			if(s.empty()) {
				S[i] = -1; 
                Extension[i] = -1;
			} else {
				int index = s.top();
				s.pop();
				
				S[i] = index;
                Extension[i] = index;
				
				if((cadena[index - 1] == ')') && S[index - 1] >= 0 && (index >= 0)) {
                    Extension[i] = Extension[index - 1];
                }
				
				int length = i - Extension[i] + 1;
				Frecuencia[length]++;
				maximoParentesis = (maximoParentesis > length) ? maximoParentesis : length;
			}
		}
	}
	
	Frecuencia[0] = 1;
	
	cout<< maximoParentesis << " " << Frecuencia[maximoParentesis];
    return 0;
}