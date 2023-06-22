// Name: Kat Gilliland Date: June 4th,2023

#include <iostream> // Allows for input and output
#include <iomanip> // Allows for manipulation of output
#include <cmath> // Declares set of functions to perform mathematical operations
#include <string> // Allows use of strings

using namespace std;

// Bank class
class bank {

public:

    double totalAmt, initAmt, yearTotInt, months; // Variables that store total amount, initial amount, year-end interest, and months (for later calculations)

    // Main menu display
    void mainMenu() {
        cout << "-----------------------------------------------------------------" << endl;
        cout << "*****************************************************************" << endl;
        cout << "***************************Data Input****************************" << endl;
        cout << "Initial Investment Amount:" << endl;
        cout << "Monthly Deposit:" << endl;
        cout << "Annual Interest:" << endl;
        cout << "Number of Years:" << endl;
 
        system("PAUSE"); // Temporarily pauses program execution waiting for user to press any key to continue

    }

    // userInput is a function that validates the user input to ensure that only integers are passed through to the equations 
    double userInput() 
    {
        double num = NULL;
        bool success = false; 
        while (!success) // While loop that runs until there is a positive number as input
        {
            string input;
            cin >> input;
            if (!isNumber(input)) // isNumber validating if user input is numeric 
            {
                cout << "Input must be a positive number, try again" << endl; // Print statement letting user know input must be positive and numeric
            }
            else
            {
                num = stod(input); // Stod converts input from a string to a double 
                return num; 
                success = true;
            }
            
        }

  

    }

    bool isNumber(string s) { // isNumber differentiates between an integer or string
        for (int i = 0; i < s.length(); i++) { // Checking each character of the string
            if (isdigit(s[i]) == false) // 
                return false;// If it outputs false, the string contains letters or symbols

            return true;// If it outputs true, the the string is only integers
        }

    }


   

    // Displaying balance and year-end interest WITHOUT monthly deposit
    void displayWithoutMonthly(double initInv, double monDep, double annInt, double years) {
        cout << endl;
        cout << "-----------------------------------------------------------------";
        cout << "\n\tBalance and Interest Without Monthly Deposit" << endl;
        cout << "-----------------------------------------------------------------" << endl; // \t is a horizontal tab for formatting
        cout << "Year \t\t Year-End Balance\t Year-End Earned Interest\n";
        cout << "-----------------------------------------------------------------" << endl;

        totalAmt = initInv;
        // For loop calculating total amount WITHOUT monthly deposit
        for (int i = 0; i < years; i++) { 
            initAmt = totalAmt * (annInt / 100);

            totalAmt = totalAmt + initAmt;

            cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmt << "\t\t\t\t$" << initAmt << "\n";
        }
        

    }
    // Displaying balance and year-end interest WITH monthly deposit
    double displayWithMonthly(double initInv, double monDep, double annInt, double years) {
        totalAmt = initInv;

        cout << endl;
        cout << "-----------------------------------------------------------------";
        cout << "\n\tBalance and Interest With Monthly Deposit" << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "Year \t\t Year-End Balance\t Year-End Earned Interest\n";
        cout << "-----------------------------------------------------------------" << endl;
        // For loop calculating total amount WITH monthly deposit
        for (int i = 0; i < years; i++) {
            yearTotInt = 0;

            for (int j = 0; j < 12; j++) {

                initAmt = (totalAmt + monDep) * ((annInt / 100) / 12);

                yearTotInt = yearTotInt + initAmt;

                totalAmt = totalAmt + monDep + initAmt;
            }

            cout << (i + 1) << "\t\t$" << setprecision(2) << totalAmt << "\t\t\t\t$" << yearTotInt << endl;
        }
        return 0;

    }
    

};



// Main function
int main()
{
    
    bank airgeadBank;

    airgeadBank.mainMenu(); // Main menu getting user input
 
    
    // Initializing variables   
    double initInv = 0;
    double monDep = 0;
    double annInt= 0;
    double years = 0;

    // Display prior to capturing user input
    cout << "-----------------------------------------------------------------" << endl;
    cout << "*****************************************************************" << endl;
    cout << "***************************Data Input****************************" << endl;
    cout << "Initial Investment Amount: $";
    initInv = airgeadBank.userInput(); // Getting user input
    cout << "Monthly Deposit: $";
    monDep = airgeadBank.userInput(); // Getting user input
    cout << "Annual Interest: ";
    annInt = airgeadBank.userInput(); // Getting user input
    cout << "Number of Years: ";
    years = airgeadBank.userInput(); // Getting user input

    airgeadBank.displayWithoutMonthly(initInv, monDep, annInt, years); // Output static report 1 with user input
    cout << endl;
    airgeadBank.displayWithMonthly(initInv, monDep, annInt, years); // Output static report 2 with user input

    return 0; // Program ends
    

} 

