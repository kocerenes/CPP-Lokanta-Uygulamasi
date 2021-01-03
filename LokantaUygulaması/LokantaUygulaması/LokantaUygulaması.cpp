
#include <iostream>
#include <windows.h> // komut satırına renk vermek için
#include <string> // string türü için
#include <clocale> // Türkçe karakter kullanabilmek için
#include <iomanip> //setw() kullanmak için 

using namespace std;

void _baslangic()
{
    cout << "=======================================================================================================================\n";
    cout << "Yapmak istediğiniz işlemi belirtiniz.\n\n";
    cout << " [1] Menüyü getir.\n";
    cout << " [2] Sipariş ver.\n";
    cout << " [3] Çıkış yap.\n";
    cout << "=======================================================================================================================\n\n";
}

//corbalar için sınıf olusturdum.
class Corbalar
{
public: // erişilebilir 
    string corbaIsim;
    double corbaFiyat;
    byte corbaDurum;

    // Çorbanın bilgilerini console ekranına yazdırmak için metod olusturdum.
    void _corbaYazdir()
    {
        cout << "\nÇorba adı: " << corbaIsim << endl;
        cout << "Fiyatı: " << corbaFiyat << " TL" << endl;
        cout << "Durumu: " << corbaDurum << endl;
        cout << "================================";
    }
};

// ana yemekler için sınıf olusturdum
class AnaYemekler
{
public:  // erişilebilir
    string anaYemekIsim;
    double anaYemekFiyat;
    byte anaYemekDurum;

    // Ana yemeğin bilgilerini console ekranına yazdırmak için metod olusturdum.
    void _anaYemekYazdir()
    {
        cout << "\nAna yemek adı: " << anaYemekIsim << endl;
        cout << "Fiyatı: " << anaYemekFiyat << " TL" << endl;
        cout << "Durumu: " << anaYemekDurum << endl;
        cout << "================================";
    }
};

// içecekler için sınıf olusturdum
class Icecekler
{
public:  // erişilebilir
    string icecekIsim;
    double icecekFiyat;
    byte icecekDurum;

    // Ana yemeğin bilgilerini console ekranına yazdırmak için metod olusturdum.
    void _icecekYazdir()
    {
        cout << "\nAna yemek adı: " << icecekIsim << endl;
        cout << "Fiyatı: " << icecekFiyat << " TL" << endl;
        cout << "Durumu: " << icecekDurum << endl;
        cout << "================================";
    }
};

// tatlılar için sınıf olusturdum
class Tatlilar
{
public:  // erişilebilir
    string tatliIsim;
    double tatliFiyat;
    byte tatliDurum;

    // Ana yemeğin bilgilerini console ekranına yazdırmak için metod olusturdum.
    void _tatliYazdir()
    {
        cout << "\nAna yemek adı: " << tatliIsim << endl;
        cout << "Fiyatı: " << tatliFiyat << " TL" << endl;
        cout << "Durumu: " << tatliDurum << endl;
        cout << "===============================";
    }
};

Corbalar corba1;  //Corbalar sınıfından 1. corba çeşidi için nesne olusturdum.
Corbalar corba2;  //Corbalar sınıfından 2. corba çeşidi için nesne olusturdum.
Corbalar corba3;  //Corbalar sınıfından 3. corba çeşidi için nesne olusturdum.

AnaYemekler anaYemek1; // AnaYemekler sınıfından 1. ana yemek çeşidi için nesne olusturdum.
AnaYemekler anaYemek2; // AnaYemekler sınıfından 2. ana yemek çeşidi için nesne olusturdum. 
AnaYemekler anaYemek3; // AnaYemekler sınıfından 3. ana yemek çeşidi için nesne olusturdum.

Icecekler icecek1; // ICecekler sınıfından 1. içecek çeşidi için nesne olusturdum.
Icecekler icecek2; // ICecekler sınıfından 2. içecek çeşidi için nesne olusturdum.
Icecekler icecek3; // ICecekler sınıfından 3. içecek çeşidi için nesne olusturdum.
Icecekler icecek4; // ICecekler sınıfından 4. içecek çeşidi için nesne olusturdum.

Tatlilar tatli1;   // Tatlilar sınıfından 1. tatlı çeşidi için nesne olusturdum.
Tatlilar tatli2;   // Tatlilar sınıfından 2. tatlı çeşidi için nesne olusturdum.
Tatlilar tatli3;   // Tatlilar sınıfından 2. tatlı çeşidi için nesne olusturdum.

