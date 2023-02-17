#include <iostream>
using namespace std;

int main(){
    //declare variables 
    string seq;
    string frag;
    int count = 0;
    // prompt user to input 
    cout << "Enter the DNA Sequence:" << endl;
    cin >> seq;
    // loop to validate input
    for(int i = 0; i < seq.size(); i++){
        if (seq[i] != 'A' && seq[i] != 'C' && seq[i] != 'T' && seq[i] != 'G'){
            cout << "This is not a valid DNA sequence." << endl;
            return 0;
        }
    }
    // prompt user to enter DNA fragment
    cout << "Enter the DNA fragment to be searched:" << endl;
    cin >> frag;
    // loop to validate input
    for(int i = 0; i < frag.size(); i++){
        if (frag[i] != 'A' && frag[i] != 'C' && frag[i] != 'T' && frag[i] != 'G'){
            cout << "This is not a valid DNA sequence." << endl;
            return 0;
        }
    }
    // equation for loving for fragment size given DNA seq
    for (int i = 0; i <= seq.size()-frag.size(); i++){
        int j;
        for (j = 0; j < frag.size(); j++){
            if (seq[i+j] != frag[j]){
                break;
            }
        }
        // adds one to J after every loop
        if (j == frag.size()){
            count++;
        }
    }
    
    cout << "Number of occurrences: " << count << endl;
    return 0;
}
