#include<iostream>
using namespace std;



int main(){
    int dizi[] = {1,2,3,2,4,3,2,3,1};

    string kelimeler[] = {"Java", "Python", "C++", "JavaScript", "Go", "C", "C#", "Lua", "Ruby", "Rust", "Zig", "TypeScript"};
    string enUzun = kelimeler[0], enKisa = kelimeler[0];

    int kelimelerLength = sizeof(kelimeler)/sizeof(kelimeler[0]);
    for(int i = 0; i < kelimelerLength; i++){
        if(kelimeler[i].size() > enUzun.size()){
            enUzun = kelimeler[i];
        }
        if(kelimeler[i].size() < enKisa.size()){
            enKisa = kelimeler[i];
        }
    }

    int maxTekrar = 0, enCokTekrarEdenEleman = dizi[0], farkliElemanSayisi = 0;
    bool elemanGoruldu[10] = {false};

    for(int i = 0; i < (sizeof(dizi)/sizeof(dizi[0])); i++){
        int eleman = dizi[i];
        int elemaninTekrari = 1;

        for(int j = i+1; j < (sizeof(dizi)/sizeof(dizi[0])); j++){
            if (dizi[j] == eleman){
                elemaninTekrari++;
            }
        }

        if (elemaninTekrari > maxTekrar){
            maxTekrar = elemaninTekrari;
            enCokTekrarEdenEleman = eleman;
        }
        if (!elemanGoruldu[eleman]) {
            farkliElemanSayisi++;
            elemanGoruldu[eleman] = true;
        }
    }

    cout << "En cok tekrar eden eleman: " << enCokTekrarEdenEleman << endl;
    cout << "Tekrar sayisi: " << maxTekrar << endl;
    cout << "Farkli eleman sayisi: " << farkliElemanSayisi << endl;
    cout << "En uzun kelime: " << enUzun << endl;
    cout << "En kisa kelime: " << enKisa << endl;




    return 0;
}