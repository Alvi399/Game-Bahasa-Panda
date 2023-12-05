#include <iostream>
#include <fstream>

using namespace std;
void playGame() {
    
}
void cekLeaderBoard() {
    fstream baca;
    baca.open("/database/data_leaderboard.txt");
    while (!baca.eof())
    {
        
    }
    
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
void exit() {
    cout << "Terima kasih sudah memainkan game ini" << endl;
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
        cout << "5. Keluar";
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
            kebenaran = true;
            break;
        case 5:
            return opsi;
            kebenaran = true;
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

    switch (opsi)
    {
    case 1:
        playGame();
        break;
    case 2:
        cekLeaderBoard();
        break;
    case 3:
        credit();
        break;
    case 4:
        ruleGame();
        break;
    case 5:
        exit();
        break;
    default:
        break;
    }    
}
