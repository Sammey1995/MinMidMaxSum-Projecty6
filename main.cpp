//  ====================
    #include <iostream>
    using namespace std;
//  ====================

//  ===================
//  Function Prototypes
//  ===================
    int GetInt();

    int Max(int, int);
    int Min(int, int);

    int Max(int, int, int);
    int Min(int, int, int);
    int Sum(int, int, int);
    int Middle(int, int, int);
//  ==========================

//  ===========================
//  This is the Function main()
//  ===========================
    int main() {

        int a, b, c;
        char desire;

        cout << "Enter three integer values, and I (the computer) will output the minimum, the middle, " << endl;
        cout << "and the maximum of the three values. I will also output the sum of the three values." << endl;
        cout << endl;

    do {
        cout << endl;
        
        cout << "Enter three integer values please ==> ";

        a = GetInt();

        b = GetInt();

        c = GetInt();

        cout << "The minimum value is " << Min(a, b, c) << endl;

        cout << "The maximum value is " << Max(a, b, c) << endl;

        cout << "The middle value is " << Middle(a, b, c) << endl;

        cout << "The sum of values is " << Sum(a, b, c) << endl;

        cout << endl;

        cout << "Would you like to go again? (y/n)? ";
        cin >> desire;
        cout << endl;

    } while (desire == 'y');
    cout << endl;

//  Derkacht
    if (desire == 'n')
        cout << "I am finished." << endl;
        
    return 0;
    } // Function main()
//  ====================

//  ==============
    int GetInt() {

        int intValue;

//      Derkacht
//      cout << "Enter three integer values please ==> ";
//      cout << "Enter an integer value please ==> ";
        cin >> intValue;

        return intValue;
    } // Function GetInt()
//  ======================

//  =============================
    int Max(int numA, int numB) {

        if (numA >= numB)
            return numA;
        else
            return numB;
    }  // Function Max(int, int)
//  ============================

//  =======================================
    int Max(int numA, int numB, int numC) {

        return Max(Max(numA, numB), Max(numB, numC));

    } // Function Max(int, int, int)
//  ================================

//  =============================
    int Min(int numA, int numB) {

        if (numA >= numB)
            return numB;
        else
            return numA;
    }  // Function Min()
//  ====================

//  =======================================
    int Min(int numA, int numB, int numC) {

        return Min(Min(numA, numB), Min(numB, numC));
    } // Function Min()
//  ===================

//  =======================================
    int Sum(int numA, int numB, int numC) {

        return numA + numB + numC;
    } // Function Sum()
//  ===================

//  ==========================================
    int Middle(int numA, int numB, int numC) {   

        return Sum(numA, numB, numC) - Max(numA, numB, numC) - Min(numA, numB, numC);
    } // Function Middle()
//  ======================