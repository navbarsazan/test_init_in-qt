#include "MyClass.h"

// پیاده‌سازی تابع calculateChecksum
int MyClass::calculateChecksum(const QString& data) {
    int checksum = 0;
    for (QChar c : data) {
        checksum += c.unicode();  // محاسبه چک‌سام با استفاده از یونیکد کاراکترها
    }
    return checksum;
}
