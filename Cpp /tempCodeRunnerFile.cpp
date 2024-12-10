













#include <iostream>
using namespace std;


struct Node {
    int coeff;     
    int exp;       
    Node* next;    
};


Node* createNode(int coeff, int exp) {
    Node* newNode = new Node();
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = nullptr;
    return newNode;
}


void insertNode(Node*& poly, int coeff, int exp) {
    Node* newNode = createNode(coeff, exp);
    if (poly == nullptr || poly->exp < exp) {
        newNode->next = poly;
        poly = newNode;
    } else {
        Node* temp = poly;
        while (temp->next != nullptr && temp->next->exp >= exp) {
            temp = temp->next;
        }
        if (temp->exp == exp) {
            temp->coeff += coeff;
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}


void displayPolynomial(Node* poly) {
    if (poly == nullptr) {
        cout << "0";
        return;
    }
    while (poly != nullptr) {
        cout << poly->coeff << "x^" << poly->exp;
        poly = poly->next;
        if (poly != nullptr)
            cout << " + ";
    }
    cout << endl;
}


Node* multiplyPolynomials(Node* poly1, Node* poly2) {
    Node* result = nullptr;
    for (Node* ptr1 = poly1; ptr1 != nullptr; ptr1 = ptr1->next) {
        for (Node* ptr2 = poly2; ptr2 != nullptr; ptr2 = ptr2->next) {
            int coeff = ptr1->coeff * ptr2->coeff;
            int exp = ptr1->exp + ptr2->exp;
            insertNode(result, coeff, exp);
        }
    }
    return result;
}


Node* inputPolynomial() {
    Node* poly = nullptr;
    int n, coeff, exp;

    cin >> n;
    for (int i = 0; i < n; ++i) {

        cin >> coeff >> exp;
        insertNode(poly, coeff, exp);
    }
    return poly;
}


bool isEmpty(Node* poly) {
    return poly == nullptr;
}

int main() {

    Node* poly1 = inputPolynomial();
    

    Node* poly2 = inputPolynomial();


    if (isEmpty(poly1) && isEmpty(poly2)) {
        cout << "Both polynomials are empty." << endl;
        return 0;
    }


    displayPolynomial(poly1);


    displayPolynomial(poly2);

    Node* result = multiplyPolynomials(poly1, poly2);


    displayPolynomial(result);

    return 0;
}
