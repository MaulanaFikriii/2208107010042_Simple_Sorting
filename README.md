# 2208107010042_Simple_Sorting
Soal Tugas 2 Struktur Data dan Algoritma

Untuk menjalankan kode program ini, Anda perlu mengikuti langkah-langkah berikut:
1. Kompilasi kode program menggunakan compiler C, dengan perintah gcc sorting_program.c -o sorting_program.
2. Setelah kompilasi selesai, jalankan program yang dihasilkan dengan perintah ./sorting_program.

Kode program ini menggunakan beberapa fungsi:
1. generateRandomIntegers(int *arr, int n): Fungsi ini digunakan untuk mengisi array arr dengan bilangan bulat acak. Fungsi ini menggunakan srand(time(NULL)) untuk mengatur seed generator nomor acak berdasarkan waktu saat ini. Kemudian, loop for digunakan untuk mengisi array dengan bilangan acak.
2. bubbleSort(int *arr, int n): Fungsi ini mengurutkan array arr menggunakan algoritma bubble sort. Ini adalah algoritma sederhana yang membandingkan pasangan elemen berturut-turut dan menukar mereka jika mereka berada dalam urutan yang salah.]
3. selectionSort(int *arr, int n): Fungsi ini mengurutkan array arr menggunakan algoritma selection sort. Ini juga adalah algoritma sederhana yang secara berulang memilih elemen terkecil dari sisa array yang tidak terurut dan menukarnya dengan elemen pertama yang belum diurutkan
4. insertionSort(int *arr, int n): Fungsi ini mengurutkan array arr menggunakan algoritma insertion sort. Ini adalah algoritma sederhana yang secara iteratif membangun hasil akhir dengan memindahkan satu per satu elemen dari sisa array ke posisi yang benar dalam array yang sudah diurutkan.

Ketika program dijalankan, ia akan mencetak tabel yang menampilkan jenis algoritma, jumlah bilangan, dan waktu eksekusi dalam milidetik untuk setiap jenis algoritma dan ukuran array yang berbeda. Setelah itu, program akan membebaskan memori yang dialokasikan secara dinamis dan menyelesaikan eksekusi.
