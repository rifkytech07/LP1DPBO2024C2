/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP1 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//import library
import java.util.Scanner;
import java.util.ArrayList;

public class main {
    public static void main(String[] args) 
    {
        //deklarasi 

        String id;
        String nama;
        String bidang;
        String partai;

        int menu = 0; //menu

        int i = 0; //parameter looping

        //menggunakan struktur data
        ArrayList<Anggota> dpr = new ArrayList<>();
        
        //membuat Scanner untuk membaca input

        Scanner sc = new Scanner(System.in);

        System.out.println("SELAMAT DATANG DI DAFTAR ANGGOTA DPR REPUBLIK INDONESIA");
        System.out.println();

        //proses menginput query

        //program akan terus berjalan selama belum memilih untuk keluar dari program
        do {
           
            System.out.println("SILAHKAN PILIH MENU YANG TERSEDIA:");
            System.out.println("1 MENAMBAH ANGGOTA");
            System.out.println("2 MENGUBAH ANGGOTA");
            System.out.println("3 MENGHAPUS ANGGOTA");
            System.out.println("4 MENAMPILKAN ANGGOTA");
            System.out.println("5 KELUAR DARI PROGRAM");
            
            menu = sc.nextInt(); //input nomor menu
            sc.nextLine();
            
            System.out.println();

            //menu yang dipilih yang menambah data
            if(menu == 1)
            {  //masukkan data data anggota
                System.out.println("MASUKKAN ID, NAMA, BIDANG, DAN PARTAI ANGGOTA");
                System.out.print("ID: ");
                id = sc.nextLine();
                System.out.print("NAMA: ");
                nama = sc.nextLine();
                System.out.print("BIDANG: ");
                bidang = sc.nextLine();
                System.out.print("PARTAI: ");
                partai = sc.nextLine();

                //masukkan ke dalam list
                dpr.add(new Anggota(id, nama, bidang, partai));
                System.out.println();
                System.out.println("DATA BERHASIL DITAMBAH");
                System.out.println();

            }
            else if (menu == 2) //menu yang dipilih yang mengubah data
            {
                System.out.println("SILAHKAN MASUKKAN ID ANGGOTA YANG DIUBAH");
                id = sc.nextLine(); //masukkan id data yang dicari

                int find = 0; //penanda kalau data yang dicari ketemu
                for(Anggota wakil : dpr)
                {
                    if(wakil.getId().equals(id)) //kalau id data yang dicari ketemu
                    { //masukkan data anggota terbaru
                        System.out.println("DATA BERHASIL DITEMUKAN");
                        System.out.println("SILAHKAN MASUKKAN DATA YANG BARU");
                        System.out.print("NAMA: ");
                        nama = sc.nextLine();
                        System.out.print("BIDANG: ");
                        bidang = sc.nextLine();
                        System.out.print("PARTAI: ");
                        partai = sc.nextLine();
                        
                        //mengganti data lama dengan data baru
                        wakil.setId(id);
                        wakil.setNama(nama);
                        wakil.setBidang(bidang);
                        wakil.setPartai(partai);

                        find = 1; //data telah ketemu dan telah terjadi perubahan
                    }

                }

                System.out.println();

                if(find == 0) //kalau data yang dicari tidak ketemu
                {
                    System.out.println("MAAF, DATA YANG ANDA CARI TIDAK DITEMUKAN");
                }
                else //kalau data yang dicari ketemu 
                {
                    System.out.println("DATA BERHASIL DIUBAH");
                }
                System.out.println();
            }
            else if(menu == 3) //menu yang dipilih yang menghapus data
            {
                System.out.println("SILAHKAN MASUKKAN ID ANGGOTA YANG DIHAPUS");
                id = sc.nextLine(); //masukkan id data yang dicari

                System.out.println();

                int find = 0; //penanda data yang dicari ketemu
                for(Anggota wakil : dpr)
                {
                    if(wakil.getId().equals(id)) //kalau id data yang dicari ketemu
                    {
                        dpr.remove(wakil);
                        System.out.println("DATA BERHASIL DITHAPUS");
                        find = 1; //data telah ditemukan
                    }
                }

                if(find == 0) //kalau data yang dicari tidak ketemu
                {
                    System.out.println("MAAF, DATA YANG ANDA CARI TIDAK DITEMUKAN");
                }
            }
            else if(menu == 4) //menu yang dipilih yang menampilkan data
            {
                if(dpr.isEmpty()) //kalau listnya gaada
                {
                    System.out.println("MAAF, BELUM ADA DATA YANG TERSEDIA");
                }
                else //kalau list data nya ada
                {
                    System.out.println("   DAFTAR ANGGOTA DPR REPUBLIK INDONESIA   ");
                    System.out.println();
                    System.out.println("----------------------------------------");
                    System.out.println("|NO | ID  | NAMA  |   BIDANG  | PARTAI |");
                    System.out.println("----------------------------------------");
                    i = 0;
                    for (Anggota wakil : dpr) {
                        System.out.println("| " + (i + 1) + " | " + wakil.getId() + " | " + wakil.getNama() + " | " + wakil.getBidang() + " | " + wakil.getPartai() + " |");
                        i++;
                    }
                    System.out.println("----------------------------------------");
                    System.out.println();
                }
            }
            else if(menu == 5) //menu yang dipilih yang keluar dari program
            {
                System.out.println("TERIMA KASIH TELAH MEMPERCAYAI LAYANAN KAMI");
            }

            
        } while (menu != 5);

        sc.close(); //close scanner
    }
   
}
