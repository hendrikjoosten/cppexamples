#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int adder(int a, int b, int c){

    return a + b + c;

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int input_number_1, input_number_2, input_number_3 = 0;
    int output_number_1;

    cin >> input_number_1 >> input_number_2 >> input_number_3;

    output_number_1 = adder(input_number_1 , input_number_2 , input_number_3);

    cout << output_number_1 << endl;

    return 0;
}
