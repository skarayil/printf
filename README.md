# ft_printf: C Dilinde Biçimlendirilmiş Çıktı Fonksiyonu

# Tanım  
**Bu projenin amacı, C dilinde sıklıkla kullanılan ⁠ printf ⁠ fonksiyonunun temel işlevlerini sıfırdan yazmak ve:**

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

# Desteklenen Formatlar:

*    **   `%c`: Karakter yazdırır.**
*    **   `%s`: String yazdırır.**
*    **   `%p`: İşaretçi adresini yazdırır.**
*    **   `%d` ve `%i`: Ondalık (decimal) tam sayı yazdırır.**
*    **   `%u`: İşaretsiz ondalık tam sayı yazdırır.**
*    **   `%x`: İşaretsiz onaltılık (hexadecimal) tam sayıyı küçük harflerle yazdırır.**
*    **   `%X`: İşaretsiz onaltılık tam sayıyı büyük harflerle yazdırır.**
*    **   `%%`: Yüzde işareti (%) yazdırır.**

---
### Created by Sude Naz Karayıldırım
