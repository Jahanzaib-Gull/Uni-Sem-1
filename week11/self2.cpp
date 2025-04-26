#include <iostream>
using namespace std;

main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string movie;
    int price = 500;
    float discounted_price = 0;
    cout << "Enter the name of the movie you want to watch: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << movies[i] << " ";
    }
    cin >> movie;
    for (int i = 0; i < 5; i++)
    {
        if (movies[i] == movie)
        {
            if (i == 1 || i % 2 != 0)
            {
                discounted_price = price-price * 0.05;
                cout << "The discounted price is: " << discounted_price << endl;
                break;
            }
            else
            {
                discounted_price = price-price * 0.10;
                cout << "The discounted price is: " << discounted_price << endl;
                break;
            }
        }
    }
}