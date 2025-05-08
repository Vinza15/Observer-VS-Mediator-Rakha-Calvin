# Observer-VS-Mediator-Rakha-Calvin

## 1. Perbedaan Struktur

### a. Observer Pattern

- **Struktur**: `Player` secara langsung menyimpan dan mengelola daftar observer seperti `UI`, `SoundSystem`, dan `ScoreSystem`.
- **Proses**: Saat `Player.attack()` dipanggil, `Player` langsung menotifikasi semua observer tersebut.
- **Ciri utama**: Tight coupling — `Player` tahu siapa saja yang akan merespons event-nya.

**Diagram:**
Player
├── UI
├── SoundSystem
└── ScoreSystem


---

### b. Mediator Pattern

- **Struktur**: `Player` tidak mengenal komponen lain secara langsung.
- **Proses**: `Player` mengirim event ke `EventMediator`, yang kemudian meneruskan ke listener terdaftar.
- **Ciri utama**: Loose coupling — komponen tidak saling mengenal.

**Diagram:**
Player → EventMediator → [UI, SoundSystem, ScoreSystem]


---

## 2. Mana yang Lebih Praktis untuk Game Skala Kecil?

**Observer Pattern lebih praktis**, karena:

- Implementasinya langsung dan eksplisit.
- Lebih sedikit file dan lebih mudah di-debug.
- Cocok untuk skenario sederhana dengan sedikit event dan listener.
- Tidak perlu membuat objek perantara (Mediator), sehingga setup lebih cepat.

---

## 3. Mana yang Lebih Scalable untuk Game Skala Besar?

**Mediator Pattern lebih scalable**, karena:

- Komponen tidak perlu mengetahui siapa pengirim atau penerima event lainnya.
- Event kompleks dapat dikelola secara terpusat melalui `EventMediator`.
- Mempermudah testing dan modifikasi.
- Mendukung arsitektur modular dan maintainable dalam jangka panjang.

---

## 4. Risiko yang Harus Diwaspadai

### a. Observer Pattern
- **Tight coupling**: `Player` memiliki banyak ketergantungan langsung.
- Saat jumlah observer bertambah, `Player` menjadi kompleks dan sulit dikembangkan.

### b. Mediator Pattern
- **God Object**: `EventMediator` bisa menyimpan terlalu banyak tanggung jawab.
- Jika tidak dirancang dengan baik, bisa mempersulit tracing dan debugging event.

---

## 🔚 Kesimpulan

- Gunakan **Observer Pattern** untuk sistem event yang sederhana dan eksplisit.
- Gunakan **Mediator Pattern** untuk sistem event kompleks yang membutuhkan fleksibilitas dan pemisahan tanggung jawab.
