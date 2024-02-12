/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP1 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//deklarasi kelas dengan nama anggota
public class Anggota
{
    //Atribut privat

    private String id;
    private String nama;
    private String bidang;
    private String partai;

    /*Constructor */    

    //constructor tanpa parameter
    public Anggota()
    {
        this.id = "";
        this.nama = "";
        this.bidang = "";
        this.partai = "";
    }

    //constructor dengan parameter
    public Anggota(String id, String nama, String bidang, String partai)
    {
        this.id = id;
        this.nama = nama;
        this.bidang = bidang;
        this.partai = partai;
    }
    
    /*Getter dan Setter*/
    public String getId()
    {
        return this.id;
    }

    public void setId(String id)
    {
        this.id = id;
    }

    public String getNama()
    {
        return this.nama;
    }

    public void setNama(String nama)
    {
        this.nama = nama;
    }

    public String getBidang()
    {
        return this.bidang;
    }

    public void setBidang(String bidang)
    {
        this.bidang = bidang;
    }


    public String getPartai()
    {
        return this.partai;
    }

    public void setPartai(String partai)
    {
        this.partai = partai;
    }

    

}