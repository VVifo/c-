// First Example
/*---------------------------------------------------------------*/
#include <iostream>

using namespace std;

void faktorial(int numb) {
    int rezult = 1;
    for (int i = 1; i <= numb; i++)
        rezult *= i;
    cout << numb << "! = " << rezult << endl;
}

int main() {
    int digit;
    cout << "Enter number:";
    cin >> digit;
    faktorial(digit);
    //system("pause");
    return 0;
}
/*---------------------------------------------------------------*/

//Second example
/*---------------------------------------------------------------*/
#include <iostream>

using namespace std;

int faktorial(int numb) {
    int rezult = 1;
    for (int i = 1; i <= numb; i++)
        rezult *= i;
    return rezult;
}

int main() {
    int digit;
    cout << "Enter number:";
    cin >> digit;
    cout << digit << "! =" << faktorial(digit) << endl;
    //system("pause");
    return 0;
}
/*---------------------------------------------------------------*/

//Third example
/*---------------------------------------------------------------*/
#include <iostream>

using namespace std;

bool palindrom5(int);

int main() {
    cout << "Enter 5zn-e chislo:";
    int in_number, out_number;
    cin >> in_number;
    out_number = in_number;
    if (palindrom5(in_number)) {
        cout << "Number" << out_number << "- palendrom" << endl;
    }
    else {
        cout << "This is not palendrom" << endl;
    }
    // system ( "pause");
    return 0;
}

bool palindrom5(int number) {
    int balance1, balance2, balance4, balance5;
    balance1 = number % 10;
    number = number / 10;
    balance2 = number % 10;
    number = number / 100;
    balance4 = number % 10;
    number = number / 10;
    balance5 = number % 10;
    if ((balance1 == balance5) && (balance2 == balance4)) {
        return true;
    }
    else {
        return false;
    }
}
/*---------------------------------------------------------------*/