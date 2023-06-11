#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("START ../inicializarTroca.exe");
    system("git add .");
    system("git commit -m ok");
    system("git push -u origin master");

    return 0;
}