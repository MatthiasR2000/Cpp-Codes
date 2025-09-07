#include <iostream>
using namespace std;
string stringErste5Buchstaben(string test);
string stringLetztenDreiBuchstaben(string test);
void istStringImArray(string stringArray[], int len);
bool istStringSoEnthalten(string stringArray[], int len);

int main() {
    string test = "nutriscore opfer";
    string wort = "op";
    const int length = 5;
    string stringArray[length] = {" Hello World", "soso", "Info1so1", "Info1", "osossos"};

    cout << "Ersten fünf Buchstaben: " << test.substr(0, test.size()) << endl;
    cout << "Letzten drei Buchstaben: " << stringErste5Buchstaben(test) << endl;
    cout << "Ist " << wort << " im String vorhanden: " << stringLetztenDreiBuchstaben(test) << endl;
    cout << "Funktion ist String im Array?" << endl;
    istStringImArray(stringArray,length);
    cout << endl;
    cout << "Funktion ist das Wort \"so\" im String?" << istStringSoEnthalten(stringArray,length) << endl;

    return 0;
}

string stringErste5Buchstaben(string test) {
    string wort = test.substr(0, 5);
    return wort;
}

string stringLetztenDreiBuchstaben(string test) {
    string wort = test.substr(test.size() - 3);
    return wort;
}

void istStringImArray(string stringArray[],int len) {
    for (int i = 0;i < len;i++) {
        if(stringArray[0].substr(0,5) == "Info1") {
            cout << stringArray[0] << "\n";
        }
        if(stringArray[len-1].substr(0,5) == "Info1") {
            cout << stringArray[len-1] << "\n";
        }
    }
}

bool istStringSoEnthalten(string stringArray[], int len) {
    int counter = 0;
    for (int i = 0; i < len; i++) {//Geht durch das string Array von Wort zu Wort jedes mal wird die zweite Schleife aktiviert
        string wort = stringArray[i];
        for (int j = 0; j < wort.size() - 1; j++) {//Geht im Wort von char zu char
            if (wort[j] == 's' && wort[j + 1] == 'o') {
                counter++;
            }
        }
    }
    cout << "\nCounter: " << counter << endl;
    return true;
}
