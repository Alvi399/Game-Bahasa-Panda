#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
struct User {
    string name;
    int score;
};
bool compareScores(const User &a, const User &b) {
    return a.score > b.score; // Mengurutkan secara menurun (dari skor tertinggi ke terendah)
}


void playGame() {
    int skor = 0;
    int hati = 3;
    bool main = true;

    levelOneGame(&hati,&main,&skor);
    }
//levelOne
bool levelOneGame(int *heart, bool *play, int *skor) {
    ifstream baca ("database/data_soal1.txt");
    string bankSoal [3][2];
    string soal;
    int index = 0, line = 0;
    while (baca >> soal )
    {
        line++;
        if (line%2 == 0)
        {
            bankSoal[index][1] = soal;
            index++;
        } else {
            bankSoal[index][0] = soal;
        }
    }
    

}
void cekLeaderBoard(string nama = "a",int skor = 0, bool input = false) {
    if (input == true)
    {
        ofstream tulis("database/data_leaderboard.txt", ios::app);    
        User user;
        user.name = nama;
        user.score = skor;
        tulis << "\n";
        tulis << user.name << endl;
        tulis << user.score;
        tulis.close(); 
    }
    ifstream baca("database/data_leaderboard.txt");
    vector<vector<string>> pengguna(10, vector<string>(2)); // Kolom 1 sebagai nama, kolom 2 sebagai skor
    vector<User> users;  // Menggunakan vektor dari struktur User untuk menyimpan informasi pengguna
    string isi;
    int line = 0, index = 0, skor_min = 10000;
    while (baca >> isi) {
        line++;
        if (line % 2 == 0) {
            User user;
            user.name = pengguna[index][0];
            user.score = stoi(isi);
            users.push_back(user);
            int skor = user.score;
            if (skor < skor_min) {
                skor_min = skor;
            }
            index++;
        } else {
            pengguna[index][0] = isi;
        }
    }
    // Menggunakan fungsi sort untuk mengurutkan vektor berdasarkan skor
    sort(users.begin(), users.end(), compareScores);
    // Menampilkan data dari vektor setelah diurutkan
    for (const User &user : users) {
        cout << user.name << " : " << user.score << endl;
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
        cout << "4. Aturan Main\n";
        cout << "5. Keluar\n";
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
    
    cout << "Pilih opsi (1/2/3/4): ";
    cin >> opsi;
}

int main(int argc, char const *argv[])
{
    string nama_user;    
    cout << "Masukan nama pengguna: ";
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
