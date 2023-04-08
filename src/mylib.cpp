#include "mylib.hpp"

#include <random>


int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void formeCreuse()
{
    int x = 0;
    int y = 0;
    char point = '*';
    char space = ' ';

    std::cout <<"Veuillez indiquer le nombre de lignes à afficher : "<<std::endl;
    std::cin >> x;
    std::cout <<"Veuillez indiquer le nombre de colones à afficher : "<<std::endl;
    std::cin >> y;

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (i == 0 || i == x-1){
                std::cout << point;
            } else if (j == 0 || j == y-1){
                std::cout << point;
            } else{
                std::cout << space;
            }
        }
        std::cout << std::endl;
    }
}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return abs(p2.x-p1.x) + abs(p2.y-p1.y);
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return std::sqrt(std::pow(p2.x-p1.x, 2) + std::pow(p2.y-p1.y, 2));
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{
    if (points.empty()) return;
    int nbPoints = (int)points.size();
    int randPoints = randomInt(0, nbPoints-1);
    P = points.at(randPoints);
    for(int i = 0; i < nbPoints; i++)
    {
        if(distanceEuclidienne(points.at(i), P)<= dist)
        {
            std::cout << points.at(i) << std::endl;
        }
    }
}

void plusOuMoins()
{
    int numOfTry, playerNum, gameNum = 0;
    int timeTried = 0;
    gameNum = randomInt(1, 100);
    numOfTry = randomInt(5, 15);
    for(int i = 0; i < numOfTry; i++)
    {
        std::cout<<"Entrez un nombre entre 1 et 100"<<std::endl;
        std::cin>> playerNum;
        timeTried++;
        if (playerNum < 1 || playerNum > 100 )
        {
            i--;
            timeTried--;
            std::cout<<"T'es trop con pour écouter la seule règle ? T'inquitèe celui là je te le compte pas, il te reste toujours "<<numOfTry - i<<" essais"<<std::endl;
        }       
        else
        {
            if(playerNum > gameNum)
            {
            std::cout<<"Trop grand, il te reste "<< numOfTry - i <<" essais"<<std::endl;
            }
            if(playerNum < gameNum)
            {
            std::cout<<"Trop petit, il te reste "<< numOfTry - i <<" essais"<<std::endl;
            }
        
            if(playerNum == gameNum)
            {
            std::cout<<"Bonne réponse, il t'a fallu "<<timeTried<<" essais"<<std::endl;
            break;
            }
            if(numOfTry < 1)
            {
            std::cout<<"Plus d'essais force à toi l'ami, t'as perdu"<<std::endl;
            break;
            }
        }
    }   
}