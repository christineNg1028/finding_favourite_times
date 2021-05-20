#include <iostream>
using namespace std;

int main() {
    //have 4 digits representing the time (hrDig1 hrDig2 : min1 min2)
    //variable declaration + initialization
    int hr = 12, min1 = 0, min2 = 0, hrDig1, hrDig2, diff1, diff2, diff3, numArithmetic = 0;
    int duration = -1;

    //user input
    while (duration < 0 || duration > 1000000000 ) {
        cout << "Enter the duration that the clock is observed in minutes between 0 and 1000000000: ";
        cin >> duration;
    }

    //loop that iterates for number of minutes inputted
    for (int minutesPassed = 1; minutesPassed <= duration; minutesPassed++){
        if (min2 == 9){
            min2 = 0;
            if (min1 == 5){
                min1 = 0;
                if (hr == 12){
                    hr = 1;
                } else {
                    hr++;
                }
            } else {
                min1++;
            }
        } else {
            min2++;
        }

        //get hr digits separately
        hrDig1 = hr/10;
        hrDig2 = hr%10

        //find differences between digits
        diff2 = min1 - hrDig2;
        diff3 = min2 - min1;

        //3 differences if hr has 2 digits or 2 differences if hr has 1 digit
        if (hrDig1 != 0){
            diff1 = hrDig2 - hrDig1;

            //if equal differences counter++
            if (diff1 == diff2 && diff2 == diff3 && diff1 == diff3){
                numArithmetic++;
            }
        } else {
            if (diff2 == diff3){
                numArithmetic++;
            }
        }
    }

    //output numArithmetic
    cout << numArithmetic << endl;

    return 0;
}
