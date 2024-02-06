/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP1 dalam mata kuliah 
DPBO untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//import library
#include <iostream>
#include <string>

//menggunakan namespace standar
using namespace std;

//deklarasi kelas
class Anggota
{
    private: //atribut privat
        string id;
        string name;
        string namaBidang;
        string fraksi;
        char gender;


    public: //atribut publik

    /*Constructor*/

        //constructor tanpa parameter
        Anggota()
        {  //set id, nama, bidang, partai/fraksi, dan jenis kelamin menjadi default value
            this->id = "";
            this->name = "";
            this->namaBidang = "";
            this->fraksi = "";
            this->gender = '-';
        }
 
        //constructor dengan parameter
        Anggota(string id,  string name, string namaBidang, string fraksi, char gender)
        { //set atribut object dengan parameter 
            this->id = id;
            this->namaBidang = namaBidang;
            this->name = name;
            this->fraksi = fraksi;
            this->gender = gender;
        }
 
        /* Getter dan Setter */

        string get_id()  //get id
        {
            return this->id;
        }

        void set_id(string id) //set id
        {
            this->id = id;
        }

        string get_name() //get nama
        {
            return this->name;
        }

        void set_name(string name) //set nama
        {
            this->name = name;
        }

        string get_bidang() //get bidang
        {
            return this->namaBidang;
        }

        void set_bidang(string namaBidang) //set bidang
        {
            this->namaBidang = namaBidang;
        }

         string get_fraksi() //get fraksi/partai
        {
            return this->fraksi;
        }

        void set_fraksi(string fraksi) //set fraksi/partai
        {
            this->fraksi = fraksi;
        }


        char get_gender() //get gender
        {
            return this->gender;
        }

        void set_gender(char gender) //set gender
        {
            this->gender = gender;
        }

        //Destructor
        ~Anggota(){

        }

};