/*
 * Zeros and Ones
 *
 * James the Android is a galaxy-famous detective. In his free time he likes to think about strings
 * containing zeros and ones. Once he thought about a string of length n consisting of zeroes and ones.
 * Consider the following operation: we choose any two adjacent positions in the string, and if one them
 * contains 0, and the other contains 1, then we are allowed to remove these two digits from the string,
 * obtaining a string of length n - 2 as a result. Now James thinks about what is the minimum length of
 * the string that can remain after applying the described operation several times (possibly, zero)?
 * Help him to calculate this number. Input First line of the input contains a single integer n (1  ≤ n  ≤  200000),
 * the length of the string that James has. The second line contains the string of length n consisting
 * only from zeros and ones. Output The minimum length of the string that may remain after
 * applying the described operations several times.
 *
 * Sample in = 4
 *             1100
 * Sample out = 0
 *
 * Author André Luján Longoria
 * Date 17/02/2020
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    int contZeros = 0;
    int contOnes = 0;
    int length = 0;
    string zerosOnes;
    int longitudFinal = 0;
    int result = 0;

    cin >> length;
    cin >> zerosOnes;

    for (int i = 0; i < length; ++i) {
        if(zerosOnes[i] == '1'){
            contOnes = contOnes + 1;
        }else
            contZeros = contZeros + 1;
    }

    longitudFinal = contZeros - contOnes;
    result = abs(longitudFinal);
    cout << result << endl;

    return 0;
}

/*
int length;
    string zerosOne;

    //Longitud del arreglo
    cin >> length;

    //Datos del arreglo
    for (int i = 0; i < length; ++i) {
        cin >> zerosOne[i];
    }

    //Comparar y eliminar
    for (int j = 0; j < length; ++j) {
        if(zerosOne[j] != zerosOne[j+1]){
            zerosOne.erase(j, 2);
        }
    }

    //Desplegar
    cout << zerosOne.length();

while(length < 1 || length > 200000){
        cin >> length;
    }
 */