void _menuGetir()
{
    //corba1 nesnesine değerlerini atadık.
    corba1.corbaIsim = "Ezogelin (c1)";
    corba1.corbaFiyat = 7;
    corba1.corbaDurum = '1';

    //corba2 nesnesine değerlerini atadık.
    corba2.corbaIsim = "Mercimek çorbası (c2)";
    corba2.corbaFiyat = 5;
    corba2.corbaDurum = '1';

    //corba3 nesnesine değerlerini atadık.
    corba3.corbaIsim = "Yayla çorbası (c3)";
    corba3.corbaFiyat = 6;
    corba3.corbaDurum = '0';

    //console a yazdırmak için metodları çağırdım.
    cout << "\n---ÇORBALAR---" << endl;
    corba1._corbaYazdir();
    corba2._corbaYazdir();
    corba3._corbaYazdir(); cout << endl;

    //////////////////////////////////////////////////////////////

    //anayemek1 nesnesine değerlerini atadık.
    anaYemek1.anaYemekIsim = "Fırın güveç (a1)";
    anaYemek1.anaYemekFiyat = 30;
    anaYemek1.anaYemekDurum = '1';

    //anayemek2 nesnesine değerlerini atadık.
    anaYemek2.anaYemekIsim = "Kuzu şiş (a2)";
    anaYemek2.anaYemekFiyat = 27;
    anaYemek2.anaYemekDurum = '1';

    //anayemek3 nesnesine değerlerini atadık.
    anaYemek3.anaYemekIsim = "Pilav üstü döner (a3)";
    anaYemek3.anaYemekFiyat = 25;
    anaYemek3.anaYemekDurum = '1';

    //Console a yazdırmak için metodları cagırdım.
    cout << "---ANA YEMEKLER---" << endl;
    anaYemek1._anaYemekYazdir();
    anaYemek2._anaYemekYazdir();
    anaYemek3._anaYemekYazdir();

    //////////////////////////////////////////////////////////////

    //icecek1 nesnesine değerlerini atadık.
    icecek1.icecekIsim = "Sprite (i1)";
    icecek1.icecekFiyat = 3.25;
    icecek1.icecekDurum = '1';

    //icecek2 nesnesine değerlerini atadık.
    icecek2.icecekIsim = "Cola (i2)";
    icecek2.icecekFiyat = 4;
    icecek2.icecekDurum = '0';

    //icecek3 nesnesine değerlerini atadık.
    icecek3.icecekIsim = "Ayran (i3)";
    icecek3.icecekFiyat = 1.5;
    icecek3.icecekDurum = '1';

    //icecek4 nesnesine değerlerini atadık.
    icecek4.icecekIsim = "Su (i4)";
    icecek4.icecekFiyat = 1;
    icecek4.icecekDurum = '1';

    //Console a yazdırmak için metodları cagırdım.
    cout << "\n---İÇECEKLER---" << endl;
    icecek1._icecekYazdir();
    icecek2._icecekYazdir();
    icecek3._icecekYazdir();
    icecek4._icecekYazdir();

    //////////////////////////////////////////////////////////////

    //tatli1 nesnesine değerlerini atadık.
    tatli1.tatliIsim = "Sütlaç (t1)";
    tatli1.tatliFiyat = 7.5;
    tatli1.tatliDurum = '1';

    //tatli2 nesnesine değerlerini atadık.
    tatli2.tatliIsim = "Künefe (t2)";
    tatli2.tatliFiyat = 13;
    tatli2.tatliDurum = '0';

    //tatli3 nesnesine değerlerini atadık.
    tatli3.tatliIsim = "Muhallebi (t3)";
    tatli3.tatliFiyat = 8;
    tatli3.tatliDurum = '1';

    //Console a yazdırmak için metodları cagırdım.
    cout << "\n---TATLILAR---" << endl;
    tatli1._tatliYazdir();
    tatli2._tatliYazdir();
    tatli3._tatliYazdir();
}


