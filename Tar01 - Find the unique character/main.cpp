/*
 * Find the unique character
 *
 * Given a string that contains several characters in duplicate and continuous,
 * except  one character, find the unique character within the string.
 *
 * Sample input = AABCCDDEEFF
 * Sample output = B
 *
 * Author André Luján Longoria
 * Date 17/02/2020
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    int mitad;
    string unique;
    cin >> unique;

    mitad = unique.length()/2;

    if(unique.length() == 2 || unique.length() == 1){
        cout << unique[0] << endl;
        return 0;
    }

    if(unique[mitad] == unique[mitad+1]){
        mitad = mitad - 2;
        if(mitad <= 0){
            cout << unique[mitad+1] << endl;
            return 0;
        }
        for (int i = mitad; i > 0; i = i - 2) {
            if(unique[i] != unique[i+1]){
                cout << unique[i+1] << endl;
                break;
            }
        }
    }
    else if(unique[mitad] == unique[mitad-1]){
        mitad = mitad + 2;
        if(mitad >= unique.length()){
            cout << unique[mitad-1] << endl;
            return 0;
        }
        for (int j = mitad; j < unique.length(); j = j + 2) {
            if(unique[j] != unique[j-1]){
                cout << unique[j-1] << endl;
                break;
            }
        }
    }
    else{
        if(unique.length() == 3){
            cout << unique[0] << endl;
            return 0;
        }
        cout << unique[mitad] << endl;
    }

    return 0;
}

