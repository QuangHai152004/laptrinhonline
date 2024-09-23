#include <bits/stdc++.h>
using namespace std;

#define out(a) cout << fixed << setprecision(3) << a << "\n";

void check(double x) {
    if (x == 0) {
        out(0.000);
    } else if (x > 0) {
        out(sqrt(x));
        out(-sqrt(x));
    } else {
        cout << "vo nghiem\n";
    }
}

void find(double a, double b, double c){
    if (a == 0) {
        if (b == 0) {
            cout << (c == 0 ? "vo so nghiem\n" : "vo nghiem\n");
        } else {
            double x = -c / b;
            check(x);
        }
    } else {
        double b_div_2 = b / -2.0;
        double d = b_div_2 * b_div_2 - a * c;
        if (d < 0) {
            cout << "vo nghiem\n";
        } else if (d == 0) {
            double x = b_div_2 / a;
            check(x);
        } else {
            d = sqrt(d);
            double x1 = (b_div_2 - d) / a;
            double x2 = (b_div_2 + d) / a;

            bool test = false;

            if (x1 == 0) {
                out(0.000);
                test = true;
            }
            if (x1 > 0) {
                test = true;
                out(sqrt(x1));
                out(-sqrt(x1));
            }

            if (x2 == 0 && x1 != 0) {  
                out(0.000);
                test = true;
            }
            if (x2 > 0 && x1 != x2) {  
                test = true;
                out(sqrt(x2));
                out(-sqrt(x2));
            }

            if (!test) {
                cout << "vo nghiem\n";
            }
        }
    }
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    find(a, b, c);
    return 0;
}