void _siparisVer()
{
    double toplamTutar = 0;
    string corbaSecim;
    string anaYemekSecim;
    string icecekSecim;
    string tatliSecim;

    cout << "Sipariş vermek istediğiniz çorbanın kodunu giriniz: ";
    cin >> corbaSecim;

    //çorba secimlerini fiyatlandırmak için şart bloğu
    if (corbaSecim == "c1" && corba1.corbaDurum == '1')
    {
        toplamTutar += 7;
    }
    else if (corbaSecim == "c2" && corba2.corbaDurum == '1')
    {
        toplamTutar += 5;
    }
    else if (corbaSecim == "c3" && corba3.corbaDurum == '1')
    {
        toplamTutar += 6;
    }
    else
    {
        toplamTutar += 0;
        cout << "yanlış seçim yaptınız veya ürün mevcut değil.\n";
    }


    cout << "Sipariş vermek istediğiniz ana yemeğin kodunu giriniz: ";
    cin >> anaYemekSecim;

    //ana yemek secimlerini fiyatlandırmak için şart bloğu
    if (anaYemekSecim == "a1" && anaYemek1.anaYemekDurum == '1')
    {
        toplamTutar += 30;
    }
    else if (anaYemekSecim == "a2" && anaYemek2.anaYemekDurum == '1')
    {
        toplamTutar += 27;
    }
    else if (anaYemekSecim == "a3" && anaYemek3.anaYemekDurum == '1')
    {
        toplamTutar += 25;
    }
    else
    {
        toplamTutar += 0;
        cout << "yanlış seçim yaptınız veya ürün mevcut değil.\n";
    }

    cout << "Sipariş vermek istediğiniz içeceğin kodunu giriniz: ";
    cin >> icecekSecim;

    //içecek secimlerini fiyatlandırmak için şart bloğu
    if (icecekSecim == "i1" && icecek1.icecekDurum == '1')
    {
        toplamTutar += 3.25;
    }
    else if (icecekSecim == "i2" && icecek2.icecekDurum == '1')
    {
        toplamTutar += 4;
    }
    else if (icecekSecim == "i3" && icecek3.icecekDurum == '1')
    {
        toplamTutar += 1.5;
    }
    else if (icecekSecim == "i4" && icecek4.icecekDurum == '1')
    {
        toplamTutar += 1;
    }
    else
    {
        toplamTutar += 0;
        cout << "yanlış seçim yaptınız veya ürün mevcut değil.\n";
    }

    cout << "Sipariş vermek istediğiniz tatlının kodunu giriniz: ";
    cin >> tatliSecim;

    //tatlı secimlerini fiyatlandırmak için şart bloğu
    if (tatliSecim == "t1" && tatli1.tatliDurum == '1')
    {
        toplamTutar += 7.5;
    }
    else if (tatliSecim == "t2" && tatli2.tatliDurum == '1')
    {
        toplamTutar += 13;
    }
    else if (tatliSecim == "t3" && tatli3.tatliDurum == '1')
    {
        toplamTutar += 8;
    }
    else
    {
        toplamTutar += 0;
        cout << "yanlış seçim yaptınız veya ürün mevcut değil.\n";
    }

    cout << "Toplam tutar: " << toplamTutar << endl; // toplam tutarı ekrana yazdırdık.
}

void _siparisDevam()
{
    char siparisDevam;

    while (true)
    {
        cout << "Sipariş vermeye devam etmek istiyor musunuz? [E]/[H]\n"; //yeni siparis vermek için soru sorduk.
        cin >> siparisDevam;

        if (siparisDevam == 'E')
        {
            _siparisVer(); // kullanıcı 'E' secegini secerse siparis vermesi için metodumuzu cagırmıs olduk.
        }
        else if (siparisDevam == 'H')
        {
            system("CLS"); //sipariş vermek istemezse ekranı temizler ve secenekler kısmını ekrana getirir.
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "turkish"); // Türkçe karakter kullanacağımı belirledim.
    system("color A"); //Yazıyı renklendirdim.
    cout << setw(66) << "KOÇER LOKANTASI\n\n"; //Başlık

    int secim;

    // true döndürdükçe her işlemden sonra secenekler ekrana gelsin.
    while (true)
    {
        cout << "\n";
        _baslangic(); // seceneklerin cıkması için metodumu çağırdım.
        cout << "Yapmak istediğiniz işlem: ";
        cin >> secim; // yapmak istediğim işlemi sectim.

        //Seçtiğimiz numaraya karşılık gelen işlemleri yapmak için şart olusturdum.
        switch (secim)
        {

        case 1: // Menüyü getirme işlemi için.
        {
            system("CLS"); //ekranı temizler.
            _menuGetir();
        }
        break;

        // Sipariş vermek için.
        case 2:
        {
            _siparisVer();
            _siparisDevam();
        }
        break;

        // Çıkış yapmak için.
        case 3:
        {
            exit(0);
        }
        break;
        }
    }
    return false;
}
