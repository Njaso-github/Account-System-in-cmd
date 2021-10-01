#include <iostream>
#include <string>
using namespace std;

string user_name[1000];
string passwordofusers[1000];
int signup = 0;

string user;
string password;

bool check_user_sign_up = true;
bool check_user_sign_in = false;
bool check_password_sign_in = false;

int main()
{
    while(true){
        cout << "-------------------- Account System --------------------" << endl << endl;
        cout << "Log in or sign up for a new account?" << endl;
        cout << endl << "Input \"l\" for log in and \"s\" for sign up." << endl;

        string input;
        cin >> input;
        cout << endl;

        if (input == "l"){
            check_user_sign_in = false;
            check_password_sign_in = false;

                cout << "user name:" << endl;
                cin >> user;

                cout << "password:" << endl;
                cin >> password;
                cout << endl;

                for (long long x = 0; x < 1000; x++){
                    if (user == user_name[x] && password == passwordofusers[x]){
                        cout << "Hello, " << user_name[x] << endl;
                        check_user_sign_in = true;
                        check_password_sign_in = true;

                        system("pause");
                        system("cls");
                        continue;
                    }

                    else if(user == user_name[x] && password != passwordofusers[x]){
                        check_user_sign_in = true;
                    }


                }

                if (check_user_sign_in == false){
                    cout << "Account does not exist" << endl;
                    system("pause");
                    system("cls");
                    continue;
                }

                else if (check_user_sign_in == true && check_password_sign_in == false){
                    cout << "Wrong password" << endl;
                    system("pause");
                    system("cls");
                    continue;
                }
        }

        else if (input == "s"){

            do{
                cout << "user name:" << endl;
                cin >> user;

                check_user_sign_up = true;

                for (long long x = 0; x < 1000 ; x++){
                    if (user == user_name[x]){
                        check_user_sign_up = false;
                    }
                }
                if (check_user_sign_up == false){
                    cout << "The user name is already in use" << endl << endl;
                    continue;
                }

            }while(check_user_sign_up == false);

            user_name[signup] = user;

            cout << "password:" << endl;
            cin >> password;

            passwordofusers[signup] = password;

            cout << endl << "Account created successfully" << endl;
            system("pause");
            system("cls");

            signup ++;
        }

        else{
            system("pause");
            system("cls");
            continue;
        }
    }
}
