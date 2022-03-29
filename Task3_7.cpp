#include<bits/stdc++.h>
#include <map>

using namespace std;

void encryption(){
    string str;
    cout << "Enter Text to encrypt: ";
    getline(cin,str);
    for(int i=0; i<str.length();i++) {
        char word = str[i];
        if (word == 'a') {
            cout << ".- ";
        } else if (word == 'b') {
            cout << "-... ";
        } else if (word == 'c') {
            cout << "-.-. ";
        } else if (word == 'd') {
            cout << "-.. ";
        } else if (word == 'e') {
            cout << ". ";
        } else if (word == 'f') {
            cout << "..-. ";
        } else if (word == 'g') {
            cout << "--. ";
        } else if (word == 'h') {
            cout << ".... ";
        } else if (word == 'i') {
            cout << ".. ";
        } else if (word == 'j') {
            cout << ".--- ";
        } else if (word == 'k') {
            cout << "-.- ";
        } else if (word == 'l') {
            cout << ".-.. ";
        } else if (word == 'm') {
            cout << "-- ";
        } else if (word == 'n') {
            cout << "-. ";
        } else if (word == 'o') {
            cout << "--- ";
        } else if (word == 'p') {
            cout << ".--. ";
        } else if (word == 'q') {
            cout << "--.- ";
        } else if (word == 'r') {
            cout << ".-. ";
        } else if (word == 's') {
            cout << "... ";
        } else if (word == 't') {
            cout << "- ";
        } else if (word == 'u') {
            cout << "..- ";
        } else if (word == 'v') {
            cout << "...- ";
        } else if (word == 'w') {
            cout << ".-- ";
        } else if (word == 'x') {
            cout << "-..- ";
        } else if (word == 'y') {
            cout << "-.-- ";
        } else if (word == 'z') {
            cout << "--.. ";
        } else if (word == '1') {
            cout << ".---- ";
        } else if (word == '2') {
            cout << "..--- ";
        } else if (word == '3') {
            cout << "...-- ";
        } else if (word == '4') {
            cout << "....- ";
        } else if (word == '5') {
            cout << "..... ";
        } else if (word == '6') {
            cout << "-.... ";
        } else if (word == '7') {
            cout << "--... ";
        } else if (word == '8') {
            cout << "---.. ";
        } else if (word == '9') {
            cout << "----. ";
        } else if (word == '0') {
            cout << "----- ";
        } else if (word == '?') {
            cout << "..--.. ";
        } else if (word == '!') {
            cout << "-.-.-- ";
        } else if (word == '.') {
            cout << ".-.-.- ";
        } else if (word == ',') {
            cout << "--..-- ";
        } else if (word == ';') {
            cout << "-.-.-. ";
        } else if (word == ':') {
            cout << "---... ";
        } else if (word == '+') {
            cout << ".-.-. ";
        } else if (word == '-') {
            cout << "-....- ";
        } else if (word == '/') {
            cout << "-..-. ";
        } else if (word == '=') {
            cout << "-...- ";
        } else if (word == ' ') {
            cout << "\t ";
        }
    }
}

