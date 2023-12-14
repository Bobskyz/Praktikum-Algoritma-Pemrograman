# 🖥️ Praktikum Algoritma Pemrograman
<a href="https://git.io/typing-svg"><img src="https://readme-typing-svg.demolab.com?font=Century&weight=100&size=50&duration=2000&pause=1000&color=00FFFF&vCenter=true&random=false&width=1000&height=100&lines=Hi+There!;Welcome+to+My+Repository" alt="Typing SVG" /></a>
-
👨‍🎓 Name : Dafin Surya<br>
📇 Student ID Number : 23343032<br>
📚 Courses : Informatics<br>
🏫 College : Universitas Negeri Padang<br>
🧑‍🏫️ Lecturer : Randi Proska Sandra, M.Sc<br>
📋 Class Code : INF1.62.1008<br>
📑 Semester : 1<br>

## Job Sheet 1 - Pengantar Algoritma dan Pemrograman
### Algoritma dan Pemrograman :
- **Algoritma :** Algoritma adalah serangkaian langkah yang didefinisikan dengan jelas untuk menyelesaikan masalah atau melakukan tugas tertentu. Ini mirip dengan resep dalam memasak, di mana langkah-langkahnya diikuti secara berurutan untuk mencapai hasil akhir yang diinginkan.

- **Pemrograman :** Pemrograman adalah proses menerjemahkan algoritma ke dalam bahasa pemrograman tertentu sehingga komputer dapat memahami dan menjalankan instruksi-instruksi tersebut. Bahasa pemrograman seperti C, Python, Java, dan lainnya digunakan untuk menulis kode yang dapat dieksekusi oleh komputer.

### Pengenalan Bahasa C :
- **Bahasa C :** Bahasa pemrograman C adalah salah satu bahasa pemrograman yang paling penting dan banyak digunakan dalam pengembangan perangkat lunak. C adalah bahasa yang memiliki sintaksis sederhana dan kuat, sering digunakan untuk sistem operasi, pengembangan perangkat lunak sistem, perangkat lunak tertanam, dan aplikasi lainnya.

### IDE untuk Bahasa C :
- **IDE (Integrated Development Environment) :** IDE menyediakan alat yang diperlukan bagi seorang programmer untuk menulis, menguji, dan mengembangkan perangkat lunak. Beberapa IDE yang sering digunakan untuk bahasa pemrograman C antara lain:
    1. **Code::Blocks :** Code::Blocks adalah IDE gratis dan sumber terbuka untuk bahasa C. Ini menyediakan editor kode, compiler (GCC), debugger, dan alat bantu pengembangan lainnya.
    2. **Dev-C++ :** Meskipun namanya mengandung "C++," Dev-C++ juga mendukung bahasa C. Ini adalah lingkungan pengembangan yang sederhana dan ramah pengguna dengan berbagai fitur seperti editor kode, compiler, dan debugger.
    3. **Visual Studio Code (VS Code) dengan ekstensi C/C++ :** VS Code adalah editor kode yang sangat populer dan dapat disesuaikan. Dengan menambahkan ekstensi C/C++, Anda dapat menggunakannya untuk mengembangkan dalam bahasa C dengan fitur-fitur seperti debugging, linting, dan banyak lagi.

Memilih IDE tergantung pada preferensi pribadi dan kebutuhan pengembangan. Code::Blocks, Dev-C++, dan VS Code dengan ekstensi C/C++ semuanya merupakan pilihan yang populer untuk memulai pengembangan dalam bahasa C.

## Job Sheet 2 - Pemrograman Dasar C
Dalam bahasa pemrograman C, struktur dasarnya terdiri dari :

