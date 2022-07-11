#include <iostream>
#include <string>

bool checker(std::string pass, int length, bool num) {
    int size = 0;
    bool notalown = false;

    for (int i = 0; i < pass.size(); i++) {
        size++;

        if (num == false) {
            if (isdigit(pass[i])) {
                notalown = true;
            }
        }


    }

    if (size < length) {
        std::cout << "Too short. \n";
        return false;
    }
    else if (notalown == true) {
        std::cout << "Has numbers. \n";
        return false;
    }
    else {
        return true;
    }
}

int main()
{
    std::string pass;
    int length = 0;
    std::string n = "z";
    bool num = true;
    bool good;

    std::cout << "Password? ";
    std::cin >> pass;

    std::cout << "Minimum length? ";
    std::cin >> length;

    while (n != "y" && n != "n") {
        std::cout << "Numbers? y/n ";
        std::cin >> n;

        if (n == "y") {
            num = true;
        }
        else if (n == "n") {
            num = false;
        }
        else {
            n = "z";
        }
    }

    good = checker(pass, length, num);

    if (good) {
        std::cout << "Your password is good. ";
    }
}
