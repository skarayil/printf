# 📄 ft_printf - C Dilinde Biçimlendirilmiş Çıktı Fonksiyonu

<div align="center">

![42 School](https://img.shields.io/badge/School-42-black?style=for-the-badge&logo=42)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Printf](https://img.shields.io/badge/Project-ft__printf-blue?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

**C dilinde biçimlendirilmiş çıktı üretmek için bir fonksiyon yazmaktır.**

*Bu proje, verilerin belirli bir formatın ekrana yazdırılmasını sağlarken, sistem çağrıları ile çıktı üretimi ve bellek yönetimi üzerine pratik yapma fırsatı sunar.*

[Kurulum](#-kurulum) • [Kullanım](#-kullanım) • [Özellikler](#-desteklenen-özellikler) • [Test](#-test-senaryoları)

</div>

---

## 🎯 Projenin Amacı

<img align="right" alt="Printf Animation" width="300" src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif">

Bu proje, **printf fonksiyonunun yeniden implementasyonu** olarak, C dilinin temel kavramlarını derinlemesine öğrenmeyi hedefler:

### 🚀 **Ana Öğrenme Hedefleri:**

#### 🔧 **Variadic Function Kullanımı**
- `va_list`, `va_start`, `va_arg`, `va_end` makrolarıyla değişken sayıda argüman alan fonksiyon yazma becerisi kazanılır.
- **Practical Skills**: Flexible function design, argument handling

#### 🧩 **Format Ayrıştırma ve Analiz**
- Format string karakter karakter işlenerek, doğru türde veri yazdırma mantığı geliştirilir.
- **Critical Thinking**: Pattern recognition, string parsing

#### 🔢 **Hexadecimal ve Pointer İşlemleri**
- Sayıların onluk sistemden onaltılıya (base 10 → base 16) dönüştürülmesi ve pointer adreslerinin yazdırılması öğrenilir.
- **Low-level Programming**: Memory address manipulation, number systems

#### 📝 **String Manipülasyonu ve Sayı Dönüştürme**
- Sayıların uzunluğunu hesaplama ve sayıları karakter dizisi olarak yazma işlemleri pratiğe dökülür.
- **Algorithm Design**: Efficient conversion algorithms

#### 🏗️ **Modüler Kod Yapısı**
- Fonksiyonlar tek sorumluluk prensibine uygun, okunabilır ve test edilebilir şekilde yazılır.
- **Software Engineering**: Clean code principles, maintainability

#### 🛡️ **Bellek Güvenliği**
- Bellek yönetimi ve `write` fonksiyonu güvenli kullanılarak tanımsız davranışlardan (undefined behavior) kaçınılır.
- **Security**: Buffer overflow prevention, safe memory handling

#### 🔍 **Debug ve Test Yetkinliği**
- Geliştirilen fonksiyonların standart `printf` ile çıktısı karşılaştırılarak doğruluk ve kararlılık testleri yapılır.
- **Quality Assurance**: Unit testing, regression testing

#### ⚙️ **Düşük Seviyeli Çıktı Yönetimi**
- C dilinde düşük seviyede nasıl çıktı üretildiği ve `write` sistem çağrısı ile bu çıktının nasıl kontrol edildiği uygulamalı olarak öğrenilir.
- **System Programming**: File descriptors, system calls

---

## ✨ Desteklenen Özellikler

<div align="center">

![Conversions](https://img.shields.io/badge/Conversions-8-brightgreen?style=for-the-badge)
![Compatibility](https://img.shields.io/badge/printf-Compatible-blue?style=for-the-badge)

</div>

### 📋 **Format Specifiers**

| Specifier | Açıklama | Örnek Kullanım | Çıktı |
|-----------|----------|----------------|-------|
| **`%c`** | Karakter yazdırır | `ft_printf("%c", 'A')` | `A` |
| **`%s`** | String yazdırır | `ft_printf("%s", "Hello")` | `Hello` |
| **`%p`** | İşaretçi adresini yazdırır | `ft_printf("%p", ptr)` | `0x7fff5fbff8ac` |
| **`%d`** | Ondalık tam sayı yazdırır | `ft_printf("%d", 42)` | `42` |
| **`%i`** | Ondalık tam sayı yazdırır | `ft_printf("%i", -42)` | `-42` |
| **`%u`** | İşaretsiz ondalık sayı | `ft_printf("%u", 42u)` | `42` |
| **`%x`** | Hexadecimal (küçük harf) | `ft_printf("%x", 255)` | `ff` |
| **`%X`** | Hexadecimal (büyük harf) | `ft_printf("%X", 255)` | `FF` |
| **`%%`** | Yüzde işareti yazdırır | `ft_printf("%%")` | `%` |

### 🎨 **Özellik Gösterimi**

```c
// Karakter ve String işlemleri
ft_printf("Karakter: %c\n", 'X');              // Karakter: X
ft_printf("String: %s\n", "42 School");        // String: 42 School

// Sayısal dönüşümler
ft_printf("Decimal: %d\n", 2024);              // Decimal: 2024
ft_printf("Unsigned: %u\n", 4294967295u);      // Unsigned: 4294967295

// Hexadecimal dönüşümler
ft_printf("Hex (lower): %x\n", 255);           // Hex (lower): ff
ft_printf("Hex (upper): %X\n", 255);           // Hex (upper): FF

// Pointer işlemleri
int num = 42;
ft_printf("Pointer: %p\n", &num);              // Pointer: 0x7fff5fbff8ac
```

---

## 📁 Dosya Yapısı

```
ft_printf/
│
├── 📄 Makefile                 # Projeyi derlemek için makefile komutları
├── 🚀 ft_printf.c              # ft_printf() fonksiyonunun ana implementasyonu
├── 📋 ft_printf.h              # Header dosyası (prototipler ve kütüphaneler)
├── 🔧 ft_printf_utils.c        # Yardımcı fonksiyonlar (çıktı işlemleri)
├── 🔢 ft_printf_base.c         # Taban dönüşümleri için yardımcı fonksiyonlar
└── 📖 README.md                # Proje dokümantasyonu
```

### 📋 **Dosya Açıklamaları**

| Dosya | İçerik | Sorumluluk |
|-------|--------|------------|
| `ft_printf.c` | Ana fonksiyon implementasyonu | Format parsing, argument handling |
| `ft_printf.h` | Header dosyası | Function prototypes, includes |
| `ft_printf_utils.c` | Yardımcı fonksiyonlar | String/character output utilities |
| `ft_printf_base.c` | Base conversion functions | Number system conversions |
| `Makefile` | Build configuration | Compilation rules and targets |

---

## 🚀 Kurulum

### 📋 **Ön Gereksinimler**

![GCC](https://img.shields.io/badge/GCC-Required-red?style=flat-square&logo=gnu&logoColor=white)
![Make](https://img.shields.io/badge/Make-Required-blue?style=flat-square&logo=gnu&logoColor=white)
![Unix](https://img.shields.io/badge/Unix-Compatible-green?style=flat-square&logo=linux&logoColor=white)

- **C Compiler**: `gcc` veya `clang`
- **Make**: Build automation
- **Unix-like System**: Linux, macOS, WSL

### 📥 **Repository Klonlama**

```bash
# Projeyi yerel sisteminize klonlayın
git clone https://github.com/skarayil/printf.git
cd ft_printf
```

### 🔨 **Derleme İşlemi**

```bash
# Kütüphaneyi derle
make

# Temizlik işlemleri
make clean          # Object dosyalarını sil
make fclean         # Tüm oluşturulan dosyaları sil
make re             # Yeniden derle (fclean + make)
```

### 📦 **Çıktı Dosyaları**

```bash
libftprintf.a       # Statik kütüphane dosyası
*.o                 # Object dosyaları (make clean ile silinir)
```

---

## 💻 Kullanım

### 🔗 **Projenize Entegrasyon**

```bash
# 1. Kütüphaneyi derleyin
make

# 2. Projenizde kullanın
gcc -Wall -Werror -Wextra main.c -L. -lftprintf -o program

# 3. Çalıştırın
./program
```

### 📝 **Kod Örnekleri**

#### 🟢 **Temel Kullanım**

```c
#include "ft_printf.h"

int main(void)
{
    // Basit string yazdırma
    ft_printf("Merhaba, %s!\n", "Dünya");
    
    // Sayı yazdırma
    ft_printf("Sayınız: %d\n", 42);
    
    // Karakter yazdırma
    ft_printf("İlk harf: %c\n", 'A');
    
    return (0);
}
```

#### 🟡 **Gelişmiş Örnekler**

```c
#include "ft_printf.h"

int main(void)
{
    int number = 255;
    char *name = "42 School";
    void *ptr = &number;
    
    // Farklı format specifier'ları
    ft_printf("Decimal: %d\n", number);           // 255
    ft_printf("Unsigned: %u\n", number);          // 255
    ft_printf("Hex (lower): %x\n", number);       // ff
    ft_printf("Hex (upper): %X\n", number);       // FF
    ft_printf("Pointer: %p\n", ptr);              // 0x7fff...
    
    // Kombinasyonlar
    ft_printf("Name: %s, Age: %d, Grade: %c\n", name, 25, 'A');
    
    // Özel durumlar
    ft_printf("Percentage: %d%%\n", 100);         // 100%
    ft_printf("NULL string: %s\n", NULL);         // (null)
    
    return (0);
}
```

#### 🔴 **Return Value Kullanımı**

```c
#include "ft_printf.h"

int main(void)
{
    int chars_printed;
    
    // ft_printf döndürülen değeri kullanma
    chars_printed = ft_printf("Hello, World!\n");
    ft_printf("Printed %d characters\n", chars_printed);
    
    // Conditional output
    if (ft_printf("Debug: Value = %d\n", 42) < 0)
        ft_printf("Error occurred!\n");
    
    return (0);
}
```

---

## 🧪 Test Senaryoları

### ✅ **Doğruluk Testleri**

#### 📊 **Format Comparison Tests**

```c
// Standard printf ile karşılaştırma
printf("Standard: %d, %s, %c\n", 42, "test", 'X');
ft_printf("Custom:   %d, %s, %c\n", 42, "test", 'X');

// Expected output should be identical
```

#### 🔢 **Numerical Tests**

```c
// Edge cases for numbers
ft_printf("Max int: %d\n", 2147483647);
ft_printf("Min int: %d\n", -2147483648);
ft_printf("Zero: %d\n", 0);
ft_printf("Unsigned max: %u\n", 4294967295u);
```

#### 🔤 **String Tests**

```c
// String edge cases
ft_printf("Empty: '%s'\n", "");
ft_printf("NULL: '%s'\n", NULL);           // Should print (null)
ft_printf("Long: '%s'\n", "Very long string...");
```

### ⚠️ **Hata Durumları**

#### 🚫 **Invalid Format Tests**

```c
// Invalid format specifiers (undefined behavior)
ft_printf("Invalid: %q\n", 42);           // Not implemented
ft_printf("Missing: %\n");                // Incomplete format
```

#### 🧠 **Memory Safety Tests**

```c
// Test for buffer overflows and memory leaks
for (int i = 0; i < 1000; i++) {
    ft_printf("Test iteration: %d\n", i);
}
// Should not cause memory leaks
```

### 📈 **Performance Tests**

```c
#include <time.h>

// Performance comparison
clock_t start, end;

// Test ft_printf performance
start = clock();
for (int i = 0; i < 10000; i++) {
    ft_printf("Performance test: %d\n", i);
}
end = clock();
double ft_time = ((double)(end - start)) / CLOCKS_PER_SEC;

// Compare with standard printf
start = clock();
for (int i = 0; i < 10000; i++) {
    printf("Performance test: %d\n", i);
}
end = clock();
double std_time = ((double)(end - start)) / CLOCKS_PER_SEC;

ft_printf("ft_printf time: %f seconds\n", ft_time);
ft_printf("printf time: %f seconds\n", std_time);
```

---

## 📚 Notlar

### ⚠️ **Önemli Dikkat Edilmesi Gerekenler**

#### 🛡️ **Bellek Yönetimi**
- **Write System Call**: Fonksiyon `write` sistem çağrısını kullanarak çıktı üretir
- **Buffer Safety**: Buffer overflow'lardan korunmak için güvenli bellek işlemleri
- **Memory Leaks**: Dinamik bellek kullanımında dikkatli bellek serbest bırakma

#### 🔧 **Performans Optimizasyonları**
- **Minimal System Calls**: Çıktı işlemlerini optimize etmek için minimum `write` çağrısı
- **Efficient Conversions**: Sayı dönüşümlerinde optimize edilmiş algoritmalar
- **String Handling**: Etkili string işleme teknikleri

#### 🧪 **Test ve Debugging**
- **Unit Testing**: Her format specifier için ayrı test senaryoları
- **Edge Cases**: Sınır durumlarında (NULL, 0, MAX_INT) doğru davranış
- **Comparison Testing**: Standart `printf` ile çıktı karşılaştırması

### 💻 **Geliştirme Süreci**

1. **Planning Phase**: Format specifier'ların belirlenmesi
2. **Core Implementation**: Ana parsing algoritmasının yazılması
3. **Handler Development**: Her format için özel handler fonksiyonları
4. **Testing Phase**: Kapsamlı test senaryolarının oluşturulması
5. **Optimization**: Performans iyileştirmeleri
6. **Documentation**: Kod dokümantasyonu ve kullanım kılavuzu

---

<div align="center">

### 🎯 **Core Skills Gained**

![Variadic Functions](https://img.shields.io/badge/Variadic-Functions-blue?style=flat-square)
![String Parsing](https://img.shields.io/badge/String-Parsing-green?style=flat-square)
![Number Systems](https://img.shields.io/badge/Number-Systems-orange?style=flat-square)
![System Calls](https://img.shields.io/badge/System-Calls-red?style=flat-square)
![Memory Management](https://img.shields.io/badge/Memory-Management-purple?style=flat-square)

---

**📝 "Printf'i yeniden yazmak, C dilinin derinliklerini anlamanın en iyi yollarından biridir."**

*Bu proje sadece bir fonksiyon yazmak değil, aynı zamanda sistem programlamanın temellerini öğrenmektir.*

---

### 👨‍💻 Created by Sude Naz Karayıldırım

[![42 Profile](https://img.shields.io/badge/42%20Profile-sukaraya-black?style=flat-square&logo=42&logoColor=white)](https://profile.intra.42.fr/users/skarayil)
[![GitHub](https://img.shields.io/badge/GitHub-skarayil-181717?style=flat-square&logo=github&logoColor=white)](https://github.com/skarayil)

**⭐ Eğer bu proje işinize yaradıysa, repo'ya star vermeyi unutmayın!**

</div>