### Struktur Dasar :
1. **Fungsi `main()` :** Setiap program C dimulai dengan fungsi `main()`. Ini adalah titik awal dari program, di mana eksekusi dimulai.
2. **Direktif Preprocessor (`#include`) :** Dalam C, `#include` digunakan untuk menyertakan file-file header standar atau kustom yang diperlukan untuk program. Misalnya, `#include <stdio.h>` digunakan untuk menyertakan file header standar untuk fungsi input-output (I/O).
3. **Komentar (`/*...*/` atau `//`) :** Komentar digunakan untuk memberikan keterangan dalam kode. Compiler akan mengabaikan komentar saat menjalankan program.

### Input dan Output :
- **Input (`scanf()`) :** `scanf()` digunakan untuk menerima input dari pengguna. Ini memungkinkan program untuk membaca nilai dari keyboard atau input yang diberikan oleh pengguna dan menyimpannya ke dalam variabel yang ditentukan.

Contoh penggunaan `scanf()` :

```c
#include <stdio.h>

int main() {
    int angka;
    printf("Masukkan sebuah angka : ");
    scanf("%d", &angka); // Membaca nilai yang dimasukkan oleh pengguna
    printf("Angka yang dimasukkan adalah : %d\n", angka); // Menampilkan nilai yang dimasukkan
    return 0;
}
```

- **Output (`printf()`) :** `printf()` digunakan untuk menampilkan output ke layar. Ini memungkinkan program untuk menampilkan pesan atau nilai dari variabel ke layar.

Contoh penggunaan `printf()` :

```c
#include <stdio.h>

int main() {
    int angka = 10;
    printf("Nilai variabel angka adalah : %d\n", angka); // Menampilkan nilai variabel angka
    return 0;
}
```

Kedua fungsi, `printf()` dan `scanf()`, membutuhkan format string yang menggambarkan tipe data yang diharapkan (`%d` untuk integer, `%f` untuk float, `%c` untuk karakter, dll.) dan variabel di mana nilai akan disimpan atau dari mana nilai akan diambil.
C memiliki banyak fungsi I/O lainnya di luar `printf()` dan `scanf()` yang dapat digunakan untuk membaca dan menulis ke file, tetapi untuk input-output dasar, fungsi-fungsi ini seringkali sudah cukup.

## Job Sheet 3 - Variabel, Konstanta dan Tipe Data
### Variabel dan Konstanta :
- **Variabel :** Variabel adalah lokasi penyimpanan yang diberi nama di dalam memori komputer yang nilainya dapat berubah selama jalannya program. Contohnya: `int angka = 5;` di mana `angka` adalah variabel dengan nilai awal 5.
- **Konstanta :** Konstanta adalah nilai yang tetap dan tidak dapat diubah selama eksekusi program. Ada dua jenis utama: konstanta literal (nilai tetap langsung seperti `5`, `3.14`, atau `'A'`) dan konstanta simbolik yang didefinisikan oleh preprocessor (`#define PI 3.14`).

### Tipe Data Fundamental :
- **Tipe Data :** Tipe data adalah jenis nilai yang dapat disimpan dalam variabel. Tipe data fundamental dalam C meliputi :
    - **Integer (`int`, `short`, `long`, `long long`) :** Untuk menyimpan bilangan bulat.
    - **Floating Point (`float`, `double`) :** Untuk menyimpan angka desimal.
    - **Character (`char`) :** Untuk menyimpan karakter atau huruf.
    - **Boolean (`_Bool`) :** Untuk menyimpan nilai kebenaran (`0` untuk salah, `1` untuk benar).

### Type Casting :
- **Type Casting :** Ini adalah proses mengubah tipe data dari satu jenis ke tipe data lain. Contohnya, dari `int` ke `float` atau sebaliknya. Ada dua jenis: *implicit* (otomatis oleh compiler) dan *explicit* (dilakukan secara manual oleh programmer menggunakan operator casting seperti `(float)` atau `(int)`).

