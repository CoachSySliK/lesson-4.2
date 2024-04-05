#include <iostream>

using namespace std;

int main()
{
    
    int totalDistance = 500;
    int speed;
    int time = 5;

    cout << "Москва-Воронеж - " << totalDistance << " км\n\n";
    cout << "Введите вашу скорость: ";
    cin >> speed;

    if (speed * time < totalDistance) {
        cout << "\nВы проехали " << speed * time << "км.\n\n";
        cout << "Москва-Воронеж — фиг догонишь!\n\n";
    }
    else {
        cout << "\nА догонишь - фиг возьёшь!\n\n";
    }

    

    return 0;
}

