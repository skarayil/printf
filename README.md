# ft_printf - C Dilinde Biçimlendirilmiş Çıktı Fonksiyonu

**C dilinde biçimlendirilmiş çıktı üretmek için bir fonksiyon yazmaktır. Bu proje, verilerin belirli bir formatın ekrana yazdırılmasını sağlarken, sistem çağrıları ile çıktı üretimi ve bellek yönetimi üzerine pratik yapma fırsatı sunar.**

## Projenin Amacı

*    **⁠⁠Variadic Function Kullanımı:**
    va_list ⁠, ⁠ va_start ⁠, ⁠ va_arg ⁠, ⁠ va_end ⁠ makrolarıyla değişken sayıda argüman alan fonksiyon yazma becerisi kazanılır.

*    **⁠Format Ayrıştırma ve Analiz:**
    Format string karakter karakter işlenerek, doğru türde veri yazdırma mantığı geliştirilir.

*    **⁠Hexadecimal ve Pointer İşlemleri:**
  Sayıların onluk sistemden onaltılıya (base 10 → base 16) dönüştürülmesi ve pointer adreslerinin yazdırılması öğrenilir.

*    **⁠String Manipülasyonu ve Sayı Dönüştürme:**
  Sayıların uzunluğunu hesaplama ve sayıları karakter dizisi olarak yazma işlemleri pratiğe dökülür.

*    **⁠Modüler Kod Yapısı:**
  Fonksiyonlar tek sorumluluk prensibine uygun, okunabilir ve test edilebilir şekilde yazılır.

*    **⁠Bellek Güvenliği:**
  Bellek yönetimi ve ⁠ write ⁠ fonksiyonu güvenli kullanılarak tanımsız davranışlardan (undefined behavior) kaçınılır.

*    **⁠Debug ve Test Yetkinliği:**
  Geliştirilen fonksiyonların standart ⁠ printf ⁠ ile çıktısı karşılaştırılarak doğruluk ve kararlılık testleri yapılır.

*    **⁠Düşük Seviyeli Çıktı Yönetimi:**
  C dilinde düşük seviyede nasıl çıktı üretildiği ve ⁠ write ⁠ sistem çağrısı ile bu çıktının nasıl kontrol edildiği uygulamalı olarak öğrenilir.

## Desteklenen Özellikler

*    **`%c`: Karakter yazdırır.**
*    **`%s`: String yazdırır.**
*    **`%p`: İşaretçi adresini yazdırır.**
*    **`%d` ve `%i`: Ondalık (decimal) tam sayı yazdırır.**
*    **`%u`: İşaretsiz ondalık tam sayı yazdırır.**
*    **`%x`: İşaretsiz onaltılık (hexadecimal) tam sayıyı küçük harflerle yazdırır.**
*    **`%X`: İşaretsiz onaltılık tam sayıyı büyük harflerle yazdırır.**
*    **`%%`: Yüzde işareti (%) yazdırır.**


## Dosya Yapısı

```
ft_printf
│
├── Makefile                    # Projeyi derlemek için kullanılan makefile komutlarını içerir.
├── ft_printf.c                 # `ft_printf()` fonksiyonunun ana işlevini içerir.
├── ft_printf.h                 # Fonksiyon prototipleri ve gerekli kütüphaneleri içerir.
├── ft_printf_utils.c           # Yardımcı fonksiyonları içerir (çeşitli çıktı işlemleri için).
├── ft_printf_base.             # Taban dönüşümleri için kullanılan yardımcı fonksiyonları içerir.
├── README.md                   # Proje hakkında bilgi ve kullanım talimatları içerir.


```

## Kurulum

Projeyi yerel sisteminize klonlamak için aşağıdaki komutu kullanabilirsiniz:

```bash
git clone https://github.com/skarayil/printf.git
```

## Gerekli Bağımlılıklar

Projeyi derlemek için C derleyicisi (cc) gereklidir.

## Kullanım

Kitaplık `make` komutu ile derlendikten sonra oluşan `libftprintf.a` dosyasını projenize bağlayarak, `ft_printf.h` başlık dosyasını çağırdıktan sonra `ft_printf` fonksiyonunu kullanabilirsiniz. ft_printf fonksiyonu, kullanıcı tarafından belirtilen format string'ine göre verileri yazdırır.

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Merhaba, %s!\n", "Dünya");
    ft_printf("Sayınız: %d\n", 42);
    return 0;
}
```

## Test Senaryoları

*    **Doğrudan Yazdırma:**
  Belirtilen formatlar ile çıktı yazdırılır ve kontrol edilir.

*    **Hata Durumları:**
  Hatalı formatlar ile çıktı alınmaya çalışılır ve hataların doğru şekilde yönetildiği kontrol edilir.

## Notlar
* Çıktı yönetimi: Fonksiyon, verilen formatla uyumlu çıktılar üretir. Bellek sızıntılarının önlenmesi için her okunan satır sonunda belleğin doğru şekilde serbest bırakılması gerekir.

* Bellek yönetimi: ft_printf fonksiyonu, verilerin doğru şekilde yazdırılması ve bellek yönetimini düzgün bir şekilde yapar.

---

### Created by Sude Naz Karayıldırım
