#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const double PI = acos(-1);
    double x1, y1, x2, y2, x3, y3, r;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;

    double DA = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)), DB = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    double p1 = sqrt(DA * DA - r * r), p2 = sqrt(DB * DB - r * r);

    double alpha = acos(r / DA);
    double beta = acos(r / DB);
    double gamma = abs(atan2(y1 - y3, x1 - x3) - atan2(y2 - y3, x2 - x3));
    if (gamma > PI)
        gamma = 2 * PI - gamma;

    double gip = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    double dif_y_to_pr = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / gip;

    double dot1 = (x3 - x1) * (x2 - x1) + (y3 - y1) * (y2 - y1);
    double dot2 = (x3 - x2) * (x1 - x2) + (y3 - y2) * (y1 - y2);
    if (dif_y_to_pr < r && dot1 > 0 && dot2 > 0)
        cout << fixed << setprecision(3) << p1 + p2 +  r * (gamma - alpha - beta);
    else
        cout << fixed << setprecision(3) << gip;
}
