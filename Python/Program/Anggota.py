## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP1 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Anggota:
    
    ## atribut privat
     __id = ""
     __nama = ""
     __bidang = ""
     __partai = ""
     
     ##Constructor
     
     ##atribut publik
     def __init__(self, id = "", nama = "", bidang = "", partai = ""):
         ##set atribut dengan parameter
         self.__id = id
         self.__nama = nama
         self.__bidang = bidang
         self.__partai = partai
         
     ##Getter dan Setter
     
     # Get id    
     def get_id(self):
         return self.__id
     
     # Set id
     def set_id(self, id):
         self.__id = id
     
     # Get nama       
     def get_nama(self):
         return self.__nama
     
     # Set nama
     def set_nama(self, nama):
         self.__nama = nama
     
     # Get bidang    
     def get_bidang(self):
         return self.__bidang
     
     # Set nama
     def set_bidang(self, bidang):
         self.__bidang = bidang
     
      # Get partai     
     def get_partai(self):
         return self.__partai
     
     # Set partai
     def set_partai(self, partai):
         self.__partai = partai
         
    
   
    
  