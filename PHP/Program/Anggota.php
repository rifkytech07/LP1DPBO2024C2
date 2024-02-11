
<!--
    Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP1 dalam mata kuliah
    Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
-->

<?php

//membuat kelas dengan nama anggota
class Anggota{
    //atribut privat
    private $id = '';
    private $nama = '';
    private $bidang = '';
    private $partai = '';
    private $foto = '';

    //Constructor
    //Atribut publik
    public function __construct($id = '', $nama = '', $bidang = '', $partai = '', $foto = ''){
        //set atribut dengan parameter
        $this->id = $id;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = $foto;
    }

    // Getter dan Setter
    
    public function setId($id){
        $this->id = $id;
    }

    public function getId(){
        return $this->id;
    }

    public function setNama($nama){
        $this->nama = $nama;
    }

    public function getNama(){
        return $this->nama;
    }

    public function setBidang($bidang){
        $this->bidang = $bidang;
    }

    public function getBidang(){
        return $this->bidang;
    }

    public function setPartai($partai){
        $this->partai = $partai;
    }

    public function getPartai(){
        return $this->partai;
    }

    public function setFoto($foto){
        $this->foto = $foto;
    }

    public function getFoto(){
        return $this->foto;
    }


}

?>