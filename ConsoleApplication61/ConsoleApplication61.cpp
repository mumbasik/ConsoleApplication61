

#include <iostream>
using namespace std;

int main()
{
    //N1
    int i;
    cout << "number: " << "\n";
    cin >> i;
    int* ari = &i;
    if (*ari > 0) {
        cout << "Good \n";
    }
    else if (*ari < 0) {
        cout << "Not good \n";
    }
    else if (*ari == 0) {
        cout << "Equal to zero \n";
    }
    //N2
    int a;
    cout << "numb \n";
    cin >> a;
    int b;
    cout << "Numb2 \n";
    cin >> b;
        
    int* ara = &a;
    int* arb = &b;
    cout << "Plus " << *arb + *ara << "\n";
    cout << "Minus " << *arb - *ara << "\n";
    cout << *arb * *ara << "\n";
    //N3
    int e = 5;
    int q = 6;
    int* are = &e;
    int* arq = &q;
    int temp = 0;
    int* art = &temp;
     *art = *are;
     *are = *arq;        
     *arq = *art;
     cout << *are << "\n";
     cout << *arq << "\n";
}

