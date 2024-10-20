# Perhitungan Kecepatan Motor Robot 4 roda omniwheel menggunakan inverse kinematics

Repositori ini berisi program C++ yang mensimulasikan perhitungan kecepatan motor robot berdasarkan input vektor kecepatan dalam ruang 2D. Program ini menghitung kecepatan motor menggunakan matriks transformasi dan menyediakan fungsi untuk menyimpan serta memuat data kecepatan dari file.

## Fitur

- **Transformasi Matriks**: Kecepatan motor robot dihitung menggunakan matriks transformasi berdasarkan arah robot.
- **Input/Output File**: Kecepatan motor yang dihitung dapat disimpan ke dalam file (`output.txt`) dan dimuat kembali untuk penggunaan di lain waktu.
- **Input Kecepatan yang Dapat Disesuaikan**: Pengguna dapat memasukkan komponen kecepatan X, Y, dan Z untuk menghitung kecepatan motor secara dinamis.
- **Simulasi Kontrol Motor**: Program menghitung kecepatan 4 motor berdasarkan vektor kecepatan yang diberikan.

## Cara Kerja

1. **Set Up Matriks**: Matriks 4x3 digunakan untuk mengubah input kecepatan menjadi kecepatan motor berdasarkan sudut arah motor.
2. **Perhitungan Kecepatan**: Input vektor kecepatan (X, Y, Z) diberikan oleh pengguna, lalu program akan menghitung kecepatan untuk masing-masing motor berdasarkan matriks transformasi.
3. **Penyimpanan dan Pemanggilan Data**: Hasil kecepatan motor dapat disimpan dalam file dan dimuat kembali di lain waktu jika diperlukan.
4. **Output Kecepatan Motor**: Kecepatan untuk setiap motor akan ditampilkan di konsol dan disimpan ke dalam file `output.txt`.

## Cara Menggunakan

1. Clone repositori ini:
    ```bash
    git clone https://github.com/username/repository-name.git
    ```
2. Kompilasi program C++:
    ```bash
    g++ -o robot_speed_calculator robot_speed_calculator.cpp
    ```
3. Jalankan program:
    ```bash
    ./robot_speed_calculator
    ```
4. Masukkan vektor kecepatan untuk X, Y, dan Z sesuai permintaan, lalu program akan menampilkan kecepatan motor dan menyimpannya ke dalam file `output.txt`.
