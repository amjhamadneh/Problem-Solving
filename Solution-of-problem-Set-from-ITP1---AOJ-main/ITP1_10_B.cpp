#include <bits/stdc++.h>

using namespace std;
const double PI = 4.0 * atan(1.0);
int main(){
    double a, b, angle; cin >> a >> b >> angle;
    
    double rad = ( angle / 180 ) * PI;
    double area = a * b * sin(rad) * 0.5;
    printf("%.8lf\n", area);
    
    double length_c = sqrt(a * a + b * b - 2 * a * b * cos(rad));
    printf("%.8lf\n", a + b + length_c);

    double hight = b * sin(rad);
    printf("%.8lf\n", hight);

   return 0;
}