### Keywords dalam Bahasa C :
- **Keywords :** Keywords atau kata kunci adalah kata-kata yang telah dipesan oleh bahasa pemrograman C untuk tujuan tertentu. Contoh beberapa kata kunci dalam C antara lain `if`, `else`, `for`, `while`, `int`, `float`, `char`, `return`, dan lainnya. Keywords ini tidak dapat digunakan sebagai nama variabel karena sudah memiliki makna khusus dalam bahasa C.

Ini adalah konsep-konsep dasar dalam bahasa C yang sangat penting untuk dipahami oleh programmer. Dengan pemahaman yang baik tentang variabel, konstanta, tipe data, type casting, dan keywords, seseorang dapat memulai perjalanan dalam mempelajari dan menggunakan bahasa pemrograman C dengan lebih efektif.

## Job Sheet 4 - Operator
- **Operator Aritmatika :** Digunakan untuk melakukan operasi matematika pada variabel numerik.
    - `+` (penambahan)
    - `-` (pengurangan)
    - `*` (perkalian)
    - `/` (pembagian)
    - `%` (modulus, sisa dari pembagian)
    - `++` (increment, menambahkan satu ke nilai variabel)
    - `--` (decrement, mengurangi satu dari nilai variabel)

- **Operator Penugasan :** Digunakan untuk memberikan nilai ke variabel.
    - `=` (menugaskan nilai)
    - `+=`, `-=`, `*=`, `/=`, `%=` (penugasan dengan operasi aritmatika)

- **Operator Pembanding :** Digunakan untuk membandingkan nilai antara dua variabel.
    - `==` (sama dengan)
    - `!=` (tidak sama dengan)
    - `>` (lebih besar dari)
    - `<` (lebih kecil dari)
    - `>=` (lebih besar dari atau sama dengan)
    - `<=` (lebih kecil dari atau sama dengan)

- **Operator Logika :** Digunakan untuk melakukan operasi logika pada nilai boolean.
    - `&&` (AND logika)
    - `||` (OR logika)
    - `!` (NOT logika)

- **Operator Bitwise :** Digunakan untuk melakukan operasi pada level bit pada nilai numerik.
    - `&` (AND bitwise)
    - `|` (OR bitwise)
    - `^` (XOR bitwise)
    - `<<` (left shift, menggeser bit ke kiri)
    - `>>` (right shift, menggeser bit ke kanan)

- **Operator Kondisional (Ternary) :** Menyediakan cara singkat untuk menulis pernyataan if-else.
    - `? :` (Ternary operator)
    
Contoh penggunaan operator kondisional :
```c
int a = 10, b = 5;
int max = (a > b) ? a : b; // Jika a lebih besar dari b, nilai max adalah a, jika tidak, nilai max adalah b
```

Operator-operator ini membantu dalam melakukan operasi matematika, penugasan nilai, perbandingan, logika, dan manipulasi bit, memungkinkan pengembang untuk mengontrol aliran program dan melakukan operasi matematika serta logika dalam bahasa C dengan lebih efisien.

## Job Sheet 5 - FLow Control (Decision Making)
- **If Statement :** Digunakan untuk melakukan pengujian kondisi tunggal.
    ```c
    if (kondisi) {
        // blok kode yang akan dijalankan jika kondisi benar (true)
    }
    ```

- **If-else Statement :** Digunakan untuk melakukan pengujian kondisi ganda.
    ```c
    if (kondisi) {
        // blok kode yang akan dijalankan jika kondisi benar (true)
    } else {
        // blok kode yang akan dijalankan jika kondisi salah (false)
    }
    ```

- **Switch Case :** Digunakan ketika ingin memilih dari sejumlah besar kemungkinan.
    ```c
    switch (ekspresi) {
        case nilai1:
            // blok kode jika ekspresi sama dengan nilai1
            break;
        case nilai2:
            // blok kode jika ekspresi sama dengan nilai2
            break;
        default:
            // blok kode yang akan dijalankan jika tidak ada nilai yang cocok
    }
    ```

