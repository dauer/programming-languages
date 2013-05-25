#include <iostream>

using namespace std;

// C++11 delegating constructors
class M
{
    private:
        int x, y;
        char *p;
    public:
        M(int v) : x(v), y(0),  p(new char [10])  { cout << "Constructor taking 1 parameter" << endl; } //#1 target
        M(): M(0) { cout << "Delegating constructor" << endl; }
        void run() { cout << "Running..." << endl; }
};

int main() {

    M m = M();
    m.run();
}
