#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    char shift;
    string word = "";

    unordered_map<char, vector<char>> umap;
    umap['q'] = {'q', 'w'};
    umap['w'] = {'q', 'e'};
    umap['e'] = {'w', 'r'};
    umap['r'] = {'e', 't'};
    umap['t'] = {'r', 'y'};
    umap['y'] = {'t', 'u'};
    umap['u'] = {'y', 'i'};
    umap['i'] = {'u', 'o'};
    umap['o'] = {'i', 'p'};
    umap['p'] = {'o', 'a'};
    umap['a'] = {'p', 's'};
    umap['s'] = {'a', 'd'};
    umap['d'] = {'s', 'f'};
    umap['f'] = {'d', 'g'};
    umap['g'] = {'f', 'h'};
    umap['h'] = {'g', 'j'};
    umap['j'] = {'h', 'k'};
    umap['k'] = {'j', 'l'};
    umap['l'] = {'k', ';'};
    umap[';'] = {'l', 'z'};
    umap['z'] = {';', 'x'};
    umap['x'] = {'z', 'c'};
    umap['c'] = {'x', 'v'};
    umap['v'] = {'c', 'b'};
    umap['b'] = {'v', 'n'};
    umap['n'] = {'b', 'm'};
    umap['m'] = {'n', ','};
    umap[','] = {'m', '.'};
    umap['.'] = {',', '/'};
    umap['/'] = {'.', '/'};

    cin >> shift;
    cin >> word; 

    if(shift == 'R') {
        for(int i = 0; i < word.size(); i++) {
            cout << umap[word[i]][0];
        }
    } else {
        for(int i = 0; i < word.size(); i++) {
            cout << umap[word[i]][1];
        }
    }

    return 0;
}