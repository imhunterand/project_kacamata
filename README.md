# Night Vision Goggles - Kacamata Deteksi Panas Tubuh untuk Mode Malam

## Pendahuluan
Proyek ini merupakan kacamata pintar untuk mendeteksi panas tubuh dan gerakan di malam hari, dilengkapi dengan berbagai fitur canggih.

## Fitur

1. Deteksi Gerakan
2. Kalibrasi Otomatis
3. Peringatan Suara
4. Penyimpanan Data
5. Kontrol Bluetooth
6. GPS Tracking
7. Peta Termal
8. Pengaturan Sensitivitas
9. Mode Hemat Energi
10. Integrasi Kamera

## Komponen yang Dibutuhkan:
 * **Arduino Nano atau Pro Mini** (sebagai mikrokontroler)
 * **MLX90640 IR Thermal Camera** (untuk deteksi panas)
 * **OLED Display 128x64** (untuk tampilan HUD)
 * **Lensa dan Bingkai Kacamata** (untuk pemasangan komponen)
 * **Baterai Li-Po 3.7V dan Modul Pengisian TP4056**
 * **Resistor, kapasitor, dan kabel jumper untuk koneksi**
 * **PCB Protoboard untuk menyusun rangkaian**


## Langkah-langkah Pembuatan:
1. Penyusunan Komponen:
 * Hubungkan **MLX90640** dengan Arduino:
  * SDA ke A4
  * SCL ke A5
  * VCC ke 3.3V
  * GND ke GND
 * Hubungkan **OLED Display** dengan Arduino:
  * SDA ke A4
  * SCL ke A5
  * VCC ke 3.3V atau 5V (tergantung jenis layar)
  * GND ke GND


2. Membuat Kacamata:
 * Pasang **MLX90640** dan **OLED Display** ke lensa dan bingkai kacamata.
 * Atur lensa dan bingkai sehingga komponen tidak mengganggu pandangan pengguna.
 * Gunakan PCB Protoboard untuk menyusun rangkaian secara kompak dan aman di belakang bingkai.




3. Pengisian Daya:
 * Hubungkan modul **TP4056** untuk pengisian daya baterai.
 * Pastikan pengaturan pengisian daya sesuai dengan spesifikasi baterai yang digunakan.


## Instalasi

1. **Persiapan:**
   - Hubungkan semua komponen sesuai diagram.
   - Instal pustaka Arduino yang dibutuhkan.

2. **Unggah Kode:**
   - Unggah `main.ino` ke Arduino.
   - Pastikan semua file `.ino` lainnya disertakan dalam folder yang sama dengan `main.ino`.

3. **Konfigurasi:**
   - Sesuaikan parameter seperti sensitivitas dan pengaturan Bluetooth sesuai kebutuhan.

4. **Pengujian:**
   - Uji sistem di lingkungan yang sesuai dan kalibrasi sensor jika diperlukan.

## Lisensi

Proyek ini dilisensikan di bawah MIT License. Silakan lihat file `LICENSE` untuk detail lebih lanjut.
