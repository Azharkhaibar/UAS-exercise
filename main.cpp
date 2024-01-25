#include <iostream>
#include <iomanip>

using namespace std;

class MainMenu {
public:
    struct MainAccess {
        int pilMenu;
        char pilih;
        double hasil;
        int a, b;
        string menu;
    };

    struct Segitiga {
        double alas, tinggi, panjang, lebar, luas;
    };

    void menuPage() {
        MainAccess z;
        Segitiga hitung;

        cout << "# ------------------ SELAMAT DATANG AZHARS PAGE ------------------------ #" << endl;
        cout << "# ---------------------------- MENU -----------------------------------" << endl;
        cout << setw(15) << "1. Kalkulator " << setw(25) << "2. Luas persegi panjang" << setw(25) << "3. Luas segitiga " << endl;
        cout << setw(15) << "4. Luas Lingkaran " << setw(15) << "5. Luas jajaran genjang" << setw(25) << "6. Keliling Lingkaran " << endl;
        cout << "\n pilih kode dengan ketik (1-6) : ";
        cin >> z.pilMenu;

        switch (z.pilMenu) {
            case 1:
                cout << "-----------  Kalkulator ---------------" << endl;

                cout << "pilih operasi : " << endl;
                cout << "'-', '+', '*', '/' " << endl;
                cout << "operasi > "; cin >> z.pilih;

                cout << "masukan nilai a : ";
                cin >> z.a;
                cout << "masukan nilai b : ";
                cin >> z.b;

                switch (z.pilih) {
                    case '-':
                        z.hasil = z.a - z.b;
                        break;
                    case '+':
                        z.hasil = z.a + z.b;
                        break;
                    case '*':
                        z.hasil = z.a * z.b;
                        break;
                    case '/':
                        if (z.b != 0) {
                            z.hasil = static_cast<double>(z.a) / z.b;
                        } else {
                            cout << "Error: Division by zero!" << endl;
                            return;
                        }
                        break;
                    default:
                        cout << "pilih sesuai opsi !" << endl;
                        return;
                }

                cout << "hasil operasi : " << z.hasil << endl;
                 cout << "\n ------------------------------------------------" << endl;
                cout << "\n balik ke menu [Y/N] : "; cin >> z.menu;
                if (z.menu == "y" || "Y"){
                 menuPage();
                }
                else{
                 exit(0);
                }
                break;

            case 2:
                cout << "--------------------------- Luas Persegi panjang ----------------------" << endl;

                cout << "masukan panjang : ";
                cin >> hitung.panjang;
                cout << "masukan lebar : ";
                cin >> hitung.lebar;

                hitung.luas = hitung.panjang * hitung.lebar;
                cout << "hasil luas persegi panjang : " << hitung.luas << endl;
                cout << "\n ------------------------------------------------" << endl;
                cout << "\n balik ke menu [Y/N] : "; cin >> z.menu;
                if (z.menu == "y" || "Y"){
                 menuPage();
                }
                else{
                 exit(0);
                }
                break;

            case 3:
                cout << " -------------------------- Luas segitiga ----------------------------" << endl;
                cout << "masukan nilai alas : ";
                cin >> hitung.alas;
                cout << "masukan nilai tinggi : ";
                cin >> hitung.tinggi;

                cout << "hasil luas segitiga : " << 0.5 * hitung.alas * hitung.tinggi << endl;
                 cout << "\n ------------------------------------------------" << endl;
                cout << "\n balik ke menu [Y/N] : "; cin >> z.menu;
                if (z.menu == "y" || "Y"){
                 menuPage();
                }
                else{
                 exit(0);
                }
                break;

            case 4:
                cout << " -------------------------- Luas lingkaran ----------------------------" << endl;
                cout << "anda memilih luas lingkaran" << endl;
                 cout << "\n ------------------------------------------------" << endl;
                cout << "\n balik ke menu [Y/N] : "; cin >> z.menu;
                if (z.menu == "y" || "Y"){
                 menuPage();
                }
                else{
                 exit(0);
                }
                break;

            case 5:
                cout << " -------------------------- jajaran genjang ----------------------------" << endl;
                cout << " anda memilih luas jajaran genjang" << endl;
                 cout << "\n ------------------------------------------------" << endl;
                cout << "\n balik ke menu [Y/N] : "; cin >> z.menu;
                if (z.menu == "y" || "Y"){
                 menuPage();
                }
                else{
                 exit(0);
                }
                break;

            case 6:
                cout << " -------------------------- Keliling Lingkaran -------------------------" << endl;
                cout << " anda memilih keliling lingkaran " << endl;
                 cout << "\n ------------------------------------------------" << endl;
                cout << "\n balik ke menu [Y/N] : "; cin >> z.menu;
                if (z.menu == "y" || "Y"){
                 menuPage();
                }
                else{
                 exit(0);
                }
                break;

            default:
                cout << "Menu not recognized!" << endl;
                cout << " input pilihan salah! " << endl;
                break;
        }
    }
};

int main() {
    MainMenu menu;
    menu.menuPage();
    return 0;
}