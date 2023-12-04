#include <iostream>
using namespace std;
void leaderBoard() {
}
void credit () {
    cout << "Dibuat oleh : \n 1. Alvi \n";
}
void ruleGame() {
    cout << "Selamat datang di tebak bahasa panda" << endl;
    cout << "PERATURAN: " << endl;
    cout << "1. Dilarang mencontek" << endl;
    cout << "2. Dilarang mencontek" << endl;
    cout << "3. Dilarang mencontek" << endl;
}
int  menuGame() {
    int opsi;
    bool kebenaran = false;
    while (kebenaran == false)
    {
        system("cls");
        cout << "1. Main\n";
        cout << "2. Cek Papan Skor\n";
        cout << "3. Credit\n";
        cout << "4. Aturan Main";
        cout << "Plih menu yang ada: ";
        cin >> opsi;
        switch (opsi)
        {
        case 1:
            return opsi;
            kebenaran = true;
            break;
        case 2:
            return opsi;
            kebenaran = true;
            break;
        case 3:
            return opsi;
            kebenaran = true;
            break;
        case 4:
            return opsi;
            break;
        default:
            cout << "Pilihan menu tidak tersedia\n";
            break;
        }
    }
    
    cout << "Pilih opsi (1/2/3/4): \n";
    cin >> opsi;
}
void levelOne() { 
}
int main(int argc, char const *argv[])
{
    string nama_user;    
    cout << "Masukan nama pengguna: \n";
    cin >> nama_user;
    int opsi = menuGame();
    cout << opsi;
    
}
