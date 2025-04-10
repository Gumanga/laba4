#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Decimate {
public:
    string a, b;

    void init() {
        a = "";
        b = "";
    }

    void read() {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }

    void arithmetic() {
        
        int sortA = stoi(sortt(a));
        int sortB = stoi(sortt(b));

        cout << "sum: " << sortA + sortB << endl;
        cout << "subtraction: " << sortA - sortB << endl;
        cout << "equals: " << (sortA == sortB ? "true" : "false") << endl;
        cout << "a > b: " << (sortA > sortB ? "true" : "false") << endl;
    }

    void display() {
        cout << endl;
        
        cout << "Sorted a: " << sortt(a) << endl;
        
        cout << endl;
    }

    string sortt(string& num) {

        bool isNegative = (num[0] == '-');
        string digits = (num[0] == '+' || num[0] == '-') ? num.substr(1) : num;

        sort(digits.rbegin(), digits.rend());

        return
        
         isNegative ? "-" + digits : digits;
    }
};

int main() {

    Decimate obj;
    obj.init();
    obj.read();
    obj.display();
    obj.arithmetic();

    return 0;
}
