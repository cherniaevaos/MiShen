
#include <iostream>
#include <ctime> // для функции time()
#include <random>
using namespace std;


int Rand() {
    srand(time(NULL));
    return -5 + rand() % 5;
}

int main()
{
    int x,y,r; //координаты и радиус выстрела
    int point = 0; //очки за один раунд
    int sum = 0; //сумма очков за всю игру
    int sectors[6] = { 0,1,2,3,4,5 }; //секторы мишени
    int n = 5; //количество секторов

    for (int i = 0; i < 5; i++) {

        cout << "Enter x and y coordinates from -5 to 5 for the " << i + 1 << " shot\n";
        cin >> x >> y;

        if (x > 5 or x < -5 or y>5 or y < -5)
        {
            cout << "Coordinates entered incorrectly. Try again.\n";
            cin >> x >> y;
        }

        x = x + rand() % 5 + 0;
        y = y + rand() % 5 + 0;
     

        while ((x*x + y*y <= n*n) && (n!= 0))
        {
            point = point + 1;
            n = n - 1;
        }
        sum = sum + point;
       // cout << sum;
    }
      
    cout << (sum < 10 ? "You are LOSER, " : "CONGRATULATIONS, YOU WIN! ") << "YOUR SCORE "<<sum;
 
}