- **Operator Ternary :** Menyediakan cara singkat untuk menulis pernyataan if-else dalam satu baris.
    ```c
    kondisi ? nilai_jika_true : nilai_jika_false;
    ```

Contoh penggunaan :
```c
int a = 10, b = 5;
int max = (a > b) ? a : b; // Jika a lebih besar dari b, nilai max adalah a, jika tidak, nilai max adalah b
```

- **Percabangan Bersarang (Nested) :** Merupakan penggunaan percabangan di dalam percabangan.
    ```c
    if (kondisi1) {
        // blok kode jika kondisi1 benar (true)
        if (kondisi2) {
            // blok kode jika kondisi2 benar (true)
        } else {
            // blok kode jika kondisi2 salah (false)
        }
    } else {
        // blok kode jika kondisi1 salah (false)
    }
    ```

Percabangan memberikan fleksibilitas dalam mengontrol aliran program berdasarkan kondisi tertentu. If dan if-else digunakan untuk percabangan sederhana atau ganda, switch case digunakan untuk pilihan dari banyak nilai, operator ternary untuk percabangan singkat, dan percabangan bersarang untuk situasi kompleks yang memerlukan pengecekan berjenjang. Dengan memahami dan menggunakan percabangan secara efektif, Anda dapat mengendalikan alur program dengan lebih baik.

## Job Sheet 6 - Flow Control (Looping)
- **Perulangan for :** Digunakan ketika jumlah iterasi yang tepat diketahui di awal.
    ```c
    for (inisialisasi; kondisi; iterasi) {
        // blok kode yang akan diulang selama kondisi benar (true)
    }
    ```

