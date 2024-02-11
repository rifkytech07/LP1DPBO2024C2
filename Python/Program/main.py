## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP1 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.


from Anggota import Anggota

# deklarasi array
Anggotas = []

# deklarasi jenis menu dengan tipe integer
jenis = 0

print ("SELAMAT DATANG DI DAFTAR ANGGOTA DPR REPUBLIK INDONESIA")
print()

# Selama pilihan menunya bukan yang nomor 5, maka program kana terus berjalan
while jenis != 5:
    
    print ("SILAHKAN PILIH NOMOR PADA DAFTAR MENU YANG TERSEDIA")
    print ("1 MENAMBAH ANGGOTA")
    print ("2 MENGUBAH ANGGOTA")
    print ("3 MENGHAPUS ANGGOTA")
    print ("4 MENAMPILKAN ANGGOTA")
    print ("5 KELUAR DARI PROGRAM")
    
    jenis = int(input()) #input nomor menu nya
    
    print()
    
    # Kalau pilihannya yang menambah anggota
    if jenis == 1:
        # Masukkan data data anggota
        print("MASUKKAN ID, NAMA, BIDANG, DAN PARTAI ANGGOTA")
        print("ID: ")
        id = str(input())
        print("NAMA: ")
        nama = str(input())
        print("BIDANG: ")
        bidang = str(input())
        print("PARTAI: ")
        partai = str(input())
        
        Anggotas.append(Anggota(id, nama, bidang, partai))
        print()
        print("DATA BERHASIL DITAMBAH")
        print()
    
    # Kalau pilihannya yang mengubah anggota
    elif jenis == 2:
        # Masukkan ID anggota yang ingin diubah
        print("SILAHKAN MASUKKAN ID ANGGOTA YANG DIUBAH")
        id = str(input())
        
        find = 0 # penanda kalau data yang dicari ketemu
        
        for dpr in Anggotas:
            if dpr.get_id() == id: ## Kalau ketemu dengan ID nya
                print("DATA BERHASIL DITEMUKAN")
                print("SILAHKAN MASUKKAN DATA YANG BARU")
                ## Masukkan data yang baru
                print("NAMA: ")
                nama = str(input())
                print("BIDANG: ")
                bidang = str(input())
                print("PARTAI: ")
                partai = str(input())
                
                ##mengganti data lama ke data baru
                dpr.set_id(id)
                dpr.set_nama(nama)
                dpr.set_bidang(bidang)
                dpr.set_partai(partai)
                
                find = 1 ## data yang dicari telah ditemukan
                
        if find == 0: ## kalau datanya tidak ketemu
            print("MAAF, DATA YANG ANDA CARI TIDAK DITEMUKAN")
        
        print()
    
    # Kalau pilihannya yang menghapus data        
    elif jenis == 3:
        
        # cari ID dari data yang mau dihapus
        print("SILAHKAN MASUKKAN ID ANGGOTA YANG DIHAPUS")
        id = str(input())
        
        find = 0 # penanda kalau data yang dicari ketemu
        
        for dpr in Anggotas:
            if dpr.get_id() == id: # Kalau ID yang dicari ketemu
                # Hapus data
                Anggotas.remove(dpr)
                print("DATA BERHASIL DITHAPUS")
                find = 1
                
        if find == 0: # kalau data yang dicari tidak ketemu
             print("MAAF, DATA YANG ANDA CARI TIDAK DITEMUKAN")
    
    # Kalau plilihannya yang menampilkan data  
    elif jenis == 4:
        # Kalau List nya ga ada
        if not Anggotas:
            print("MAAF, BELUM ADA DATA YANG TERSEDIA")
        else: # kalau listnya ada
            print("   DAFTAR ANGGOTA DPR REPUBLIK INDONESIA   ")
            print()
            print("----------------------------------------")
            print("|NO | ID  | NAMA  |   BIDANG  | PARTAI |")
            print("----------------------------------------")
            i = 0
            for dpr in Anggotas:
                print("|", (i + 1), "|", dpr.get_id(), "|", dpr.get_nama(), "|", dpr.get_bidang(), "|", dpr.get_partai(), "|")
                i+=1
                
            print("----------------------------------------")
            
            print()
                
    # Kalau pilihannya yang keluar dari program
    elif jenis == 5:
        print("TERIMA KASIH TELAH MEMPERCAYAI LAYANAN KAMI")
                
                
                
                
        
        
        
                    
                



    