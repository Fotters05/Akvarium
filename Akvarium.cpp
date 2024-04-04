#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Akvarium {
public:
    class FriendlyFish {
    private:
        string Frendlyfishs;
        int Size;
        string View;
        double Weight;
        string Foot;

    public:
        FriendlyFish(string frendlyfishs, int size, string view, double weight, string foot)
            :Frendlyfishs(frendlyfishs), Size(size), View(view), Weight(weight), Foot(foot) {}

        void CreateFriendlyFish() {
            setlocale(LC_ALL, "Rus");
            cout << "Введите не хищную рыбы: " << Frendlyfishs << endl;
            cin >> Frendlyfishs;
            cout << "Размер рыбки: " << Size << endl;
            cin >> Size;
            cout << "Вид рыбы: " << View << endl;
            cin >> View;
            cout << "Вес рыбы: " << Weight << endl;
            cin >> Weight;
            cout << "Чем она будет питаться: " << Foot << endl;
            cin >> Foot;
        }

        void InfoFriendlyFish() const {
            cout << "Обычная рыба" << endl;
            cout << "Ваша рыбка: " << Frendlyfishs << endl;
            cout << "Размер рыбки: " << Size << endl;
            cout << "Вид рыбы: " << View << endl;
            cout << "Вес рыбы: " << Weight << endl;
            cout << "Чем она будет питаться: " << Foot << endl;
        }

        string GetName() const {
            return Frendlyfishs;
        }

        void EatAlgae() {
            cout << Frendlyfishs << " съела водоросли!" << endl;
        }
    };

    class FuckingFish {
    private:
        string Fuckngfishs;
        int Size;
        string View;
        double Weight;
        string Foot;

    public:
        FuckingFish(string fuckngfishs, int size, string view, double weight, string foot)
            :Fuckngfishs(fuckngfishs), Size(size), View(view), Weight(weight), Foot(foot) {}

        void CreateFuckingFish() {
            setlocale(LC_ALL, "Rus");

            cout << "Введите хищную рыбы: " << Fuckngfishs << endl;
            cin >> Fuckngfishs;
            cout << "Размер рыбки: " << Size << endl;
            cin >> Size;
            cout << "Вид рыбы: " << View << endl;
            cin >> View;
            cout << "Вес рыбкы: " << Weight << endl;
            cin >> Weight;
            cout << "Чем она будет питаться: " << Foot << endl;
            cin >> Foot;
            cout << "Ваша рыба добавлена в аквариум" << endl;
        }

        void InfoFuckingFish() const {
            cout << "Обычная рыба" << endl;
            cout << "Ваша рыбка: " << Fuckngfishs << endl;
            cout << "Размер рыбки: " << Size << endl;
            cout << "Вид рыбы: " << View << endl;
            cout << "Вес рыбкы: " << Weight << endl;
            cout << "Чем она будет питаться: " << Foot << endl;
        }

        string GetName() const {
            return Fuckngfishs;
        }
    };

    class Vodorosli {
    private:
        string Kraken;
    public:
        Vodorosli(string kraken)
            :Kraken(kraken) {}

        void InfoVodorosli() {
            cout << "Введите вородосли для не хищной рыбки " << Kraken << endl;
            cin >> Kraken;
        }
    };

    void InfoAllFish(const vector<FriendlyFish>& friendlyFishes, const vector<FuckingFish>& fuckingFishes) {
        cout << "Информация о всех рыбах:" << endl;

        cout << "Добрые рыбки (" << friendlyFishes.size() << "):" << endl;
        for (const auto& fish : friendlyFishes) {
            fish.InfoFriendlyFish();
            cout << endl;
        }

        cout << "----------------";

        cout << endl << "Злые рыбки (" << fuckingFishes.size() << "):" << endl;
        for (const auto& fish : fuckingFishes) {
            fish.InfoFuckingFish();
            cout << endl;
        }
    }


    void DeleteFishRandomly(vector<FriendlyFish>& friendlyFishes, vector<FuckingFish>& fuckingFishes) {
        srand(time(0));

        int randomIndex = rand() % 2;

        if (randomIndex == 0) {
            if (!friendlyFishes.empty()) {
                int index = rand() % friendlyFishes.size();
                cout << "Злая рыбка убила добрую рыбку: " << friendlyFishes[index].GetName() << endl;
                friendlyFishes.erase(friendlyFishes.begin() + index);
            }
            else {
                cout << "Нет добрых рыб" << endl;
            }
        }

        else {
            if (!fuckingFishes.empty()) {
                int index = rand() % fuckingFishes.size();
                cout << "Добрая рыбка выжила от атаки злой рыбки: " << fuckingFishes[index].GetName() << endl;
            }
            else {
                cout << "Нет злых рыб" << endl;
            }
        }
    }

};

int main() {
    setlocale(LC_ALL, "Rus");

    vector<Akvarium::FriendlyFish> friendlyFishes;
    vector<Akvarium::FuckingFish> fuckingFishes;
    Akvarium::Vodorosli foot("");

    int choice;
    do {
        setlocale(LC_ALL, "Rus");

        cout << "Добро пожаловать в аквариум Рамиля и Никиты!" << endl;
        cout << "1. Добавить добрую рыбу" << endl;
        cout << "2. Информация о доброй рыбке" << endl;
        cout << "3. Добавить злую рыбку" << endl;
        cout << "4. Информация о хищной рыбке" << endl;
        cout << "5. Добавить водоросли" << endl;
        cout << "6. Вывести информацию о всех рыбах" << endl;
        cout << "7. Встреча рыб" << endl;
        cout << "8. Встреча доброй рыбки с водорослями" << endl; // Новый пункт меню
        cout << "9. Выход из программы" << endl;

        cin >> choice;

        if (!(cin >> choice)) {
            cout << "\nОшибка: Неверный ввод. Пожалуйста, введите число.\n" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (choice) {
        case 1: {
            Akvarium::FriendlyFish newFriendlyFish("", 0, "", 0, "");
            newFriendlyFish.CreateFriendlyFish();
            friendlyFishes.push_back(newFriendlyFish);
            break;
        }
        case 2:
            if (!friendlyFishes.empty()) {
                for (const auto& fish : friendlyFishes) {
                    fish.InfoFriendlyFish();
                }
            }
            else {
                cout << "Нет добрых рыб" << endl;
            }
            break;
        case 3: {
            Akvarium::FuckingFish newFuckingFish("", 0, "", 0, "");
            newFuckingFish.CreateFuckingFish();
            fuckingFishes.push_back(newFuckingFish);
            break;
        }
        case 4:
            if (!fuckingFishes.empty()) {
                for (const auto& fish : fuckingFishes) {
                    fish.InfoFuckingFish();
                }
            }
            else {
                cout << "Нет злых рыб" << endl;
            }
            break;
        case 5:
            foot.InfoVodorosli();
            break;
        case 6:
            Akvarium().InfoAllFish(friendlyFishes, fuckingFishes);
            break;
        case 7:
            Akvarium().DeleteFishRandomly(friendlyFishes, fuckingFishes);
            break;
        case 8: // Новый пункт меню для встречи доброй рыбки с водорослями
            for (auto& fish : friendlyFishes) {
                fish.EatAlgae();
            }
            break;
        case 9:
            cout << "Вы успешно вышли из программы" << endl;
            break;
        default:
            cout << "Неверный выбор команды" << endl;
            break;
        }
        cout << endl;
    } while (choice != 9);

    return 0;
}