Contoh penggunaan :
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", i); // Mengulang dari 0 hingga 4
}
```

- **Perulangan while :** Digunakan ketika jumlah iterasi tidak diketahui di awal, tetapi kondisi untuk perulangan diketahui.
    ```c
    while (kondisi) {
        // blok kode yang akan diulang selama kondisi benar (true)
        // perhatikan agar kondisi berubah agar perulangan tidak tak henti-hentinya
    }
    ```

Contoh penggunaan :
```c
int i = 0;
while (i < 5) {
    printf("%d ", i); // Mengulang dari 0 hingga 4
    i++;
}
```

- **Perulangan do while :** Sama dengan while, namun blok kode di dalamnya akan dieksekusi minimal satu kali sebelum mengevaluasi kondisi.
    ```c
    do {
        // blok kode yang akan diulang selama kondisi benar (true)
        // pastikan kondisi diuji setelah blok kode dieksekusi
    } while (kondisi);
    ```

Contoh penggunaan :
```c
int i = 0;
do {
    printf("%d ", i); // Akan mencetak 0 meskipun kondisi tidak terpenuhi karena do dieksekusi setidaknya sekali
    i++;
} while (i > 5);
```

- **Perulangan Bersarang (Nested Loop) :** Penggunaan perulangan di dalam perulangan.
    ```c
    for (inisialisasi; kondisi; iterasi) {
        for (inisialisasi; kondisi; iterasi) {
            // blok kode yang akan diulang
        }
    }
    ```

Contoh penggunaan :
```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        printf("%d,%d ", i, j); // Mengulang kombinasi i dan j dari 1 hingga 3
    }
}
```

Penggunaan perulangan di dalam bahasa C memberikan fleksibilitas dalam mengulangi kode berulang kali. for digunakan ketika jumlah iterasi diketahui, while digunakan saat jumlah iterasi tidak pasti, do while mirip dengan while dengan perbedaan dieksekusinya blok kode minimal sekali, dan perulangan bersarang membantu dalam mengulang kode di dalam kode. Dengan memahami perbedaan dan penggunaannya, Anda bisa menggunakan perulangan dengan lebih efektif dalam pembuatan program.

## Job Sheet 7 - Array
Array dalam bahasa C adalah struktur data yang digunakan untuk menyimpan kumpulan elemen data yang serupa dalam satu variabel. Elemen-elemen ini dapat diakses menggunakan indeks yang merupakan posisi relatif dari setiap elemen di dalam array.

### Pengertian Array :
- **Array :** Sebuah struktur data yang terdiri dari elemen-elemen dengan tipe data yang sama, ditempatkan secara berurutan dalam memori dan diakses menggunakan indeks.

### Penggunaan Array dalam Bahasa C :
#### Deklarasi Array :
```c
// Mendeklarasikan array dengan 5 elemen bertipe int
int angka[5];
```

#### Menginisialisasi Array :
```c
// Mendeklarasikan dan menginisialisasi array secara langsung
int nilai[] = {10, 20, 30, 40, 50};
```

#### Mengakses Elemen Array :
```c
// Mengakses elemen ke-3 dari array nilai
printf("%d", nilai[2]); // Output: 30 (indeks dimulai dari 0)
```

#### Mengubah Nilai Elemen Array :
```c
// Mengubah nilai elemen ke-4 dari array nilai
nilai[3] = 99;
```

#### Penggunaan dalam Perulangan :
```c
// Menggunakan array dalam perulangan
for (int i = 0; i < 5; i++) {
    printf("%d ", nilai[i]); // Menampilkan seluruh elemen array
}
```

#### Array Multidimensi :
```c
// Mendeklarasikan array dua dimensi
int matriks[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

Array memungkinkan penggunaan memori yang efisien dan akses cepat ke elemen-elemennya menggunakan indeks. Namun, perlu diingat bahwa dalam bahasa C, array memiliki ukuran tetap yang ditentukan saat pendeklarasian, dan ukuran array harus diketahui sebelum kompilasi program.

## Job Sheet 8 - Fungsi dan Prosedur
### Fungsi :
- **Fungsi :** Sebuah blok kode yang dirancang untuk melakukan tugas tertentu dan dapat dipanggil dari bagian lain dalam program.

### Penggunaan Fungsi :
#### Pendefinisian Fungsi :
```c
// Pendefinisian fungsi
int tambah(int a, int b) {
    return a + b;
}
```

#### Memanggil Fungsi :
```c
// Memanggil fungsi
int hasil = tambah(5, 3); // Memanggil fungsi tambah dengan parameter 5 dan 3
printf("%d", hasil); // Output: 8
```

### Fungsi Rekursif :
- **Fungsi Rekursif :** Fungsi yang memanggil dirinya sendiri untuk menyelesaikan masalah secara berulang.
```c
int faktorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
```

### Variabel Lokal dan Global :
- **Variabel Lokal :** Variabel yang dideklarasikan di dalam sebuah fungsi dan hanya dapat diakses di dalam fungsi tersebut.
- **Variabel Global :** Variabel yang dideklarasikan di luar fungsi dan dapat diakses oleh seluruh fungsi dalam program.

```c
int globalVar = 10; // Variabel global

void fungsi() {
    int lokalVar = 5; // Variabel lokal
    // ...
}
```

### Pass by Value :
- **Pass by Value :** Saat argumen dikirim ke fungsi, salinan nilai dari argumen yang sebenarnya dikirimkan ke parameter fungsi.
```c
void ganda(int x) {
    x = x * 2; // x merupakan salinan nilai yang dikirim, perubahan tidak mempengaruhi nilai asli
}
```

### Pass by Reference :
- **Pass by Reference :** Saat argumen dikirim ke fungsi, alamat memori dari argumen yang sebenarnya dikirimkan ke parameter fungsi.
```c
void tambahSepuluh(int *x) {
    *x += 10; // Mengubah nilai variabel yang direferensikan oleh pointer x
}
```

Konsep variabel lokal dan global berkaitan dengan cakupan variabel dalam program. Pass by value dan pass by reference menentukan bagaimana nilai atau alamat variabel dikirim ke dalam fungsi. Pass by value menggunakan salinan nilai, sedangkan pass by reference menggunakan alamat memori variabel tersebut. Fungsi rekursif memanggil dirinya sendiri untuk menyelesaikan suatu tugas secara berulang.

## Job Sheet 9 - Pointer
Pointer adalah variabel yang berisi alamat memori dari variabel lain. Pointer memungkinkan akses langsung ke lokasi memori, yang berguna untuk beberapa operasi seperti manipulasi data secara langsung atau pengembangan mekanisme yang lebih efisien dalam penggunaan memori.

### Pengertian Pointer :
- **Pointer :** Variabel yang menyimpan alamat memori dari variabel lain.

### Penggunaan Pointer :
#### Deklarasi Pointer :
```c
int *ptr; // Deklarasi pointer ke variabel bertipe int
```

#### Inisialisasi Pointer :
```c
int angka = 5;
int *ptr = &angka; // Inisialisasi pointer dengan alamat memori dari variabel angka
```

#### Menggunakan Pointer untuk Dereferensi (Mengakses Nilai yang Tersimpan di Alamat yang Ditunjuk) :
```c
printf("%d", *ptr); // Output: 5 (nilai yang tersimpan di alamat yang ditunjuk oleh ptr)
```

### Pointer untuk Pass by Reference :
- **Pointer untuk Pass by Reference :** Penggunaan pointer untuk mengirim alamat memori variabel ke dalam fungsi, sehingga perubahan yang dilakukan di dalam fungsi akan mempengaruhi nilai variabel asli.

```c
void tambahSepuluh(int *x) {
    *x += 10; // Mengubah nilai variabel yang direferensikan oleh pointer x
}
```

### Pointer untuk Mengakses Array :
#### Penggunaan Pointer untuk Mengakses Elemen Array :
```c
int arr[] = {10, 20, 30, 40, 50};
int *ptr = arr; // Inisialisasi pointer dengan alamat memori array

for (int i = 0; i < 5; i++) {
    printf("%d ", *(ptr + i)); // Mengakses elemen array menggunakan pointer
}
```

Pointer sangat berguna dalam bahasa C untuk mengakses dan memanipulasi data dalam memori secara langsung. Dalam penggunaan praktis, mereka dapat digunakan untuk menyederhanakan operasi pada variabel, mengakses array, dan memungkinkan pengembangan struktur data yang lebih fleksibel. Penggunaan pointer untuk pass by reference memungkinkan untuk mengubah nilai variabel secara langsung dalam fungsi.

## Job Sheet 10 - Enumerasi dan Structure
### Enum :
- **Enum (Enumerations) :** Digunakan untuk mendefinisikan kumpulan konstanta bernama.

#### Penggunaan Enum :
```c
enum Hari {Minggu, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu}; // Pendefinisian enum

enum Hari hariIni = Rabu; // Inisialisasi variabel hariIni dengan nilai Rabu
```

### Struct :
- **Struct (Structure) :** Digunakan untuk membuat tipe data baru dengan gabungan beberapa tipe data.

#### Penggunaan Struct :
```c
struct Mahasiswa {
    char nama[50];
    int umur;
    float ipk;
};

struct Mahasiswa mhs1; // Mendefinisikan variabel mhs1 dengan tipe struct Mahasiswa
```

### Typedef pada Struct :
- **Typedef pada Struct :** Digunakan untuk memberi alias pada tipe data struct.

#### Penggunaan Typedef pada Struct :
```c
typedef struct {
    char nama[50];
    int umur;
    float ipk;
} Mahasiswa;

Mahasiswa mhs1; // Mendefinisikan variabel mhs1 dengan tipe Mahasiswa (alias untuk struct Mahasiswa)
```

### Struct Bersarang :
- **Struct Bersarang :** Menggunakan struct di dalam struct.

```c
struct Alamat {
    char jalan[50];
    char kota[50];
};

struct Anggota {
    char nama[50];
    int umur;
    struct Alamat alamat; // Struct Alamat digunakan di dalam struct Anggota
};
```

### Passing Struct ke dalam Fungsi :
#### Passing Struct by Value :
```c
void tampilkanMahasiswa(Mahasiswa mhs) {
    printf("Nama: %s, Umur: %d, IPK: %.2f\n", mhs.nama, mhs.umur, mhs.ipk);
}

tampilkanMahasiswa(mhs1); // Memanggil fungsi dengan variabel struct Mahasiswa sebagai argumen
```

#### Passing Struct by Reference (Menggunakan Pointer) :
```c
void ubahUmur(Mahasiswa *mhs, int umurBaru) {
    mhs->umur = umurBaru;
}

ubahUmur(&mhs1, 25); // Mengubah nilai umur dari variabel mhs1 menggunakan pointer
```

Enum, struct, dan typedef memungkinkan untuk membuat struktur data yang lebih kompleks dan terorganisir dalam bahasa C. Dengan struct, Anda dapat menggabungkan beberapa tipe data menjadi satu unit, sementara enum berguna untuk mendefinisikan kumpulan konstanta. Penggunaan typedef memberi kemudahan dalam menggunakan tipe data yang telah didefinisikan. Struct bersarang memungkinkan untuk membuat struktur yang lebih terstruktur, dan passing struct ke dalam fungsi memungkinkan manipulasi data dalam struct.

## Job Sheet 11 - File Handling in C
Dalam bahasa C, ada beberapa fungsi standar yang digunakan untuk membaca dan menulis file. Pada dasarnya, prosesnya melibatkan tiga langkah: membuka file, membaca atau menulis data, dan menutup file setelah selesai.

### Membaca File dalam Bahasa C :
#### Langkah 1 : Membuka File :
```c
FILE *filePointer; // Deklarasi pointer ke FILE (tipe data bawaan untuk file)
filePointer = fopen("nama_file.txt", "r"); // Membuka file untuk dibaca ("r" = read mode)

if (filePointer == NULL) {
    // Penanganan jika gagal membuka file
} else {
    // Melanjutkan dengan membaca file
}
```

#### Langkah 2 : Membaca Data dari File :
```c
char karakter;
while ((karakter = fgetc(filePointer)) != EOF) {
    printf("%c", karakter); // Contoh: Membaca karakter demi karakter dari file dan menampilkannya
}
```

#### Langkah 3 : Menutup File Setelah Selesai Membaca :
```c
fclose(filePointer); // Menutup file setelah selesai membaca
```

### Menulis ke dalam File dalam Bahasa C :
#### Langkah 1 : Membuka File untuk Penulisan :
```c
FILE *filePointer; 
filePointer = fopen("nama_file.txt", "w"); // Membuka file untuk ditulis ("w" = write mode)

if (filePointer == NULL) {
    // Penanganan jika gagal membuka file
} else {
    // Melanjutkan dengan menulis ke file
}
```

#### Langkah 2 : Menulis Data ke dalam File :
```c
fprintf(filePointer, "Ini adalah teks yang akan ditulis ke dalam file.\n"); // Contoh: Menulis teks ke dalam file
```

#### Langkah 3 : Menutup File Setelah Selesai Menulis :
```c
fclose(filePointer); // Menutup file setelah selesai menulis
```

Perlu diperhatikan bahwa :
- `"r"` digunakan untuk mode baca, `"w"` untuk mode tulis (menimpa isi file lama), dan `"a"` untuk mode append (menambahkan ke akhir file).
- `fgetc()` digunakan untuk membaca karakter demi karakter dari file.
- `fprintf()` digunakan untuk menulis data ke dalam file.

Penting untuk mengecek keberhasilan pembukaan file (`filePointer != NULL`) sebelum membaca atau menulis, serta selalu menutup file setelah selesai untuk mencegah kehilangan data atau kesalahan pada file.
