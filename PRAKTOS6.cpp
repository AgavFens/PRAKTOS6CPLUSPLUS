#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Hero {
public:
    string vibor;

    void Talk() {
        cout << vibor << " Вы решили поговорить " << endl;
    }

    void Fight() {
        cout << vibor << " Вы выбрали драку" << endl;
    }

    void Surrender() {
        cout << vibor << " Вы выбрали сдаться" << endl;
    }

    void Hear() {
        cout << vibor << " Вы решили послушать " << endl;
    }

    void Run() {
        cout << vibor << " Вы решили сбежать" << endl;
    }

    void Quit() {
        cout << vibor << " Вы решили быть тихим" << endl;
    }
};

class Person {
public:
    string name;

    void Danil() {
        cout << name << " Дмитрий: " << endl;
    }

    void Oleg() {
        cout << name << " Олег: " << endl;
    }

    void Ohrana() {
        cout << name << " Охранник: " << endl;
    }

};

class Weapon {
public:
    string type;

    void Loshka() {
        cout << type << " 'Ложка' " << endl;
    }

    void Zatochka() {
        cout << type << " 'Заточка' " << endl;
    }
};

class GameOver {
public:
    void Display() {
        cout << "Вы проиграли." << endl;
        cout << "Нажмите любую клавишу для выхода..." << endl;
        _getch();
        exit(0);
    }
};

class Inventory {
public:
    string items[5];
    int itemCount = 0;

    void AddItem(string item) {
        if (itemCount < 5) {
            items[itemCount++] = item;
            cout << "Теперь у вас в карманне: " << item << endl;
        }
        else {
            cout << "Инвентарь полон, вы не можете взять больше предметов." << endl;
        }
    }

    void DisplayItems() {
        cout << "Ваш инвентарь:" << endl;
        for (int i = 0; i < itemCount; ++i) {
            cout << i + 1 << ". " << items[i] << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    Hero hero;
    Person person;
    Weapon weapon;
    GameOver gameover;
    Inventory inventory;

    // Сцена 1: Просыпаемся в автобусе
    cout << "Вы просыпаетесь в автобусе, который везет вас в тюрьму. Вы сразу замечаете потного вонючего охранника, который воняет непонятным для вас запахом" << endl;
    cout << "Поморщив нос вы слишком долго смотрели на него, он начинает подходить к вам" << endl;
    // Сцена 2: Первый выбор 
    person.Ohrana();
    cout << "ну че глаза разул, даун, бить щас будем тебя" << endl;
    cout << "У вас есть выбор:" << endl;
    cout << "1. " << endl;
    hero.Surrender();
    cout << "2. " << endl;
    hero.Fight();
    cout << "3. " << endl;
    hero.Run();
    cout << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        hero.Surrender();
        cout << "Вы решили, позорно сдаться, вас избили, но вы хотя бы живы" << endl;
    }
    else if (choice == 2) {
        hero.Fight();
        cout << "Вы попытались ударить охранника, вас начали бить все охранники в автобусе, вы умерли" << endl;
        gameover.Display();

    }

    else if (choice == 3) {
        hero.Run();
        cout << "Вы решаете убежать, вам сломали все ноги, вы умерли" << endl;
        gameover.Display();
    }

    else {
        cout << "Некорректный выбор. Вас все равно вырубает охранник." << endl;
    }

    // Сцена 3: Второй выбор.
    cout << "После инцидента в автобусе вас с другими новыми заключенными вывели из автобуса и поставили в кандалах." << endl;
    cout << "Вы идете по узкому коридору тюрьмы, окруженные другими заключенными, которые шепчутся и оглядывают вас." << endl;
    cout << "Вы чувствуете напряжение в воздухе и понимаете, что сейчас начнется новый этап вашей жизни." << endl;
    cout << "У вас есть выбор:" << endl;
    cout << "1." << endl;
    hero.Hear();
    cout << "2." << endl;
    hero.Quit();
    cout << endl;

    cin >> choice;

    if (choice == 1) {
        cout << "Вам стало интереснно, что говорят зеки в камерах смотрящие на вас " << endl;
        cout << "Новое  мясо к нам идет, даже даже " << endl;
        person.Oleg();
        cout << "Конечно мой друг" << endl;
        cout << "Вы идете к своей камере, которую вам указал охранник" << endl;
    }

    else if (choice == 2) {
        cout << "Вы молча идете, ничего не слыша к своей камере, которую вам указал ";
        person.Ohrana();
        cout << endl;
    }

    else {
        cout << "Вы не смогли сделать выбор и охранник ударил вас по ноге, вы упали, с вами упали другие преступники, и последнее что вы видели, это 400 киллограммовое чудище в оранжевой робе с кандалами" << endl;
        gameover.Display();
    }

    // Сцена 4: Третий выбор.
    cout << "Вы попали в камеру и видете зека, он смотрит на вас, видимо он вас проверяет, анализирует глазами, глаза у него странно двигаються, то влево то вправо, он видимо ждет ваши первые слова" << endl;
    cout << "Как мама птица, ждущая когда ее птенец начнет чирикать" << endl;
    cout << "У вас есть выбор:" << endl;
    cout << "1." << endl;
    hero.Talk();
    cout << "2." << endl;
    hero.Fight();

    cin >> choice;
    
    if (choice == 1) {
        hero.Talk();
        cout << endl;
        cout << "Вечер в хату, брат" << endl;
        cout << "зек, остановился анализировать вас глазами, когда вы это сказали, еще секунд 5 он молчал" << endl;
        cout << "И тебе не хворать, брат, вижу здравый ты мужик, возьми от меня подгон, зек протягивает вам заточку"  << endl;
        cout << "получен новый предмет ";
        weapon.Zatochka();
        inventory.AddItem("Заточка");
        cout << endl;
        cout << "Вы говорите, благодарен, пригодиться" << endl;
        cout << "Меня если че, зовут Дмитрий" << endl;
        person.Danil();
        cout << "Скоро хавать будем, не пропусти обед" << endl;
    }

    else if (choice == 2) {
        hero.Fight();
        cout << "Насмотревшийсь фильмов, вы подумали что зек готов вас убить, вы спомнив пословицу 'Если драка не избежна, бей первым' и со всей силой бьете его в висок" << endl;
        cout << "Не ожидав такого от вас, он покачнулся, пытаясь поймать баланс, он подскользнулся и упал головой об унитаз " << endl;
        cout << "Вы понимаете, что он не дышит, и слышите как на шум от чугунного унитаза бежит охрана, вы будете гнить вечно в тюрьме после этого" << endl;
        gameover.Display();
    }

    else {
        cout << "Вы ничего не поняв, решили просто развернуться обратно, охрана увидев, что вы не в камере, толпой избили вас, пока вы были в одной комнатухе, вы пошли кушать" << endl;
    }
    // Сцена 5: Четвертый выбор.
    cout << "Вы идете в столовку вам дают ложку" << endl;
    cout << "Вы получили новый предмет ";
    weapon.Loshka();
    inventory.AddItem("Ложка");
    cout << endl;
    cout << "Вы кушаете, вам норм";
    cout << "Пока вы отдохнули, вы можете осмотреть свои вещи" << endl;
    cout << "у вас есть в карманнах: ";
    inventory.DisplayItems();
 
}
