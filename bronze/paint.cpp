#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ifstream fin ("paint.in");
    ofstream fout ("paint.out");

    int a, b, c, d;
    fin >> a >> b >> c >> d;
    fin.close();

    if (b < c || d < a) fout << (b - a) + (d - c) << endl;
    else fout << max(b, d) - min(a, c) << endl;
}
