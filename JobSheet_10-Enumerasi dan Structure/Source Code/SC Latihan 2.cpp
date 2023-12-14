//Developed by : Dafin Surya
#include<stdio.h>

struct Zodiak {
    int DariHari;
    int DariBulan;
    int SampaiHari;
    int SampaiBulan;
    const char *nama;
};
const char *TentukanZodiak(int hari, int bulan, struct Zodiak zodiak[], int JumlahZodiak) {
    for (int a = 0; a < JumlahZodiak; a++) {
        if((bulan == zodiak[a].DariBulan and hari >= zodiak[a].DariHari) or
           (bulan == zodiak[a].SampaiBulan and hari <= zodiak[a].SampaiHari)) {
            return zodiak[a].nama;
        }
    }
    return "Zodiak Tidak Diketahui";
}
int main() {
    struct Zodiak zodiak[] = {
        {20, 1, 18, 2, "Aquarius"},
        {19, 2, 20, 3, "Pisces"},
        {21, 3, 19, 4, "Aries"},
        {20, 4, 20, 5, "Taurus"},
        {21, 5, 20, 6, "Gemini"},
        {21, 6, 22, 7, "Cancer"},
        {23, 7, 22, 8, "Leo"},
        {23, 8, 22, 9, "Virgo"},
        {23, 9, 22, 10, "Libra"},
        {23, 10, 21, 11, "Scorpio"},
        {22, 11, 21, 12, "Sagittarius"},
        {22, 12, 19, 1, "Capricorn"}
    };
    int tanggal, bulan, tahun;
    printf ("Tanggal Lahir Anda [DD-MM-YYYY] : ");
    scanf ("%d-%d-%d", &tanggal, &bulan, &tahun);

    const char *zodiakAnda = TentukanZodiak(tanggal, bulan, zodiak, sizeof(zodiak) / sizeof(zodiak[0]));
    printf ("Zodiak Anda adalah : %s\n", zodiakAnda);

    return 0;
}
