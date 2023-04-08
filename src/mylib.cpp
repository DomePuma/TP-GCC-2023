#include "mylib.hpp"

#include <random>


int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void formeCreuse(int x, int y)
{

}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return 0.0f;
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return 0.0f;
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{

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