void decryption(){
    string str,word,decoder;
    int spaceChecker;
    cout << "Enter morse code to decoder: ";
    getline(cin,str);
    str+=" ";
    for(int i=0; i< str.length();i++){
        char word = str[i];
        if (word == ' '){
            spaceChecker +=1;
        }else{
            spaceChecker = 0;
            decoder += word;
        }
        if (spaceChecker== 3){
            cout<< " ";
            spaceChecker=0;
        }else if (spaceChecker == 1){
            if (decoder == ".-"){
                cout<<"a";
                decoder = "";
            }else if(decoder == "-..."){\
                cout<<"b";
                decoder = "";
            }else if(decoder == "-.-."){\
                cout<<"c";
                decoder = "";
            }else if(decoder == "-.."){\
                cout<<"d";
                decoder = "";
            }else if(decoder == "."){\
                cout<<"e";
                decoder = "";
            }else if(decoder == "..-."){\
                cout<<"f";
                decoder = "";
            }else if(decoder == "--."){\
                cout<<"g";
                decoder = "";
            }else if(decoder == "...."){\
                cout<<"h";
                decoder = "";
            }else if(decoder == ".."){\
                cout<<"i";
                decoder = "";
            }else if(decoder == ".---"){\
                cout<<"j";
                decoder = "";
            }else if(decoder == "-.-"){\
                cout<<"k";
                decoder = "";
            }else if(decoder == ".-.."){\
                cout<<"l";
                decoder = "";
            }else if(decoder == "--"){\
                cout<<"m";
                decoder = "";
            }else if(decoder == "-."){\
                cout<<"n";
                decoder = "";
            }else if(decoder == "---"){\
                cout<<"o";
                decoder = "";
            }else if(decoder == ".--."){\
                cout<<"p";
                decoder = "";
            }else if(decoder == "--.-"){\
                cout<<"q";
                decoder = "";
            }else if(decoder == ".-."){\
                cout<<"r";
                decoder = "";
            }else if(decoder == "..."){\
                cout<<"s";
                decoder = "";
            }else if(decoder == "-"){\
                cout<<"t";
                decoder = "";
            }else if(decoder == "..-"){\
                cout<<"u";
                decoder = "";
            }else if(decoder == "...-"){\
                cout<<"v";
                decoder = "";
            }else if(decoder == ".--"){\
                cout<<"w";
                decoder = "";
            }else if(decoder == "-..-"){\
                cout<<"x";
                decoder = "";
            }else if(decoder == "-.--"){\
                cout<<"y";
                decoder = "";
            }else if(decoder == "--.."){\
                cout<<"z";
                decoder = "";
            }else if(decoder == ".----"){\
                cout<<"1";
                decoder = "";
            }else if(decoder == "..---"){\
                cout<<"2";
                decoder = "";
            }else if(decoder == "...--"){\
                cout<<"3";
                decoder = "";
            }else if(decoder == "....-"){\
                cout<<"4";
                decoder = "";
            }else if(decoder == "....."){\
                cout<<"5";
                decoder = "";
            }else if(decoder == "-...."){\
                cout<<"6";
                decoder = "";
            }else if(decoder == "--..."){\
                cout<<"7";
                decoder = "";
            }else if(decoder == "---.."){\
                cout<<"8";
                decoder = "";
            }else if(decoder == "----."){\
                cout<<"9";
                decoder = "";
            }else if(decoder == "-----"){\
                cout<<"0";
                decoder = "";
            }else if(decoder == "..--.."){\
                cout<<"?";
                decoder = "";
            }else if(decoder == "-.-.--"){\
                cout<<"!";
                decoder = "";
            }else if(decoder == ".-.-.-"){\
                cout<<".";
                decoder = "";
            }else if(decoder == "--..--"){\
                cout<<",";
                decoder = "";
            }else if(decoder == "-.-.-."){\
                cout<<";";
                decoder = "";
            }else if(decoder == "---..."){\
                cout<<":";
                decoder = "";
            }else if(decoder == ".-.-."){\
                cout<<"+";
                decoder = "";
            }else if(decoder == "-....-"){\
                cout<<"-";
                decoder = "";
            }else if(decoder == "-..-."){\
                cout<<"/";
                decoder = "";
            }else if(decoder == "-...-"){\
                cout<<"=";
                decoder = "";
            }
        }
    }
}

int main(){
    string choose;
    cout << "1- Cipher a message " << endl;
    cout << "2- Decipher a message " << endl;
    cout << "3- End " << endl;
    getline(cin,choose);
    if (choose == "1" ){
        encryption();
        return EXIT_SUCCESS;
    }else if (choose == "2" ){
        decryption();
    }else{
        cout << "invalid error";
    }
}
