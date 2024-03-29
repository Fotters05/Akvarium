#include <iostream>
#include <string>

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
            cout << "Вес рыбкы: " << Weight << endl;
            cin >> Weight;
            cout << "Чем она будет питаться: " << Foot << endl;
            cin >> Foot;
        }

        void InfoFriendlyFish() {
            cout << "Обычная рыба" << endl;
            cout << "Ваша рыбка: " << Frendlyfishs << endl;
            cout << "Размер рыбки: " << Size << endl;
            cout << "Вид рыбы: " << View << endl;
            cout << "Вес рыбкы: " << Weight << endl;
            cout << "Чем она будет питаться: " << Foot << endl;
           
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
        
        void InfoFuckingFish() {
            cout << "Обычная рыба" << endl;
            cout << "Ваша рыбка: " << Fuckngfishs << endl;
            cout << "Размер рыбки: " << Size << endl;
            cout << "Вид рыбы: " << View << endl;
            cout << "Вес рыбкы: " << Weight << endl;
            cout << "Чем она будет питаться: " << Foot << endl;
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

};

int main() {
    setlocale(LC_ALL, "Rus");

    Akvarium::FriendlyFish fish1("", 0, "", 0, "");
    Akvarium::FuckingFish fish2("", 0, "", 0, "");
    Akvarium::Vodorosli foot("");

    int choice;
    do {
        setlocale(LC_ALL, "Rus");

        cout << "Добро пожаловать в аквариум Рамиля и Никиты!" << endl;
        cout << "1.Добавить добрую рыбу: " << endl;
        cout << "2.Информация о доброй рыбке: " << endl;
        cout << "3.Добавить злую рыбку: " << endl;
        cout << "4.Информация о хищной рыбке: " << endl;
        cout << "5.Добавить водоросли: " << endl;
        cout << "6.Выход из программы: " << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            fish1.CreateFriendlyFish();
            break;
        case 2:
            fish1.InfoFriendlyFish();
            break;
        case 3:
            fish2.CreateFuckingFish();
            break;
        case 4:
            fish2.InfoFuckingFish();
            break;
        case 5:
            foot.InfoVodorosli();
            break;
        case 6:
            cout << "Вы успешно вышли из программы" << endl;
            break;
        default:
            cout << "Неверный выбор команды" << endl;
            break;
        }
        cout << endl;
    } while (choice != 6);

    return 0;
}
