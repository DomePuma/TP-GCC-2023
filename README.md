# TP-GCC-2023

## Configuration

* Assurez-vous d'avoir les outils suivant correctement installés :
    * WSL : Windows Subsystem Linux
    * Un IDE (Visual Studio, CLion, Code::Blocks) ou un éditeur de code (Visual Studio Code, VSCodium, Notepad++, Vim, ...)
    * GNU/G++ et GNU Make
    ```bash
    $ sudo apt update && sudo apt install build-essential
    $ g++ --version # vérifier que g++ est bien installé
    $ make --version # vérifier que make est bien installé
    ```
    * Cmake version 3.24.1 au minimum
    ```bash
    $ sudo apt update && sudo apt install cmake
    $ cmake --version # vérifier que cmake est bien installé
    ```

Vous trouverez dans le dépôt un `CmakeLists.txt` le plus basique qu'il soit mais efficace ainsi qu'un script `build.sh` pour WSL ou `build.bat` pour Windows utilisables comme suit :
* `./build.sh -a` ou `.\build.bat -a` : Configurer puis construire le projet
* `./build.sh -m` ou `./build.bat -m` : Uniquement construire le projet (nécessite d'avoir été configuré avec la commande `-a` une première fois)
* `./build.sh -r` ou `./build.bat -r` : Permet d'executer le projet (nécessite d'avoir été configuré `-a` et/ou construit `-m`)

Vous avez la possibilité de passer des arguments au programme après l'option `-r`. Par exemple :
```bash
$ ./build.sh -r 2
```

Cette commande permettra d'executer le programme `tp` et de lui envoyer l'argument `2` comme si nous avions fait `./tp 2` dans le prompt.
On pourra alors récupérer l'argument à l'aide du paramètre `char** argv` de la méthode `main` en faisant comme suit :
```cpp
int main (int argc, char** argv)
{
    int n(0);
    // On ne récupère qu'un seul argument ici
    if(argc > 1 && argc < 3)
    {
        n = std::stoi(argv[1]);
    }
}
```

> **Attention**: Assurez-vous d'avoir les droits d'exécution sur le script `build.sh` si vous l'utilisez sur un prompt bash/zsh. Pour ce faire, exécutez la commande `chmod 755 ./build.sh`.


## Consignes

Le test prend la forme d’une séance de travaux pratique noté. Vous pouvez utiliser le support de cours ainsi que les sites de référence sur le C++ (cppreference.com, cplusplus.com, reddit.com/r/cpp/, stackoverflow, …).

Plusieurs éléments sont déjà implémentés et prêts à l’emploi notamment une méthode `randomInt(int min, int max)` permettant de générer un nombre entier aléatoire et une structure `Point2D` disposant déjà des constructeurs et méthodes nécessaires. Les signatures des fonctions à implémenter sont déjà présentes (`mylib.hpp` et `mylib.cpp`). Vous êtes libres de créer de nouvelles fonctions au besoin.

Pour récupérer le TP, je vous invite à fork le dépôt https://github.com/Nayboko/TP-GCC-2023 sur votre espace GitHub personnel. Au fur et à mesure de votre progression dans le TP,  1 Exercice = 1 Commit avec message au minimum.

Pour la notation, merci d’envoyer un lien d’invitation de votre dépôt à mon compte GitHub **[@nayboko](https://github.com/Nayboko)**. 

> **Attention**: Les fonctions dans `mylib.hpp` ne sont pas commentées ! Je serai attentif à la documentation de votre travail. (Inspirez-vous du fichier `Point2D.hpp` au besoin)