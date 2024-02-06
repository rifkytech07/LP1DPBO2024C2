/*include library dan file*/

#include <bits/stdc++.h> //include semua library
#include "Anggota.cpp"

//menggunakan namespace standar
using namespace std;

int main()
{

    /*input and list*/

    int i , n = 0;
    string id;
    string name;
    string namaBidang;
    string fraksi;
    char gender;

    list<Anggota> llist; //premade Linked List Library

    cin >> n;

    //buat looping
    for(i = 0; i < n; i++)
    {
        //tampungan object
        Anggota temp;

        cout << "Masukkan Data Anggota DPR" << endl;

        //scan atribut
        cin >> id >> name >> namaBidang >> fraksi >>  gender;

        //tetapkan input ke tampungan sementara
        temp.set_id(id);
        temp.set_name(name);
        temp.set_bidang(namaBidang);
        temp.set_fraksi(fraksi);
        temp.set_gender(gender);

        //masukkan tampungan ke list
        llist.push_back(temp);
    }

    cout << '\n' << endl;
    i = 0;
    //tampilkan listnya
    for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << (i + 1) << ". " <<  it->get_id() << " | " << it->get_name() << " | " <<  it->get_bidang() << " | " << it->get_fraksi() << " | " << it->get_gender() <<  '\n';
        i++;
    }

    cout << '\n' << endl;

    int menu; //deklarasi pilihan menu
    

    cout << "Pilih yang mana anda mau:" <<endl;
    cout << "1 Menambah " << endl;
    cout << "2 Mengubah " << endl;
    cout << "3 Menghapus " << endl;

    cin >> menu; //scan menu

    //kalo pilih yang tambah data
    if(menu == 1)
    {
        cout << "masukkan data :" << endl;
        cin >> id >> name >> namaBidang >> fraksi >>  gender; //input atribut
        Anggota temp; //tampungan object

         //tetapkan input ke tampungan sementara
        temp.set_id(id);
        temp.set_name(name);
        temp.set_bidang(namaBidang);
        temp.set_fraksi(fraksi);
        temp.set_gender(gender);

        llist.push_back(temp); //masukkan tampungan ke list

         cout << '\n' << endl;
        i = 0;
        //tampilkan listnya
        for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            cout << (i + 1) << ". " <<  it->get_id() << " | " << it->get_name() << " | " <<  it->get_bidang() << " | " << it->get_fraksi() << " | " << it->get_gender() <<  '\n';
            i++;
        }

    }
    else if(menu == 2) //kalau menu yang dipilih adalah ubah data
    {
        /*deklarasi i untuk looping dan find untuk indikator*/
        i = 0; 
        int find = 0;

        cout << "Masukkan id anggota yang ingin diubah: "<< endl;
        cin >> id; //scan id
        
        //buat looping untk mencari id dari data yang ingin diubah
        for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++)
        {
             if(it->get_id() == id) //kalo ketemu id nya
            {
                 cout << "Data berhasil ditemukan." << endl;
                cout << "Silahkan masukkan data :" << endl;
                cin >> id >> name >> namaBidang >> fraksi >>  gender; //input data yang menggantikan data sebelumnya

                //menetapkan data baru ke dalam object
                it->set_id(id);
                it->set_name(name);
                it->set_bidang(namaBidang);
                it->set_fraksi(fraksi);
                it->set_gender(gender);

                find = 1; //tanda karena id nya ketemu
            }
        }

        //kalau datanya ada
        if(find == 1)
        { 
            /*tampilkan list setelah perubahan*/
                    
            for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << (i + 1) << ". " <<  it->get_id() << " | " << it->get_name() << " | " <<  it->get_bidang() << " | " << it->get_fraksi() << " | " << it->get_gender() <<  '\n';
                i++;
            }
        }
        else //kalau datanya tidak ada
        { //kasih notif bahwa data tidak ditemukan
            cout << "Maaf, data yang anda cari tidak ditemukan." << endl;
        }
        

    }
    else if(menu == 3) //kalau menu yang dipilih adalah hapus data
    {
        /*deklarasi i untuk looping dan find untuk indikator*/
         i = 0; 
        int find = 0;

        cout << "Masukkan id anggota yang ingin dihapus: "<< endl;
        cin >> id; //input id yang datanya ingin dihapus
        
        //buat looping untk mencari id dari data yang ingin diubah
        for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++)
        {
             if(it->get_id() == id) //kalau id nya ketemu
            {
                /*lakukan proses hapus data pada list*/
                llist.erase(it);
                it = llist.end();

                find = 1; //tanda karena id nya ketemu
            }

        }

         if(find == 1) //kalau datanya ada
        {
            /*tampilkan list setelah hapus data*/
                    
            for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << (i + 1) << ". " <<  it->get_id() << " | " << it->get_name() << " | " <<  it->get_bidang() << " | " << it->get_fraksi() << " | " << it->get_gender() <<  '\n';
                i++;
            }

            cout << "Data Berhasil Dihapus" << endl;
        }
        else //kalau data ga ada
        { 
            cout << "Maaf, data yang anda cari tidak ditemukan." << endl;
        }
    }

    return 0;
}