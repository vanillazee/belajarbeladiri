# Two Sum

## Deskripsi
Diberikan sebuah array integer `nums` dan sebuah integer `target`.  
Tugasmu adalah mengembalikan **indeks dari dua angka** di dalam array tersebut yang **jumlahnya sama dengan `target`**.

Kamu dapat mengasumsikan bahwa:
- Setiap input memiliki **tepat satu solusi**.
- Kamu **tidak boleh** menggunakan elemen yang sama dua kali.

Urutan pengembalian jawaban **tidak masalah**.

---

## Contoh

### Contoh 1
Input: nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]  
Penjelasan: Karena nums[0] + nums[1] = 2 + 7 = 9, maka hasilnya [0, 1].  

### Contoh 2
Input: nums = [3, 2, 4], target = 6  
Output: [1, 2]  

### Contoh 3
Input: nums = [3, 3], target = 6  
Output: [0, 1]  

---

## Batasan
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- **Hanya ada satu jawaban yang valid.**

---

## Catatan
Gunakan struktur data seperti **hash map** untuk mendapatkan solusi dengan kompleksitas waktu **O(n)**.