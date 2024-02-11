<!--
    Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP1 dalam mata kuliah
    Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
-->

<?php
require('Anggota.php'); //import file

//hubungkan dengan file style.css.
echo '<link rel="stylesheet" href="style.css">';

//array
$daftar = [];

//Menambahkan data
 $dpr1 = new Anggota('111', 'RIfky', 'IT', 'PKS', 'Foto Profil/PP1.jpg');
 $dpr2 = new Anggota('112', 'Caca', 'Pendidikan', 'PKB', 'Foto Profil/PP2.jpg');
 $dpr3 = new Anggota('113', 'Layla', 'Ekonomi', 'Nasdem', 'Foto Profil/PP3.png');
 
//setelah itu, masukkan ke dalam list
 array_push($daftar, $dpr1);
 array_push($daftar, $dpr2);
 array_push($daftar, $dpr3);

//menampilkan list
 echo "<h1 style='text-align: center;'>Daftar Anggota DPR Republik Indonesia</h1>";
 echo '<table id = "tabel">';
    echo "<tr>";
    echo "<th>ID</th>";
    echo "<th>Nama</th>";
    echo "<th>Nama Bidang</th>";
    echo "<th>Nama Partai</th>";
    echo "<th>Foto</th>";
    echo "</tr>";


    foreach($daftar as $wakil){
        echo "<tr>";
        echo "<td>" . $wakil->getId() . "</td>";
        echo "<td>" . $wakil->getNama() . "</td>";
        echo "<td>" . $wakil->getBidang() . "</td>";
        echo "<td>" . $wakil->getPartai() . "</td>";
        echo "<td><img src='" . $wakil->getFoto() . "' width='60px' height='100px'></td>";
        echo "</tr>";
    }

    echo "</table>";

    /*Proses Pengubahan data pada list*/
    $tukar_id = "112";

    foreach($daftar as $wakil){
        if($wakil->getId() == $tukar_id){
            $wakil->setnama('Celine');
            $wakil->setBidang('Pertahanan');
            $wakil->setPartai('Gerindra');
            $wakil->setFoto('Foto Profil/PP4.jpg');
        }
    }

    //setelah proses pengubahan, tampilkan kembali list nya
    echo "<h4 style='text-align: center;'>Data Berhasil Diubah</h4>";
    echo "<h1 style='text-align: center;'>Daftar Anggota DPR Republik Indonesia</h1>";
    echo '<table id = "tabel">';
        echo "<tr>";
        echo "<th>ID</th>";
        echo "<th>Nama</th>";
        echo "<th>Nama Bidang</th>";
        echo "<th>Nama Partai</th>";
        echo "<th>Foto</th>";
        echo "</tr>";


        foreach($daftar as $wakil){
            echo "<tr>";
            echo "<td>" . $wakil->getId() . "</td>";
            echo "<td>" . $wakil->getNama() . "</td>";
            echo "<td>" . $wakil->getBidang() . "</td>";
            echo "<td>" . $wakil->getPartai() . "</td>";
            echo "<td><img src='" . $wakil->getFoto() . "' width='60px' height='100px'></td>";
            echo "</tr>";
        }

    echo "</table>";

    /*Proses Penghapusan data*/
    $hapus_id = "113";
    foreach ($daftar as $key => $wakil) {
        if($wakil->getId() == $hapus_id){
            unset($daftar[$key]);
        }
    }

    //setelahproses penghapusan data, tampilkan kembali listnya
    echo "<h4 style='text-align: center;'>Data Berhasil Dihapus</h4>";
    echo "<h1 style='text-align: center;'>Daftar Anggota DPR Republik Indonesia</h1>";
    echo '<table id = "tabel">';
        echo "<tr>";
        echo "<th>ID</th>";
        echo "<th>Nama</th>";
        echo "<th>Nama Bidang</th>";
        echo "<th>Nama Partai</th>";
        echo "<th>Foto</th>";
        echo "</tr>";


        foreach($daftar as $wakil){
            echo "<tr>";
            echo "<td>" . $wakil->getId() . "</td>";
            echo "<td>" . $wakil->getNama() . "</td>";
            echo "<td>" . $wakil->getBidang() . "</td>";
            echo "<td>" . $wakil->getPartai() . "</td>";
            echo "<td><img src='" . $wakil->getFoto() . "' width='60px' height='100px'></td>";
            echo "</tr>";
        }

    echo "</table>";


?>