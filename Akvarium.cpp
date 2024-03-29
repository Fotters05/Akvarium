#include <iostream>
#include <string>

using namespace std;



class Akvarium {

    class FriendlyFish {
    private:
        string Frendlyfishs;
        int Size;
        string View;
        double Weight;
        string Foot;

    public:

        FriendlyFish(string frendlyfishs,int size, string view, double weight, string foot)
            :Frendlyfishs(frendlyfishs), Size(size), View(view), Weight(weight), Foot(foot) {}

        void InfoFriendly() {

            cout << "Frendlyfishs:" << Frendlyfishs << endl;
            cout << "Size:" << Size << endl;
            cout << "View:" << View << endl;
            cout << "Weight:" << Weight << endl;
            cout << "Foot:" << Foot << endl;
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
            :Fuckngfishs(fuckngfishs),Size(size), View(view), Weight(weight), Foot(foot) {}
    

        void InfoFucking() {

            cout << "Fuckngfishs:" << Fuckngfishs << endl;
            cout << "Size:" << Size << endl;
            cout << "View:" << View << endl;
            cout << "Weight:" << Weight << endl;
            cout << "Foot:" << Foot << endl;
        }
    };

    class Vodorosli {
    private:
        string Kraken;
     

    public:
        Vodorosli(string kraken)
            :Kraken(kraken) {}

        void InfoVodorosli() {
            
            cout << "Kraken: " << Kraken << endl;
        }
    };

    class InfoFuckingFish {
    private:
        int Size;
        string View;
        double Weight;
        string Foot;

    public:
        InfoFuckingFish(int size, string view, double weight, string foot)
            :Size(size), View(view), Weight(weight), Foot(foot) {}
    };



};


int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Добро пожаловать в аквариум Рамиля и Никиты!" << endl;


}

