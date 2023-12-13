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

## Job Sheet 5 - FLow Control (Decision Making)

## Job Sheet 6 - Flow Control (Looping)

## Job Sheet 7 - Array

## Job Sheet 8 - Fungsi dan Prosedur

## Job Sheet 9 - Pointer

## Job Sheet 10 - Enumerasi dan Structure

## Job Sheet 11 - File Handling in C
