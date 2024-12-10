#include <iostream>
#include <map>
using namespace std;

// Function to read the polynomial and store it in a map (simplified form)
void readPolynomial(map<int, int>& poly, int numTerms) {
    for (int i = 0; i < numTerms; i++) {
        int coeff, exp;
        cin >> coeff >> exp;
        poly[exp] += coeff;  // Combine terms with the same exponent
    }
}

// Function to print the polynomial in the simplified form
void printPolynomial(const map<int, int>& poly) {
    bool first = true;
    for (auto it = poly.rbegin(); it != poly.rend(); ++it) {
        if (it->second != 0) {
            if (!first) cout << " + ";
            cout << it->second << "x^" << it->first;
            first = false;
        }
    }
    if (first) {
        cout << "0";  // Zero polynomial case
    }
    cout << endl;
}

// Function to check if a polynomial is zero
bool isZeroPolynomial(const map<int, int>& poly) {
    for (auto term : poly) {
        if (term.second != 0) return false;
    }
    return true;
}

// Function to compare two polynomials
bool arePolynomialsEquivalent(const map<int, int>& poly1, const map<int, int>& poly2) {
    return poly1 == poly2;  // Compare the two maps
}

int main() {
    int numTerms1, numTerms2;
    cin >> numTerms1 >> numTerms2;
    
    map<int, int> poly1, poly2;

    if (numTerms1 > 0) {
        readPolynomial(poly1, numTerms1);
    }
    
    if (numTerms2 > 0) {
        readPolynomial(poly2, numTerms2);
    }

    // Check for edge cases
    if (numTerms1 == 0 && numTerms2 == 0) {
        cout << "Both polynomials are empty: Comparison not possible" << endl;
        return 0;
    } 
    else if (numTerms1 == 0) {
        cout << "1st polynomial is empty: Comparison not possible" << endl;
        return 0;
    } 
    else if (numTerms2 == 0) {
        cout << "2nd polynomial is empty: Comparison not possible" << endl;
        return 0;
    }

    // Check if the first polynomial is zero
    if (isZeroPolynomial(poly1)) {
        cout << "Polynomial 1 is a zero polynomial" << endl;
        cout << "Polynomial 2: ";
        printPolynomial(poly2);
        cout << "Comparison not valid" << endl;
        return 0;
    }
    
    // Check if the second polynomial is zero
    if (isZeroPolynomial(poly2)) {
        cout << "Polynomial 1: ";
        printPolynomial(poly1);
        cout << "Polynomial 2 is a zero polynomial" << endl;
        cout << "Comparison not valid" << endl;
        return 0;
    }

    // Print both simplified polynomials
    cout << "Polynomial 1: ";
    printPolynomial(poly1);
    cout << "Polynomial 2: ";
    printPolynomial(poly2);

    // Check if the polynomials are equivalent
    if (arePolynomialsEquivalent(poly1, poly2)) {
        cout << "The polynomials are equivalent" << endl;
    } else {
        cout << "The polynomials are not equivalent" << endl;
    }

    return 0;
}
